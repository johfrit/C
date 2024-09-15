#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int grades[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&grades[i]);
        if(grades[i]<38)
        {
            continue;
        }
        else{
            int mul=5*(grades[i]/5+1);
            if(mul-grades[i]<3)
            {
                grades[i]=mul;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",grades[i]);
    }
    return 0;
}
