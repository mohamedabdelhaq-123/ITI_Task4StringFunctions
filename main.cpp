#include <iostream>
#include <stdio.h>
#include "Headers.h"
#include "FuncsHeaders.h"



int main()
{
    char str1[44]="momo";
    char str2[]="mmm";
    printf("%d",str_Cmp(str1,str2));
    printf("%d",str_Len(str1));
    printf("%d\n",sizeof(str1));

    printf("%d\n", str_Concat(str1,str2,sizeof(str1)));
    printf("%s\n",str1);

    printf("%d\n",str_Cpy(str1,str2));
    printf("%s\n",str2);

    to_Lower(str1);
    //cout << "Hello world!" << endl;
    return 0;
}
