#include "sll.h"

int sl_delete_last(Slist **head)
{
if(*head==NULL)
{
    return FAILURE;
}
else
{ 
    if((*head)->link==NULL)
    {
        free(head);
        *head=NULL;
        return SUCCESS;
    }
    else
    { 
        Slist *temp=*head;
        Slist *prev=NULL;
        while(temp->link !=NULL)
        {
             prev= temp;
            temp = temp-> link;
        }
        free(temp);
        prev->link=NULL;
        return SUCCESS;

    }}}
