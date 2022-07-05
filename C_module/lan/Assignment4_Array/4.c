#include<stdio.h>
int main()
{
    int a[10],l,sl,i;
    printf("Enter the Array Element\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    ////////////////////////////////////////

    if(a[0]>a[1])
    {
        l=a[0];
        sl=a[1];
    }
    else
    {
        l=a[1];
        sl=a[0];
    }

    for(i=2;i<10;i++)
    {
        if(a[i]>l)
        {
            sl=l;
            l=a[i];
        }

        else if(a[i]>sl)
        sl=a[i];
    }

    printf("largest=%d sec.largest=%d\n",l,sl);
}
