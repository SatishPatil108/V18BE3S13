#include<stdio.h>
int main()
{
    int a[8],i,j,pos,data,ele;
    
    ele=sizeof(a)/sizeof(a[0]);

    printf("Enter the Array Element\n");
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);

    printf("Enter the position and data\n");
    scanf("%d%d",&pos,&data);

    printf("Before................................\n");
    for(i=0;i<ele;i++)
    printf("%d ",a[i]);
    printf("\n");
    ////////////////////////////////////////////////////

    for(i=0;i<ele+1;i++);

    for( ;i>=pos;i--)
        a[i]=a[i-1];

    a[pos]=data;
    ///////////////////////////////////////////////////

    printf("After.................................\n");
    for(i=0;i<ele+1;i++)
    printf("%d ",a[i]);
    printf("\n");
}
