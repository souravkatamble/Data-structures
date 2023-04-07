#include "sll.h"

int sl_insert_nth(Slist **head, data_t ndata, data_t n)
{

Slist *new=malloc(sizeof(Slist));
 new->data=ndata;
     if(n==1)
     {     
     new->link=NULL;
      *head=new;
     return SUCCESS;
}
else if (n>1)
{
 if (*head == NULL)
 {
     return LIST_EMPTY;
}
else
{
    Slist *temp=*head;
    int count=1;
    while(temp!=NULL)
    {
        if (count==n-1)
        {
            new->link=temp->link;
            temp->link=new;
            return SUCCESS;
        }
        temp=temp->link;
        count++;
    }
    return DATA_NOT_FOUND;
}
}
}

    
