#include "sll.h"

int insert_at_first(Slist **head, data_t data)
{
Slist *new=malloc(sizeof(Slist));
        if(new==NULL)
        {
        return FAILURE;
        }
        else
        {
      new->data=data;
     new->link=*head;
     if(*head==NULL)
     {
    *head=new;
return SUCCESS;    
     }
     else
     {
 
        *head=new;
        return SUCCESS;
}
}
}
