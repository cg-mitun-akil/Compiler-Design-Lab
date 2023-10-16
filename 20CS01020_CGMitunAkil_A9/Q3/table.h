#include<stdio.h>

char codeTable[100][4];
int currentIndex=0;

char addToTable(char op1, char operation, char op2) 
{
    char ID = 'A' + currentIndex;
    char *tableRow = codeTable[currentIndex];
    tableRow[0] = ID;
    tableRow[1] = op1;
    tableRow[2] = operation;
    tableRow[3] = op2;
    
    currentIndex++;
    return ID;
}

void printResult()
{
    printf("\nResult\n");
    int i=0;
    for (i = 0; i < currentIndex; i++)
    {
        char *tableRow = codeTable[i];
        printf("%c := %c %c %c\n", tableRow[0], tableRow[1], tableRow[2], tableRow[3]);
    }
    printf("\n");
}


