1. You can download the zip file present in this directory for entire source code

$g++ regex_to_toc.cpp
$./a.out

INPUT
regex: "Enter your regex statement here"
{ concat : '?', kleene : '*' , union : '+' , '()' } allowed regex statements
alphabets: a-z only

OUTPUT
{ 
    postfix , enfa , nfa , dfa , minimised dfa
} is printed ( 'E' here is epsilon notation , '@' is null or empty set accordingly )

Simulate:
INPUT
Enter the string: "Enter a string to iterate via the DFA and check if it 
satisfies your given regex statement"

OUTPUT
{
    state by state the steps are printed.
    result is printed.
}
enter 1 to simulate another, enter 0 to terminate.