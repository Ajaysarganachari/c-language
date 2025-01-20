#include<stdio.h>

//syntax:
//return-type function-name();
void Greet(); //function header
void addition();
void add(int x,int y);

int main(){
    //syntax:
    //function name();
    Greet(); //function call;
    int a=40,b=50;
    addition();
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    add(a,b);//actual parameters
    add(50,50);
    return 0;
}

//syntax:
//return-type function-name(){
    //function def block
    //task when function is called
//}
void Greet(){ //function defination
    printf("Abhyas Kar Anuradha Mobile Nko Bagu\n");
}
void addition(){
    int a=10,b=20;
    printf("addition=%d\n",(a+b));
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
void add(int x,int y){//formal parameters
    printf("add=%d\n",(x+y));
}
