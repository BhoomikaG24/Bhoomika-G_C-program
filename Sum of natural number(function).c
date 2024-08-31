#include<stdio.h>
int sum(int n)
{ if (n==0)
    return 0;
  else
    return n*(n+1)/2;
}
int main()
{
  int n,res;
  printf("enter the number");
  scanf("%d",&n);
  res=sum(n);
  printf("sum of the natural num is=%d",res);
}

