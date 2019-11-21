#include <stdio.h>
int main()
{ int n,i,j,sum;
  int matrix[2][2];
  sum=0;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
      scanf("%d\n",&matrix[i][j]);  
  }
  
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    sum= sum + matrix[i][j] ; 
     }
    printf("%d",sum);

    return 0;
}