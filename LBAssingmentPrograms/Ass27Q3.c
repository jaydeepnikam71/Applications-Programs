// 3.  Write a program which accept string from user and toggle the case.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strtogglex(char *str)
{
    while(*str !='\0')
    {
        if(*str >='a' && *str<='z')
        {
            *str=*str-32;
        }
        else if(*str >='A' && *str<='Z')
        {
            *str=*str+32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n]s",arr);

    strtogglex(arr);

    printf("Modified string is : \n%s",arr);

    return 0;

}