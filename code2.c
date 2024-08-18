//sum of diagonals in a 2d square matrix
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int leftSum=0,rightSum=0;
    for(i=0;i<n;i++)
    {
        leftSum+=arr[i][i];//for left diagonal the index values are equal
    }
    for(i=0;i<n;i++){
        rightSum+=arr[i][n-1-i];//for right diagonal the sum of the index values gives the value of (n-1),so to find j we are subtracting the i value from the sum of i and j
    }
    int diff;
    diff=abs(leftSum-rightSum);
    printf("%d",diff);
    return 0;
}
