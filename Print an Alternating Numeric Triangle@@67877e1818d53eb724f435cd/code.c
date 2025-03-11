#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for (i=1; i<=n;i++)
{
    int s=i%2;
for(j=1;j<=i;j++)
{
printf("%d ",s);
s=1-s;

}
printf("\n");

}



    return 0;
}