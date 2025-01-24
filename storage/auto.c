#include<stdio.h>
extern int ext=40;

void fun_block(){
    printf("function block:");
    auto int aut=10;
    printf("aut=%d\n",aut);
    aut++;
    register int reg=20;
    printf("reg=%d\n",reg);
    reg++;
    static int stat=30;
    printf("stat=%d\n",stat);
    stat++;
    printf("exit=%d\n",ext);
    ext++;
}
int main(){
    printf("main block:\n");
    auto int aut=9;
    printf("aut=%d\n",aut);
    register int reg=21;
    printf("reg=%d\n",reg);
    fun_block();
    fun_block();
    fun_block();
    fun_block();
    fun_block();
    static int stat=50;
    printf("stat=%d\n",stat);
    stat++;
    printf("ext=%d\n",ext);
    ext++;
    return 0;
}
