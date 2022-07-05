#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
    struct st *prev;
    int data;
    struct st *next;
}DL;


void add_b(DL**);
void add_e(DL**);
void display(DL*);
void add_m(DL**);
void delete_search(DL**);
void rev_link(DL**);

main()
{
    int c,ch;
    DL *hptr=0;
    do
    {
        printf(" 1)add_b\n 2)add_e\n 3)display\n 4)add_m\n 5)delete_search\n 6)rev_link\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:add_b(&hptr);
                   break;
            case 2:add_e(&hptr);
                   break;
            case 3:display(hptr);
                   break;
            case 4:add_m(&hptr);
                   break;
            case 5:delete_search(&hptr);
                   break;
            case 6:rev_link(&hptr);
                   break;

        }
    }while(ch!=7);

}

void add_b(DL **b)//add at begin
{  
    DL *temp=malloc(sizeof(DL));
    printf("Enter Data\n");
    scanf("%d",&temp->data);
       if(*b==0)  
       {   
        temp->next=0;
        temp->prev=0;
        *b=temp;
       }
       else
       {
           temp->prev=(*b)->prev;
           temp->next=*b;
           (*b)->prev=temp;
           *b=temp;
       }

}
 
void add_e(DL **e)//add at end
{
    DL *temp=malloc(sizeof(DL));
    printf("Enter the Data\n");
    scanf("%d",&temp->data);

    if(*e==0)
    {
        temp->next=temp->prev=0;
        *e=temp;
    }
    else
    {
         DL *la=*e;
        while(la->next!=0)
            la=la->next;
        
        temp->next=la->next;
        la->next=temp;
        temp->prev=la;
    }
}

void display(DL*p)//Display
{
    DL *temp;
    temp=p;
    while(temp)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void add_m(DL**m)
{
    DL *temp=malloc(sizeof(DL));
    printf("Enter the Data\n");
    scanf("%d",&temp->data);
    
    if((*m==0)||(temp->data < (*m)->data))
    {
        temp->next=temp->prev=*m;
        *m=temp;
    }
    else
    {
        DL *la=*m;

        while((la->next!=0) && (la->next->data)<temp->data)
            la=la->next;

        temp->prev=la;
        temp->next=la->next;
        la->next=la->prev=temp;
    }
}

void delete_search(DL** d)
{
    int x;
    scanf("%d",&x);
    DL *p,*p1;

    p=*d;

    while(p)
    {
        if(p->data==x)
        {
            if(p==*d)
            {
                *d=p->next;
                p->prev=0;
            }
            else if(p->next!=0)
            {
                p1->next=p->next;
                p->next->prev=p->prev;
            }

            else 
            {
                p->prev->next=p->next;
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

void rev_link(DL **r)
{
   DL *t,*t1,*p;
   p=*r;
   
  while(p)
  {
    t=p->prev;
    p->prev=p->next;
    p->next=t;
    t1=p;
    p=p->prev;
  }
  *r=t1;
}



