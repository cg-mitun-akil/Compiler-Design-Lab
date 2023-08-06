#include<bits/stdc++.h>
using namespace std;

unordered_set<string> keywords;

class state{
    public:
        int id;
        map<char,int> transition;
};

state states[13];

pair< int , bool > transit( int id , char sym )
{
    if( states[id].transition.find(sym) != states[id].transition.end() )
        return { states[id].transition[sym] , true };
    else if( states[id].transition.find('@') != states[id].transition.end() )
        return { states[id].transition['@'] , false };
    else
        return { -1 , false };
}

void initialise()
{
    keywords.insert("if");
    keywords.insert("else");
    keywords.insert("then");
    keywords.insert("break");
    keywords.insert("continue");

    states[1].id = 1;
    for( auto z : "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" )
        states[1].transition[z] = 2;
    for( auto z : "0123456789" )
        states[1].transition[z] = 4;
    states[1].transition['<'] = 10;
    states[1].transition['='] = 12;
    states[1].transition['>'] = 11;
    states[1].transition['\n'] = 1;
    states[1].transition[' '] = 1;

    states[2].id = 2;
    for( auto z : "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" )
        states[2].transition[z] = 2;
    for( auto z : "0123456789" )
        states[2].transition[z] = 3;
    states[2].transition['@'] = 1;

    states[3].id = 3;
    for( auto z : "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" )
        states[3].transition[z] = 3;
    for( auto z : "0123456789" )
        states[3].transition[z] = 3;
    states[3].transition['@'] = 1;

    states[4].id = 4;
    for( auto z : "0123456789" )
        states[4].transition[z] = 4;
    states[4].transition['.'] = 5;
    states[4].transition['E'] = 7;
    states[4].transition['@'] = 1;

    states[5].id = 5;
    for( auto z : "0123456789" )
        states[5].transition[z] = 6;

    states[6].id = 6;
    for( auto z : "0123456789" )
        states[6].transition[z] = 6;
    states[6].transition['E'] = 7;
    states[6].transition['@'] = 1;

    states[7].id = 7;
    for( auto z : "0123456789" )
        states[7].transition[z] = 9;
    states[7].transition['+'] = 8;
    states[7].transition['-'] = 8;   

    states[8].id = 8;
    for( auto z : "0123456789" )
        states[8].transition[z] = 9;

    states[9].id = 9;
    for( auto z : "0123456789" )
        states[9].transition[z] = 9;
    states[9].transition['@'] = 1;

    states[10].id = 10;
    states[10].transition['>'] = 12;
    states[10].transition['='] = 12;
    states[10].transition['@'] = 1;

    states[11].id = 11;
    states[11].transition['='] = 12;
    states[11].transition['@'] = 1;

    states[12].transition['@'] = 1;
}

string tokenDeterminator( string x , int finalState )
{
    switch( finalState )
    {
        case 2: {
                    if( keywords.find(x) != keywords.end() )
                    {
                        return "Keyword";
                    }
                    else
                    {
                        return "Identifier";
                    }
                }
        case 3: return "Identifier";
        case 4: return "Number";
        case 5: return "Invalid";
        case 6: return "Number";
        case 7: return "Invalid";
        case 8: return "Invalid";
        case 9: return "Number";
        case 10:
        case 11:
        case 12: return "Relop\t";
    }
    return "Invalid";
}

void tokenise( string statement )
{
    statement.append( 1 , '#' );
    string buff = "";
    int currState = 1;
    for( int i = 0; i < statement.size() ; )
    {
        if( currState == 1 and i == statement.size() - 1 )
            break;
        auto z = transit( currState , statement[i] );
        //cout<<z.first<<" "<<z.second<<endl;
        //break;
        if( z.second )
        {
            if( currState != 1 or z.first != currState )
                buff.append( 1 , statement[i] );
            i++;
            currState = z.first;
            continue;
        }
        else{
            if( z.first == -1 )
            {
                if( currState == 1 )
                {
                    buff.append(1,statement[i]);
                    i++;
                }
                cout<<"( Invalid"<<"\t"<<buff<<" )\n";
                currState = 1;
                buff = "";
                continue;
            }
            else{
                cout<<"( "<<tokenDeterminator( buff , currState )<<"\t"<<buff<<" )\n";
                currState = 1;
                buff = "";
                continue;
            }
        }
    }
}

int main()
{
    initialise();
    string statement;
    cout<<"Enter the statement: \n";
    getline( cin , statement );
    tokenise(statement);
    return 0;
}
