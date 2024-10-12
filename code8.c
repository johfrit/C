#include<stdio.h>
int main(){
    int n,in,i,dif;
    scanf("%d %d",&n,&in);
    int array[n],sum=0;
    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int paid;
    scanf("%d",&paid);
    for (i =0;i<n;i++){
        if(i==in){
            continue;
        }
        else{
            sum+=array[i];
        }
        
    }
    int pree=sum/2;
    if(pree==paid){
        printf("Bon Appetit");
    }
    else{
        int dif=paid - pree;
        printf("%d",dif);
    }
}
