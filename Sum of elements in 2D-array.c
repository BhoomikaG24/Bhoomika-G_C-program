#include<stdio.h>
void main()
 int n,m,i,j,p,q,a[10][10],b[10][10],sum,c[10][10];
  printf("enter the size of the matrix 1");
  scanf("%d%d",&n,&m);
  printf("enter the size of the matrix 2");
  scanf("%d%d",&p,&q);
  printf("enter the elements A");
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf(" %d",&a[i][j]);
  printf("enter the element s B");
  for(i=0;i<p;i++)
    for(j=0;j<q;j++)
      scanf(" %d",&b[i][j]);
  printf("the matrix is\n");
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        printf(" %d",a[i][j]);
      }printf(" \n");
    }
      printf("the matrix is\n");
      for(i=0;i<p;i++){
        for(j=0;j<q;j++){

          printf(" %d",b[i][j]);
        }
      printf(" \n");
      }
  printf(“sum of the matrix is\n”);
   for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf(" %d",a[i][j]+b[i][j]);
    }
      printf(" \n");
    }
   }
