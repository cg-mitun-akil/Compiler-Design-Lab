#include <bits/stdc++.h>
using namespace std;

int glob_id = 0;
set<int> avoid_id;
int syms = 0;

bool preced(char a, char b)
{
    if (a == b)
        return true;
    else if (a == '*')
        return true;
    else if (a == '?')
    {
        if (b == '*')
            return false;
        else
            return true;
    }
    else if (a == '+')
    {
        if (b == '+')
            return true;
        else
            return false;
    }
    return false;
}

string postfix(string s) // Shunting-Yard Algorithm
{
    string output = "";
    stack<char> st;
    for (auto z : s)
    {
        if (z == '?' or z == '*' or z == '+')
        {
            while (!st.empty() and st.top() != '(' and preced(st.top(), z))
            {
                output.append(1, st.top());
                st.pop();
            }
            st.push(z);
        }
        else if (z == '(')
            st.push(z);
        else if (z == ')')
        {
            while (!st.empty() and st.top() != '(')
            {
                output.append(1, st.top());
                st.pop();
            }
            st.pop();
        }
        else
        {
            output.append(1, z);
        }
    }
    while (!st.empty())
    {
        output.append(1, st.top());
        st.pop();
    }
    return output;
}

struct NFATransition
{
    char input_symbol;           // The input symbol for the transition.
    struct NFAState *next_state; // Pointer to the next state.
};

NFATransition *ntra[1000];
int traid = 0;

struct NFAState
{
    int state_id;                           // A unique identifier for the state.
    int is_final;                           // Flag to indicate if the state is a final state (1) or not (0).
    struct NFATransition *transitions[100]; // Pointer to an array of transitions for this state.
    int num_transitions;                    // The number of transitions for this state.
    NFAState()
    {
        state_id = glob_id++;
        num_transitions = 0;
        is_final = 0;
    }
};

NFAState *nfstates[1000];

struct NFA
{
    struct NFAState *start_state; // Pointer to the start state of the NFA.
    struct NFAState *final_state; // Pointer to the final state of the NFA.
    NFA()
    {
        start_state = new NFAState();
        final_state = new NFAState();
        nfstates[ start_state->state_id ] = start_state;
        nfstates[ final_state->state_id ] = final_state;
    }
};

NFA *emptyTransition()
{
    NFA *res = new NFA();
    res->start_state->num_transitions++;
    res->start_state->transitions[res->start_state->num_transitions - 1] = new NFATransition();
    res->start_state->transitions[res->start_state->num_transitions - 1]->input_symbol = 'E';
    res->start_state->transitions[res->start_state->num_transitions - 1]->next_state = res->final_state;
    ntra[traid++] = res->start_state->transitions[res->start_state->num_transitions - 1];
    res->final_state->is_final = 1;
    return res;
}

NFA *symbolTransition(char sym)
{
    NFA *res = new NFA();
    res->start_state->num_transitions++;
    res->start_state->transitions[res->start_state->num_transitions - 1] = new NFATransition();
    res->start_state->transitions[res->start_state->num_transitions - 1]->input_symbol = sym;
    res->start_state->transitions[res->start_state->num_transitions - 1]->next_state = res->final_state;
    ntra[traid++] = res->start_state->transitions[res->start_state->num_transitions - 1];
    res->final_state->is_final = 1;
    return res;
}

NFA *unionTransition(NFA *n1, NFA *n2)
{
    NFA *res = new NFA();
    NFATransition *s1 = new NFATransition();
    NFATransition *s2 = new NFATransition();
    s1->input_symbol = 'E';
    s1->next_state = n1->start_state;
    s2->input_symbol = 'E';
    s2->next_state = n2->start_state;
    res->start_state->transitions[res->start_state->num_transitions++] = s1;
    res->start_state->transitions[res->start_state->num_transitions++] = s2;
    n1->final_state->is_final = 0;
    n2->final_state->is_final = 0;
    NFATransition *s3 = new NFATransition();
    NFATransition *s4 = new NFATransition();
    s3->input_symbol = 'E';
    s3->next_state = res->final_state;
    s4->input_symbol = 'E';
    s4->next_state = res->final_state;
    n1->final_state->transitions[n1->final_state->num_transitions++] = s3;
    n2->final_state->transitions[n2->final_state->num_transitions++] = s4;
    ntra[traid++] = s1;
    ntra[traid++] = s2;
    ntra[traid++] = s3;
    ntra[traid++] = s4;
    res->final_state->is_final = 1;
    return res;
}

