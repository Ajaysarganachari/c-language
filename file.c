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
    
// char temp;
// int cnt=0;
// int wordcount=0;
// int linecount=0;
// while((temp=fgetc(fptr))!=EOF){
//     printf("temp=%c\n",temp);
//     printf("temp=%d",temp);
//     cnt++;
// }
//   printf("no.of character:%d\n",cnt);
//     int tword=(int)temp;
//     printf("temp=%c\n",temp);
//     cnt++;

//     printf("no.of character=%d",cnt);
//     if(tword==32){
//         wordcount++;
//         if(tword==10){
//             linecount++;
//         }
//     }
//     printf("word count:%d\n",wordcount);
    
    // char str[100];
    // while((fgets(str,100,fptr))!=NULL){
    //     printf("line=%c\n",str);
    // }
      int empid;
      char name[100],desg[100];
      fscanf(fptr,"%d %s %s",&empid,&name,&desg);
      printf("empid=%d\n",empid);
      printf("name=%s\n",name);
      printf("desg=%s\n",desg);
          return 0;
}
