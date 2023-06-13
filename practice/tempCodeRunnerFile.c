#include <stdio.h>
int main()
{
    int n, m, a[100][100];
   int num=1;
    scanf("%d %d", &n, &m);
    for(int k=0; k<=m+n-2; k++)
    {
       for(int i=n-1; i>=0; i--)
       {
          for(int j=m-1; j>=0; j--)
          {
             if((i+j)==k)
             {
                a[i][j]=num;
                num++;
            }
         }
      }
   }
   for(int i=0; i<n; i++)
   {
      for(int j=0; j<m; j++)
      {
         printf("%d ", a[i][m-j-1]);
      }
      printf("\n");
   }
}