NFA *concatTransition(NFA *n1, NFA *n2)
{
    n1->final_state->is_final = 0;
    for (int i = 0; i < traid; i++)
    {
        if (ntra[i]->next_state == n1->final_state)
            ntra[i]->next_state = n2->start_state;
    }
    avoid_id.insert(n1->final_state->state_id);
    n1->final_state = n2->final_state;
    n1->final_state->is_final = 1;
    return n1;
}

NFA *kleenTransition(NFA *n1)
{
    NFA *res = new NFA();
    NFATransition *s1 = new NFATransition();
    NFATransition *s2 = new NFATransition();
    NFATransition *s3 = new NFATransition();
    NFATransition *s4 = new NFATransition();
    ntra[traid++] = s1;
    ntra[traid++] = s2;
    ntra[traid++] = s3;
    ntra[traid++] = s4;
    s1->input_symbol = 'E';
    s2->input_symbol = 'E';
    s3->input_symbol = 'E';
    s4->input_symbol = 'E';
    s1->next_state = n1->start_state;
    s2->next_state = n1->start_state;
    n1->final_state->is_final = 0;
    s3->next_state = res->final_state;
    s4->next_state = res->final_state;
    res->start_state->transitions[res->start_state->num_transitions++] = s1;
    n1->final_state->transitions[n1->final_state->num_transitions++] = s2;
    n1->final_state->transitions[n1->final_state->num_transitions++] = s3;
    res->start_state->transitions[res->start_state->num_transitions++] = s4;
    res->final_state->is_final = 1;
    return res;
}

NFA *nfa_gen(string s)
{
    stack<NFA *> st;
    for (auto z : s)
    {
        if (z <= 'z' and z >= 'a')
        {
            NFA *n1 = symbolTransition(z);
            st.push(n1);
        }
        else if (z == '+')
        {
            NFA *n1 = st.top();
            st.pop();
            NFA *n2 = st.top();
            st.pop();
            NFA *n3 = unionTransition(n2, n1);
            st.push(n3);
        }
        else if (z == '*')
        {
            NFA *n1 = st.top();
            st.pop();
            NFA *n2 = kleenTransition(n1);
            st.push(n2);
        }
        else if (z == '?')
        {
            NFA *n1 = st.top();
            st.pop();
            NFA *n2 = st.top();
            st.pop();
            NFA *n3 = concatTransition(n2, n1);
            st.push(n3);
        }
    }
    return st.top();
}

set<int> dfs;
map< int , map< char , set<int> > > transTable;
void print(NFAState *ns)
{
    transTable[ns->state_id]['&'].insert('&');
    if (dfs.find(ns->state_id) != dfs.end())
        return;
    dfs.insert(ns->state_id);
    cout << "state id: " << ns->state_id << endl;
    for (int i = 0; i < ns->num_transitions; i++)
    {
        if( ns->transitions[i]->input_symbol != '~' )
        {
            cout << "\t" << ns->transitions[i]->input_symbol << " ->" << ns->transitions[i]->next_state->state_id << endl;
            transTable[ns->state_id][ns->transitions[i]->input_symbol].insert(ns->transitions[i]->next_state->state_id);
        }
    }
    for (int i = 0; i < ns->num_transitions; i++)
    {
        if( ns->transitions[i]->input_symbol != '~' )
            print(ns->transitions[i]->next_state);
    }
}
void print(NFA *n1)
{
    cout<<"NFA with epsilon--------------------------"<<endl;
    dfs.clear();
    cout << "no of states: " << glob_id - avoid_id.size() << endl;
    cout << "start state: " << n1->start_state->state_id << endl;
    cout << "end state: " << n1->final_state->state_id << endl;
    print(n1->start_state);
}

vector<NFAState *> start_states;
vector<NFAState *> final_states;

struct nenfa{
    struct NFAState *start_states[100]; // Pointer to the start state of the NFA.
    struct NFAState *final_states[100]; // Pointer to the final state of the NFA.
    int num_start_states;
    int num_final_states;
    nenfa()
    {
        num_start_states = 0;
        num_final_states = 0;
    }
};

