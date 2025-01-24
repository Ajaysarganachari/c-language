#include<stdio.h>
//#define: Used to define a macro.
#define num 1.2836487487
//#undef: Used to undefine a macro.
//#undef num
//#include: Used to include a file in the source code program.
#include<string.h>
#include<time.h>

//ifdef: Used to include a section of code if a certain macro is defined by #define.
#ifdef num
    //#define msg "num is defined"
    #define num 4.1
#endif
//#ifndef: Used to include a section of code if a certain macro is not defined by #define.
#ifndef MAX
    #define MAX 100
#endif
#define MIN 31
//#if: used to check the macro condition
#if MIN > 30
    #define msg "MIN is Greater than 30"
//#elif: used to check the macro condition if #if fails
#elif MIN == 30
    #define msg "MIN is equal than 30"
//#else: used to run code if #if  & #elif fails
#else
    #define msg "MIN is less 30"
//#endif used to terminate #if #ifdef #ifndef
#endif
//#line: Used to modify line number and filename information.
#line 34 "pre.c"
int main(){
    printf("num=%.13lf msg=%s\n",num,msg);
    printf("area of circle is =%f\n",(num*5*5));
    char str[100]="circle";
    printf("str len=%d\n",strlen(str));
    printf("MAX=%d\n",MAX);
    printf("msg=%s\n",msg);
    printf("Line=%d \n",__LINE__);
    printf("Time =%s \n",__TIME__);
    printf("Date=%s \n",__DATE__);
    printf("File=,%s n",__FILE__);
    return 0;
}
