#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("example.txt","r");
    if(fptr!=NULL){
        printf("file exit.\n");
    }
    else{
        printf("file does not exist\n");
    }
    
char temp;
int cnt=0;
int wordcount=0;
int linecount=0;
while((temp=fgetc(fptr))!=EOF){
    printf("temp=%c\n",temp);
    printf("temp=%d",temp);
    cnt++;
}
  printf("no.of character:%d\n",cnt);
    int tword=(int)temp;
    printf("temp=%c\n",temp);
    cnt++;

    printf("no.of character=%d",cnt);
    if(tword==32){
        wordcount++;
        if(tword==10){
            linecount++;
        }
    }
    printf("word count:%d\n",wordcount);
    
    return 0;
}
