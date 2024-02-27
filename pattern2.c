#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,k;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
       {
           printf(" ");
       }
       for(j=n;j>=i;j--)
       {
           printf("* ");
       }
       printf("\n");

    }
}


/*op:* * * * *
      * * * *
       * * *
        * *
         *
*/