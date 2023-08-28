#include<stdio.h>
void main()
{
  int i,a=0,b=1,temp=a+b,n;
  printf("Enter the n value:");
  scanf("%d",&n);
  printf("fibonacci series upto n:");
  printf("%d  %d",a,b);
  for(i=3;i<=n;++i)
  {
      temp=a+b;
    printf("  %d, ",temp);
   a=b;
   b=temp;
  }
}
