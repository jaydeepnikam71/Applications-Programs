//5. Write a program which accept string from user and display in it in reverse order.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Reverse(char *str)
{   
    int iCnt=0;
    int jCnt=0;
    int len = 0;

    len = strlen(str);

    for(iCnt=0,jCnt=len-1;iCnt<=jCnt;iCnt++,jCnt--)
    {
        char c = str[iCnt];
        str[iCnt]=str[jCnt];
        str[jCnt]=c;
    }
    
}

int main()
{   
    char Arr[20];

    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("Reverse String is : %s\n",Arr);

    return 0;
}

