//sum of array - very big number
#include<stdio.h> 
int main() 
{
    int n,i;
    long sum=0;
    scanf("%d",&n);
    long arr[n];
    for(i=0;i<n;i++){
        scanf("%ld",&arr[i]);
        sum+=arr[i];
    }
    printf("%ld",sum);
    return 0;
}
