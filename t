#include<stdio.h>
#include<string.h>
int main() {


    //  char str1[100]="sahil";
    //  char str2[100]="gawade";
    //  strcat(str1,str2);
    //  printf("%s\n",str1);



     char str3[100]="ajay";
     char str4[100]="sarganachari";
     char result[100];

     for(int i=0; i<100; i++){
        if(str3[i]!=NULL){
            result[i]=str3[i];
        }
        if(str3[i]==0){
            if(str4[i]!=0){
                result[i]=str3[i];
            }
        }
        printf("%s",result);
          

     }

 
 
 

 

 




    return 0;
}
