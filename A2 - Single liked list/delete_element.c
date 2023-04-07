#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
if (*head==NULL)
{
    return FAILURE;
}
else
{
    Slist *temp=*head;
    Slist *prev = NULL;

 while (temp!=NULL)   
 { 
        if (temp->data == data)
        {
            if (temp==*head)
            {
                *head=(*head)->link;
                free(temp);
                return SUCCESS;
            }
            else
            {    
                 prev->link=temp->link;
                free(temp);
                return SUCCESS;
            }
      
        }
        prev=temp;
        temp=temp->link;
 }
return DATA_NOT_FOUND;
    }
}




