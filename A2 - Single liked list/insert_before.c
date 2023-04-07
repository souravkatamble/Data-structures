#include "sll.h"

int sl_insert_before(Slist **head, data_t g_data, data_t ndata)
{

if (*head == NULL)
{

return LIST_EMPTY;
}

else
{
Slist *temp = *head;

Slist *prev = NULL;

while (temp != NULL)
{
if(temp->data ==g_data)
{
Slist *new=malloc(sizeof(Slist));
if (new == NULL)
{
return FAILURE;
}

new->data = ndata;

new->link = temp;

if (prev == NULL)
{
*head = new;

}

else
{
prev->link = new;
}
return SUCCESS;
}
prev = temp;
temp= temp->link;

} 
return DATA_NOT_FOUND;
}}
