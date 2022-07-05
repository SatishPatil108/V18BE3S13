#include<stdio.h>
int main()
{

int a[10],i,j,k,ele;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter Array element\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("Before....................................\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

for(i=0;i<ele;i++)
{
    for(j=i+1;j<ele;j++)
    {
        if(a[i]==a[j])
        {
            for(k=j;k<ele;k++)
            {
                a[k]=a[k+1];
            }
        }
    }
}
printf("After.....................................\n");
        for(i=0;a[i];i++)
        {
            if(a[i]<=0)
                break;
            else
                printf("%d ",a[i]);
        }
    printf("\n");
}
