#include<stdio.h>
int main(){
    int i;
    int s,t;
    scanf("%d %d",&s,&t);
    int a,b;
    scanf("%d %d",&a,&b);
    int m,n;
    scanf("%d %d",&m,&n);
    int apple[m];
    int orange[n];
    for(i=0;i<m;i++){
        scanf("%d",&apple[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&orange[i]);
    
    }
    int apcount=0;
    int orcount=0;
    for(i=0;i<m;i++){
        if(apple[i]+a>=s && apple[i]+a<=t){
            apcount++;
        }
    }
    for(i=0;i<n;i++){
        if(orange[i]+b>=s && orange[i]+b<=t){
            orcount++;
        }
    }

    
        printf("%d\n",apcount);
        printf("%d",orcount);
        return 0;
}
