#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
        int count=0;
        for(i=0;i<n;i++)
        {
            if(max==arr[i]){
                count++;
            }
        }
        printf("%d",count);
        return 0;
    }
