#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[10];
	float marks;
	struct student *next;
}SL;

void add_b(SL**);
void add_e(SL**);
void display(SL*);
int count(SL*);
void save(SL*);
void print_rec(SL*);
void Revprint_rec(SL*);
void last_node(SL*);
void last_sec_node(SL*);
void last_node_c(SL*);
void print_rev_loop(SL*);
void revprint_arrayofptr(SL*);
void add_m(SL**);
void print(SL*);
void rev_link(SL**);
void rev_link_3p(SL**);
void delete_search(SL**);

main()
{
	int c,ch;
	SL *hptr=0;
	do	
	{
		printf("Enter the choice 1)add_b 2)add_e 3)display 4)count 5)save_node 6)print_rec 7)Revprint_rec 8)last_node 9)last_sec_node 10)last_node_c 11)print_rev_loop 12)revprint_arrayofptr 13)add_m 14)print 15)rev_link 16)rev_link_3p 17)delete_search\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: add_b(&hptr);
				break;
			case 2:	add_e(&hptr);
				break;
			case 3:	display(hptr);
				break; 
			case 4: count(hptr);
				break;
			case 5: save(hptr);
				break;
			case 6:print_rec(hptr);
			       break;
			case 7:Revprint_rec(hptr);
			       break;
			case 8:last_node(hptr);
			       break;
			case 9:last_sec_node(hptr);
			       break;
			case 10:last_node_c(hptr);
				break;
			case 11:print_rev_loop(hptr);
				break;
			case 12:revprint_arrayofptr(hptr);
				break;
			case 13:add_m(&hptr);
				break;
			case 14:print(hptr);
				break;
			case 15:rev_link(&hptr);
				break;
                        case 16:rev_link_3p(&hptr);
                                break;
                        case 17:delete_search(&hptr);
                                break;
		}
	}while(ch!=18);
	c=count(hptr);
	printf("c=%d\n",c);
}

void add_b(SL**ptr)// add node at the begining
{
	SL *temp=malloc(sizeof(SL));
	printf("Enter roll name marks\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);

	temp->next=*ptr;
	*ptr=temp;
}

void add_e(SL**ptr)// add node at the End.
{
	SL *temp=malloc(sizeof(SL));
	printf("Enter roll name marks\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->marks);

	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		SL *last=*ptr;
		while(last->next!=0)
		{
			last=last->next;
		}
		temp->next=last->next;
		last->next=temp;
	}
}

void display(SL*ptr)//display 
{
	while(ptr) 
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);

		ptr=ptr->next;
	}
}

int count(SL*ptr)// count the node
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}

void save(SL*ptr) // Save the node into file
{
	FILE *fp;
	fp=fopen("data","w+");
	if(fp==0)
	{
		printf("File Not Found\n");
		return;
	}

	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->marks);

		ptr=ptr->next;
	}
}

void print_rec(SL*ptr)// print the data using Recursion
{
	if(ptr)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);

		ptr=ptr->next;
		print_rec(ptr);
	}
}

void Revprint_rec(SL*ptr)// Reverse printing using Recursion
{
	if(ptr)
	{
		Revprint_rec(ptr->next);
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
	}
}

void last_node(SL*ptr)// last node address
{
	while(ptr->next)
	{
		ptr=ptr->next;
	}
	printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
}

void last_sec_node(SL*ptr)//second last node
{
	while(ptr->next->next)
	{
		ptr=ptr->next;
	}

	printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
}

void last_node_c(SL*ptr)//Last node & sec.last node using counter
{
	SL *temp;
	temp=ptr;

	int i,j,c;
	c=count(ptr);
	for(i=0;i<c-1;i++)//last node
	{
		ptr=ptr->next;
	}
	printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
	for(j=0;j<c-2;j++) //second last node 
	{
		temp=temp->next;
	}

	printf("%d %s %f\n",temp->roll,temp->name,temp->marks);
} 

void print_rev_loop(SL*ptr)// Reverse printing using loop
{
	int i,j,c;
	c=count(ptr); 
	SL *p;
	for(i=0;i<c;i++)
	{ 
		p=ptr;
		for(j=0;j<c-1-i;j++)
		{
			p=p->next;
		}
		printf("%d %s %f\n",p->roll,p->name,p->marks);	

	}

}

void revprint_arrayofptr(SL*ptr)//reverse printing using array of pointer
{
	int c,i;
	c=count(ptr);
	SL **p;
	p=malloc(sizeof(SL*)*c);

	for(i=0;i<c;i++)
	{
		p[i]=ptr;
		ptr=ptr->next;
	}

	for(i=c-1;i>=0;i--)
	{
		printf("%d %s %f\n",p[i]->roll,p[i]->name,p[i]->marks);	
	}
}

void add_m(SL**ptr)//add at middle
{
	SL *m;
	m=malloc(sizeof(SL));
	printf("Enter roll name marks\n");
	scanf("%d%s%f",&m->roll,m->name,&m->marks);

	if((*ptr==0)||(m->roll<(*ptr)->roll))//roll no wise sorting /* for marks wise same only change name (roll=marks)*/
	{
		m->next=*ptr;
		*ptr=m;
	}
	else
	{
		SL *la=*ptr;
		while((la->next!=0) &&((la->next->roll) < (m->roll)))
		{
			la=la->next;
		}
		m->next=la->next;
		la->next=m;
	}
}

void print(SL*p)//print function
{
	while(p)
	{
		printf("%d %s %f\n",p->roll,p->name,p->marks);

		p=p->next;
	}
}

void rev_link(SL**p)//reverse the link using array of pointer
{
	int i,c;
	SL**a;
	c=count(*p);
	a=malloc(sizeof(SL*)*c);
	SL *temp=*p;

	i=0;
	while(temp)
	{
		a[i++]=temp;
		temp=temp->next;
	}
	a[0]->next=0;
	for(i=1;i<c;i++) 
		a[i]->next=a[i-1];
	*p=a[c-1];
}

void rev_link_3p(SL**ptr)
{
	SL *pr,*cu,*ne;
	pr=0;
	cu=*ptr;

	while(cu) 
	{
		ne=cu->next;
		cu->next=pr;
		pr=cu;
		cu=ne;
	}
	*ptr=pr;
}

void delete_search(SL**ptr)
{
    int x;
    scanf("%d",&x);
    SL *p,*p1,;
    p=*ptr;

    while(p)
    {
        if(p->roll==x)
        {
            if(p==*ptr)
            {
                *ptr=p->next;
                free(p);
            }
            else
            {
                p1->next=p->next;
            }
            free(p);
            p=NULL;
            return;
        }
        else
        {
            p1=p;
            p=p->next;
        }
    }
}
