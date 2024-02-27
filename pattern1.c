#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,k;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=n;k>=i;k--)
        {
         printf("%d",k);
        }
        printf("\n");
    }
}
*/54321
   5432
    543      
     54
      5
/*