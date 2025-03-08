#include<stdio.h>
int main()
{
    int i,n,a=0,b=1;
    scanf("%d",&n);
    int sum=0;
    for(i=1;i<=n;i++)
    {
     sum+=a;
      int next=a+b;
      a=b;
      b=next;

    }
    printf("%d",sum);
  return 0;
}
