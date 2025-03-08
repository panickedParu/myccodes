//write a c program in C to display the sum of the series (9+99+999+9999+...)

#include<stdio.h>
int main()
{
    int n,sum=0,temp=9,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",temp);

        sum+=temp;
        temp=temp*10+9;}
        printf("\n%d\n",sum);

 return 0;

}
