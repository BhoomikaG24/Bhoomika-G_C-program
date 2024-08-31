#include<stdio.h>
void main()
{
  int n,i;
  char str1[10],str2[10] ;
  printf("enter the string1");
  scanf("%s",str1);
  printf("enter the string2");
  scanf("%s",str2);
  n=strlen(str1);
  printf("len=%d",n);
  strcat(str1,str2);
  printf("\n the concatenate string is %s",str1);
}
    
