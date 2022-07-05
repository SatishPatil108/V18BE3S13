/* multiplication table 10 to 20 */
#include<stdio.h>
int main()
{
    int i,j;
    for(j=10;j<=20;j++)
    {
      for(i=1;i<=10;i++)
      {
        printf("%d * %d  =%d\n",j,i,j*i);
      }
      printf("------------------------------------\n");
   }
}
