#include "sll.h"

int sl_insert_after(Slist **head, data_t g_data, data_t ndata)
{
if (*head==NULL)
{
    return LIST_EMPTY;

}
else
{
Slist *temp=*head;
while(temp!=NULL)
{
if (temp->data == g_data)
{
    Slist *new=malloc(sizeof(Slist));
    if (new==NULL)
    {
        return FAILURE;
    }
    else
    {
        new->data=ndata;
    new->link=temp->link;
    temp->link=new;
    return SUCCESS;
    }
}
temp=temp->link;
}
return DATA_NOT_FOUND;
}
}
