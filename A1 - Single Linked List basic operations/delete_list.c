#include "sll.h"

int sl_delete_list(Slist **head)
{
if (*head==NULL)
{
return FAILURE;
}
else
{
    Slist *temp=*head ;
    *head =NULL;
    while(temp!=NULL)
    {
Slist *curr=temp;
    temp=temp->link;
  free(curr);
 
    }
 
  return SUCCESS;
}
}

