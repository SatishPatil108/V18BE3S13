/* sum of digit */
#include<stdio.h>
int main()
{
    int sum=0,num,i,r=0;
    printf("Enter the Number\n");
    scanf("%d",&num);

    for(i=num;i>0;i=i/10)
    {
        r=i%10;
        sum=sum+r;
//        if(r!=0)
  //      printf("%d + ",r);
    }

    printf("\nSum=%d\n",sum);
}