void remove_epsilon(NFAState *ns, bool &flag)
{
    if (dfs.find(ns->state_id) != dfs.end())
        return;
    dfs.insert(ns->state_id);
    NFAState *ns2;
    bool found = false;
    int ind = -1;
    for (int i = 0; i < ns->num_transitions; i++)
    {
        if (ns->transitions[i]->input_symbol == 'E')
        {
            ind = i;
            found = true;
            ns2 = ns->transitions[i]->next_state;
            break;
        }
    }
    if (found)
    {
        ns->transitions[ind]->input_symbol = '~';
        for (int i = 0; i < ns2->num_transitions; i++)
        {
            if (ns2->transitions[i]->input_symbol == '~')
                continue;
            bool isthere = false;
            for (int j = 0; j < ns->num_transitions; j++)
            {
                if (ns->transitions[j]->input_symbol == ns2->transitions[i]->input_symbol)
                {
                    if (ns->transitions[j]->next_state == ns2->transitions[i]->next_state)
                    {
                        isthere = true;
                        break;
                    }
                }
            }
            if (!isthere)
            {
                NFATransition *s1 = new NFATransition();
                ns->transitions[ns->num_transitions++] = s1;
                ntra[traid++] = s1;
                s1->input_symbol = ns2->transitions[i]->input_symbol;
                s1->next_state = ns2->transitions[i]->next_state;
            }
        }
        if (ns2->is_final == 1)
        {
            if (ns->is_final == 0)
            {
                ns->is_final = 1;
                final_states.push_back(ns);
            }
        }
        bool add = false;
        for (int f = 0; f < start_states.size(); f++)
        {
            if (start_states[f] == ns)
            {
                add = true;
                break;
            }
        }
        if (add)
        {
            add = true;
            for (int f = 0; f < start_states.size(); f++)
                if (start_states[f] == ns2)
                {
                    add = false;
                    break;
                }
            if (add)
                start_states.push_back(ns2);
        }
        flag = true;
        return;
    }
    for (int i = 0; i < ns->num_transitions; i++)
    {
        remove_epsilon(ns->transitions[i]->next_state, flag);
        if (flag)
            return;
    }
}

nenfa *nfa_to_Nenfa(NFA *n1)
{
    nenfa *res = new nenfa();
    start_states = vector<NFAState *>(0);
    final_states = vector<NFAState *>(0);
    start_states.push_back(n1->start_state);
    final_states.push_back(n1->final_state);
    while (true)
    {
        bool flag = false;
        for (int i = 0; i < start_states.size(); i++)
        {
            dfs.clear();
            remove_epsilon(start_states[i], flag);
            if (flag == true)
                break;
        }
        if (flag == false)
            break;
    }
    for (auto z : start_states)
        res->start_states[res->num_start_states++] = z;
    for (auto z : final_states)
        res->final_states[res->num_final_states++] = z;
    return res;
}

void print( nenfa* n1 )
{
    dfs.clear();
    cout<<"NFA without epsilon-----------------------"<<endl;
    cout << "no of states: " << glob_id - avoid_id.size() << endl;
    cout << "start states: " <<endl;
    for( int i = 0; i < n1->num_start_states ; i++ )
        cout<<n1->start_states[i]->state_id<<" ";
    cout<<endl;
    cout << "end states: " << endl;
    for( int i = 0; i < n1->num_final_states ; i++ )
        cout<<n1->final_states[i]->state_id<<" ";
    cout<<endl;
    for( int i = 0; i < n1->num_start_states ; i++ )
        print( n1->start_states[i] );
    cout << "no of used states: " << dfs.size() << endl;
}

map< int , set<int> > closure;

void closure_dfs( int a , set<int>& s )
{
    if( transTable.find(a) != transTable.end() )
    {
        if( transTable[a].find('E') != transTable[a].end() )
        {
            for( auto g : transTable[a]['E'] )
            {
                if( s.find(g) == s.end() )
                {
                    s.insert(g);
                    closure_dfs( g , s );
                }
            }
        }
    }
}

map< set<int> , map< char , set<int> > > dfa , mdfa;

void enfa_to_dfa( NFA* nfa )
{
    set<int> set1 = closure[ nfa->start_state->state_id ];
    set<set<int>> haveseen;
    stack<set<int>>st;
    st.push(set1);
    while( !st.empty() )
    {
        set1 = st.top();
        st.pop();
        if( haveseen.find(set1) != haveseen.end() or set1.size() == 0 )
            continue;
        haveseen.insert(set1);
        for( int i = 0; i < syms; i++ )
        {
            char sy = 'a' + i;
            set<int> set2;
            for( auto el : set1 )
            {
                if( transTable.find(el) != transTable.end() )
                {
                    if( transTable[el].find(sy) != transTable[el].end() )
                    {
                        auto curr = transTable[el][sy];
                        for( auto ty : curr ) set2.insert( ty );
                    }
                }
            }
            set<int> set3;
            for( auto cy : set2 )
            {
                for( auto dy : closure[cy] ) set3.insert( dy );
            }
            dfa[set1][sy] = set3;
            if( haveseen.find(set3) == haveseen.end() )
                st.push( set3 );
        }
    }
}

