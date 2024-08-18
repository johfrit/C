//staircase -pattern with hash
#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int space=n-1,hash=1;
    for(i=0;i<n;i++)
    {
      for(j=0;j<space;j++)
      {
          printf(" ");
      }
      for(k=0;k<hash;k++)
      {
          printf("#");
      }
      space--;
      hash++;
      printf("\n");
    }
    return 0;
}
