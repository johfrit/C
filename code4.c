#include<stdio.h>
#include<limits.h>
#define min(a,b)((a)<(b)?(a):(b))
#define max(a,b)((a)>(b)?(a):(b))

int main()
{
    long arr[5],i,j;
    long minSum=LONG_MAX;
    long maxSum=LONG_MIN;
    for(i=0;i<5;i++){
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        long sum=0;
        for(j=0;j<5;j++)
        {
            if(i==j){
                continue;
            }
            sum+=arr[j];
        }
        minSum = min(minSum,sum);
        maxSum = max(maxSum,sum);
    }
    printf("%ld %ld",minSum,maxSum);
    return 0;
}