vector<set<int>>dfa_final_states;
vector<set<int>>dfa_nonfinal_states;
set<int> sdState;
set<set<int>>edState;

int par( int a , vector<int>&parent )
{
    if( parent[a] == a )
        return a;
    return parent[a] = par( parent[a] , parent );
}

void minimise_dfa( NFA* nfa )
{
    vector<int>parent1( dfa_final_states.size() );
    vector<int>parent2( dfa_nonfinal_states.size() );
    for( int i = 0; i < parent1.size() ; i++ )
        parent1[i] = i;
    for( int i = 0; i < parent2.size() ; i++ )
        parent2[i] = i; 
    while(true)
    {   
        bool flag = false; 
        for( int i = 0; i < dfa_final_states.size() - 1 ; i++ )
        {
            for( int j = i + 1; j < dfa_final_states.size() ; j++ )
            {
                if( dfa[ dfa_final_states[i] ] == dfa[ dfa_final_states[j] ] )
                {
                    int a = par( i , parent1 );
                    int b = par( j , parent1 );
                    if( a == b )
                        continue;
                    parent1[a] = b;
                    flag = true;
                    break;
                }
            }
            if( flag )
                break;
        }
        if( flag == false )
        {
            for( int i = 0; i < dfa_nonfinal_states.size() - 1 ; i++ )
            {
                for( int j = i + 1; j < dfa_nonfinal_states.size() ; j++ )
                {
                    if( dfa[ dfa_nonfinal_states[i] ] == dfa[ dfa_nonfinal_states[j] ] )
                    {
                        int a = par( i , parent2 );
                        int b = par( j , parent2 );
                        if( a == b )
                            continue;
                        parent2[a] = b;
                        flag = true;
                        break;
                    }
                }
                if( flag )
                    break;
            }
        }
        if(flag)
        {
            for( auto z = dfa.begin() ; z != dfa.end() ; z++ )
            {
                for( int k = 0; k < syms; k++ )
                {
                    char coke = 'a' + k;
                    for( int y = 0; y < dfa_final_states.size(); y++ )
                    {
                        if( dfa_final_states[y] == dfa[z->first][coke] )
                        {
                            dfa[z->first][coke] = dfa_final_states[par( y , parent1 )];
                            break;
                        }
                    }
                    for( int y = 0; y < dfa_nonfinal_states.size() ; y++ )
                    {
                        if( dfa_nonfinal_states[y] == dfa[z->first][coke] )
                        {
                            dfa[z->first][coke] = dfa_nonfinal_states[par( y , parent2 )];
                            break;
                        }
                    }
                }
            }
        }
        else{
            break;
        }

    }
    sdState = closure[ nfa->start_state->state_id ];
    for( int y = 0; y < dfa_final_states.size(); y++ )
    {
        if( dfa_final_states[y] == sdState )
        {
            sdState = dfa_final_states[par( y , parent1 )];
            break;
        }
    }
    for( int y = 0; y < dfa_nonfinal_states.size() ; y++ )
    {
        if( dfa_nonfinal_states[y] == sdState )
        {
            sdState = dfa_nonfinal_states[par( y , parent2 )];
            break;
        }
    }
    cout<<"Minimised_DFA----------------------------"<<endl;
    cout<<"start state: { ";
    for( auto gy : sdState )
        cout<<gy<<" ";
    cout<<"}\n";
    cout<<"end states: \n{\n";
    
    for( int i = 0; i < dfa_final_states.size() ; i++ )
    {
        edState.insert( dfa_final_states[par( i , parent1 )] );
    }
    for( auto z : edState )
    {
        cout<<"  { ";
        for( auto ght: z )
            cout<<ght<<" ";
        cout<<"}\n";
    }
    cout<<"}\n";
    int nstates = 0;
    for( int i = 0; i < parent1.size() ; i++ )
        if( parent1[i] == i )
            nstates++;
    for( int i = 0; i < parent2.size() ; i++ )
        if( parent2[i] == i )
            nstates++;
    cout<<"no of states: "<<nstates<<endl;
    for( int i = 0; i < parent1.size() ; i++ )
    {
        if( parent1[i] == i )
            mdfa[ dfa_final_states[i] ] = dfa[ dfa_final_states[i] ];
    }
    for( int i = 0; i < parent2.size() ; i++ )
    {
        if( parent2[i] == i )
            mdfa[ dfa_nonfinal_states[i] ] = dfa[ dfa_nonfinal_states[i] ];
    }
    for( auto z = mdfa.begin() ; z != mdfa.end() ; z++ )
    {
        cout<<"{ ";
        for( auto cf: z->first )
            cout<<cf<<" ";
        cout<<"} "<<endl;
        for( int i = 0; i < syms ; i++ )
        {
            char sy = 'a' + i;
            auto set2 = mdfa[ z->first ][sy];
            cout<<"   "<<sy<<" : ";
            if( set2.size() == 0 )
                cout<<" @ "<<endl;
            else{
                cout<<"{ ";
                for( auto mun:set2 )
                    cout<<mun<<" ";
                cout<<"}"<<endl;
            }
        }
    }
}

