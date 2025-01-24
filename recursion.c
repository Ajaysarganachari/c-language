// #include<stdio.h>
// int main(){
// int n=5;
// int total=1;
// for(  int i=n; i>=1; i--){
//  total= total*i;
// }
// printf("%d ",total);
//     return 0;
// }
//  #include<stdio.h>
//  int main (){  
//     int  result=fact(10);
//     printf(" result=%d" , result);
    
//       return 0;
//  }
//  int fact(int n){
//     if(n==1){
//         return 1;
//     }

//     return n*fact(n-1);
//  }
#include<stdio.h>
int main(){
   int total =fact(10);
   printf("%d \n", total);

    return 0;
}
int fcat (int n){
    if (n==1 || n==0){
        return 1;
    }
    printf("%d \n",n);
    return  fact(n-1)+fact(n-1);

}
