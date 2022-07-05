#include<stdio.h>
#include<stdlib.h>
struct st
{
	int r;
	char nme[10];
	float mks;
};

main()
{
	int i,j,n,c,m,k,ele;
	struct st **p,*t;

	printf("enter the how many number of student data base required\n");
	scanf("%d",&n);
	ele=n;
	p=malloc(sizeof(struct st *)*n);

	for(i=0;i<n;i++)
		p[i]=malloc(sizeof(struct st));

	for(i=0;i<n;i++)
	{
		printf("Enter roll no\n");
		scanf("%d",&p[i]->r);

		printf("Enter the name\n");
		scanf("%s",p[i]->nme);

		printf("enter the marks\n");
		scanf("%f",&p[i]->mks);
	}

	printf("---------------unsorted--------------------------------\n");

	for(i=0;i<n;i++)
		printf("%d %s %f\n",p[i]->r,p[i]->nme,p[i]->mks);

	printf("enter choice 1)rollno 2)name 3)marks\n");
	scanf("%d",&c);
	printf("-----------sorted--------------------------------------\n");
	switch(c)
	{
		case 1: for(i=0;i<ele-1;i++)
			{
				for(j=0;j<ele-1-i;j++)
				{
					if((p[j]->r)>(p[j+1]->r))
					{
						t=p[j];
						p[j]=p[j+1];
						p[j+1]=t;
					}
				}

			}
                        break;

		case 2: for(i=0;i<ele-1;i++)
			{
				for(j=0;j<ele-1-i;j++)
				{         
					if((p[j]->nme[0])==(p[j+1]->nme[0]))
						k=1;
					else
						k=0;
					if((p[j]->nme[k])>(p[j+1]->nme[k]))
					{
						t=p[j];
						p[j]=p[j+1];
						p[j+1]=t;
					}
				}
			}
                        break;

		case 3: for(i=0;i<ele-1;i++)
			{
				for(j=0;j<ele-1-i;j++)
				{

					if((p[j]->mks)>(p[j+1]->mks))
					{
						t=p[j];
						p[j]=p[j+1];
						p[j+1]=t;
					}
				}
			}
			break;


	}

			for(i=0;i<n;i++)
			printf("%d %s %f\n",p[i]->r,p[i]->nme,p[i]->mks);
}