void print( set<int>& h )
{
    if( h.size() == 0 )
    {
        cout<<"@"<<endl;
        return;
    }
    cout<<"{ ";
    for( auto t : h )
        cout<<t<<" ";
    cout<<"}\n";
}

void simulate( string test1 )
{
    set<int> currstate = sdState;
    for( auto z : test1 )
    {
        if( z >= 'a' + syms )
        {
            cout<<z<<" not compatible with Sigma defined"<<endl;
            return;
        }
        print(currstate);
        if( currstate.size() == 0 )
        {
            cout<<"Not a valid string"<<endl;
            return;
        }
        cout<<"|-> "<<z<<" ->|"<<endl;
        currstate = mdfa[currstate][z];
    }
    print(currstate);
    if( currstate.size() == 0 )
    {
        cout<<"Not a valid string"<<endl;
        return;
    }
    if( edState.find(currstate) != edState.end() )
        cout<<"Valid string"<<endl;
    else{
        cout<<"Partially valid does not end at a valid state"<<endl;
    }
}

int main()
{
    string s;
    cout << "regex: ";
    cin >> s;
    set<char>ginga;
    for( auto z : s )
        if( z <= 'z' and z >= 'a' )
            ginga.insert(z);
    syms = ginga.size();
    string t = postfix(s);
    cout << "postfix: " << t << endl;
    NFA *nfa = nfa_gen(t);
    print(nfa);
    cout<<"Closure---------------------------------"<<endl;
    for( auto z = transTable.begin() ; z != transTable.end() ; z++ )
    {
        set<int>res;
        res.insert(z->first);
        closure_dfs(z->first, res );
        cout<<z->first<<":> { ";
        for( auto rd : res )
        {
            cout<<rd<<" ";
        }
        cout<<"}"<<endl;
        closure[z->first] = res;
    }
    enfa_to_dfa( nfa );

    nenfa* nfa_e = nfa_to_Nenfa(nfa);
    print( nfa_e );

    cout<<"DFA------------------------------------"<<endl;
    cout<<"start state: { ";
    for( auto gy : closure[ nfa->start_state->state_id ] )
        cout<<gy<<" ";
    cout<<"}\n";
    cout<<"end states: \n{\n";
    for( auto z = dfa.begin() ; z != dfa.end() ; z++ )
    {
        auto q = z->first;
        if( q.find( nfa->final_state->state_id ) != q.end() )
        {
            dfa_final_states.push_back( q );
            cout<<"  { ";
            for( auto ght: q )
                cout<<ght<<" ";
            cout<<"}\n";
        }
        else{
            dfa_nonfinal_states.push_back( q );
        }
    }
    cout<<"}\n";
    cout<<"no of states: "<<dfa.size()<<endl;
    for( auto z = dfa.begin() ; z != dfa.end() ; z++ )
    {
        cout<<"{ ";
        for( auto cf: z->first )
            cout<<cf<<" ";
        cout<<"} "<<endl;
        for( int i = 0; i < syms ; i++ )
        {
            char sy = 'a' + i;
            auto set2 = dfa[ z->first ][sy];
            cout<<"   "<<sy<<" : ";
            if( set2.size() == 0 )
                cout<<" @ "<<endl;
            else{
                cout<<"{ ";
                for( auto mun:set2 )
                    cout<<mun<<" ";
                cout<<"}"<<endl;
            }
        }
    }

    minimise_dfa(nfa);
    int code;
    cout<<"Simulation-------------------------------"<<endl;
    testmore:
    cout<<"Enter string to test against DFA: ";
    string test1;
    cin>>test1;
    simulate( test1 );
    cout<<"Simulate more (1/0)?: ";
    cin>>code;
    if( code == 1 )
        goto testmore;
    return 0;
}