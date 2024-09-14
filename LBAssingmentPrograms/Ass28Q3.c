// 3.Write a program which accept string from user and accept one character. Return index of first occurence of that character. 

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str,char ch)
{
    int iCnt=1;

    while(*str !='\0')
    {
        if(*str==ch)
        {
            return iCnt;
        }
        *str++;
        iCnt++;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue='\0';
    int iRet=0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet=FirstChar(arr,cValue);

    printf("Character location is : %d",iRet);
    
    return 0;

}