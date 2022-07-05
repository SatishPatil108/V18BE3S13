#include<stdio.h>
void main()
{
    int a[]={10,0,-1,20,25,30},m=0,l=0,ele,b[6],j=0,i=0,sum=0,k=0;
    printf("Enter sum\n");
    scanf("%d",&sum);
    ele=sizeof(a)/sizeof(a[0]);
    for(i=0;i<ele-1;i++)
    {
        for(j=i+1;j<ele-1;j++)
        {
            k=(a[i]+a[j]);
            if(k==sum)
            {
                b[l++]=a[i];
                b[l++]=a[j];
            }
        }

        for(j=i+1,m=j+1;j<ele-1;j++,m++)
        {
            
            k=(a[i]+a[j]+a[m]);
            if(k==sum)
            {
                b[l++]=a[i];
                b[l++]=a[j];
                b[l++]=a[m];
            }
        }
    }
    for(i=0;i<l;i++)
        printf("%d ",b[i]);
}
