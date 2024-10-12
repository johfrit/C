#include<stdio.h>
#include<string.h>
int main(){
    int count=0,i;
    char s[100];
    scanf("%s",s);
        
    
    int len=strlen(s);
    for (i=0;i<len;i+=3){
        if(s[i]!= 'S'){
            count++;
        }
        if(s[i+1]!= 'O'){
            count++;
        }
        if(s[i+2]!='S'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
    
}
