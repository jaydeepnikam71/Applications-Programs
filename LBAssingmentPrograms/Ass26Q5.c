//5. Write a program which accept string from user and display in it in reverse order.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Reverse(char str[])
{
    printf("Original String is : %s\n",str);

    printf("Reverse String is : %s\n",strrev(str));
    
    /*int i ,j;
    int len  = strlen(str);

    for( i=0,j=len-1;i<=j;i++,j--)
    {
        char c = str[i];
        str[i]=str[j];
        str[j]=c;
    }
    printf("%s",str);*/
}

int main()
{   
    char Arr[20];

    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}

