// 4.Write a program which accept string from user and accept one character. Return index of last occurence of that character. 

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str,char ch)
{
    int iCnt=1;
    int temp=-1;

    while(*str !='\0')
    {
        if(*str==ch)
        {
            temp=iCnt;
        }
        *str++;
        iCnt++;
    }
    return temp;
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

    iRet=LastChar(arr,cValue);

    printf("Character location is : %d",iRet);
    
    return 0;

}