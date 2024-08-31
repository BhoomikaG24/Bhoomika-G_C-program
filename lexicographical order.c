#include<stdio.h>
void main()
{
  int n,i;
  char str1[10],str2[10] ;
  printf("enter the string1");
  scanf("%s",str1);
  printf("enter the string2");
  scanf("%s",str2);
  n=strcmp(str1,str2);
   if(n==0)
     printf("the strings are equal");
     
   else if(n<0)
     printf("%s comes before  %s lexicograpically\n",str1,str2);
   else
     printf("%s comes after  %s lexicograpically\n",str1,str2);
  ;
}
