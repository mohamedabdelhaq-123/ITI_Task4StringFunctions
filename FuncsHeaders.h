#ifndef FUNCSHEADERS_H_INCLUDED
#define FUNCSHEADERS_H_INCLUDED


#ifdef _WIN32
#include <windows.h>
#include <conio.h>  // for getch() on Windows
#else
#include <unistd.h>
#include <ncurses.h>
#endif

#include <vector>
#include <string>



#define StringsAreSame 1
#define StringsAreEqualButNotSame 2
#define String1Bigger  3
#define String2Bigger  4
#define Error 5


/////////////////////////////////////Prototypes////////////////////////////////////
using namespace std;


int str_Cmp(char*str1,char*str2);
int str_Concat(char*str1,char*str2, int wholeSizeStr1);
int str_Cpy(char* str1, char* str2);
int str_Len(char* str);
void to_Lower(char* str);
void to_Capital(char* str);



#endif // FUNCSHEADERS_H_INCLUDED



