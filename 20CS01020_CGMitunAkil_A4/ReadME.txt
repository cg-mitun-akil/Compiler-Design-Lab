1. Compile and Execute each file.
2. Follow instructions asked in the console to provide the grammar.
3. Desired output will be printed in the console.
4. For the Recursive Descent Parser the Grammar is implemented. Provide test string and result will be printed.



PS C:\Users\cgmit\OneDrive\Documents\Semester7\CDLab\20CS01020_CGMitunAkil_A4> g++ .\leftRecursion.cpp
PS C:\Users\cgmit\OneDrive\Documents\Semester7\CDLab\20CS01020_CGMitunAkil_A4> ./a.exe 

Enter number of non terminals: 3

Enter non terminals one by one: 
Non terminal 1 : E

Non terminal 2 : T

Non terminal 3 : F

Enter 'esp' for null     
Number of E productions: 2

One by one enter all E productions
RHS of production 1: E+T

RHS of production 2: T

Number of T productions: 2

One by one enter all T productions
RHS of production 1: T*F

RHS of production 2: F

Number of F productions: 2

One by one enter all F productions
RHS of production 1: (E)

RHS of production 2: i
110


New set of non-terminals: E T F E' T'

New set of productions:
E -> TE'
T -> FT'
F -> (E)
F -> i
E' -> +TE'
E' -> esp
T' -> *FT'
T' -> esp

PS C:\Users\cgmit\OneDrive\Documents\Semester7\CDLab\20CS01020_CGMitunAkil_A4> g++ .\leftFactoring.cpp
PS C:\Users\cgmit\OneDrive\Documents\Semester7\CDLab\20CS01020_CGMitunAkil_A4> ./a.exe

Enter the no. of nonterminals : 2

Nonterminal 1
Enter the no. of productions : 3

Enter LHS : A
A->aAB
A->aBc
A->aAc

Nonterminal 2
Enter the no. of productions : 0

Enter LHS : B


The resulting productions are : 

 A' -> | AB | Bc | Ac

 B ->

 A ->  aA' | 

PS C:\Users\cgmit\OneDrive\Documents\Semester7\CDLab\20CS01020_CGMitunAkil_A4> g++ .\recursiveDescentParser.cpp
PS C:\Users\cgmit\OneDrive\Documents\Semester7\CDLab\20CS01020_CGMitunAkil_A4> ./a.exe
Enter the input string: nnx+n+n+
Not accepted
PS C:\Users\cgmit\OneDrive\Documents\Semester7\CDLab\20CS01020_CGMitunAkil_A4> ./a.exe
Enter the input string: nn++n+n+nx
Not accepted
PS C:\Users\cgmit\OneDrive\Documents\Semester7\CDLab\20CS01020_CGMitunAkil_A4> ./a.exe
Enter the input string: nnn++
Accepted