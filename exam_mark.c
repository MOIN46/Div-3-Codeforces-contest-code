#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int a[n][m];

    int total[n];

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }

        total[i]=sum;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d students total number : %d\n",i+1,total[i]);
    }

    return 0;

}