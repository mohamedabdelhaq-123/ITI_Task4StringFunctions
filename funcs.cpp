#include <iostream>
#include <stdio.h>
#include "Headers.h"
#include "FuncsHeaders.h"

using namespace std;

void to_Capital(char* str)
{
    for (int i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-'a'+'A';
        }
    }
    printf("%s",str);
}

void to_Lower(char* str)
{
    for (int i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]-'A'+'a';
        }
    }
    printf("%s",str);
}


int str_Len(char* str)  // count untill the null (null not counted)
{
    int len=0;
    for (int i=0;str[i];i++)
    {
        len++;
    }
    return len;
}

int str_Cpy(char* str1, char* str2)
{
    int status=-1,i=0;
    if (str_Len(str1)<= str_Len(str2))
    {
        for (i=0;str1[i];i++)
        {
            str2[i]=str1[i];
        }
        str2[i]='\0';
        status=1;
    }
    else
    {
        status=0;
    }
    return status;
}

int str_Concat(char*str1,char*str2, int wholeSizeStr1)
{
    int status=-1,i=0,str1Length=str_Len(str1), str2Length=str_Len(str2),j=0;
    int sizeToTest=str1Length + str2Length;
    if (wholeSizeStr1 >= sizeToTest)
    {
        for (i=str1Length ;str2[j];i++)
        {
            str1[i]=str2[j];
            j++;
        }
        str1[i]='\0';
        status=1;
    }
    else
    {
        status=0;
    }
    return status;
}


int str_Cmp(char*str1,char*str2)
{
    int status=Error,i=0,str1Length=str_Len(str1), str2Length=str_Len(str2),j=0;
    int sizeToTest=str1Length + str2Length;

    if (str1Length == str2Length)
    {
        for (i=0 ;str1[i] ;i++)
        {
            if(str1[i]!=str2[i])
            {
                status= StringsAreEqualButNotSame;
            }
            else
            {
                status= StringsAreSame;
            }
        }
    }
    else if(str1Length >= str2Length)
    {
        status=String1Bigger;
    }
    else
    {
        status= String2Bigger;
    }
 return status;
}
