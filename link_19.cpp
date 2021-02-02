struct node*update(struct node*start,int p)
{
    struct node* first=start;
    struct node* pre=NULL;
    struct node* second=start;
    while(second->next!=NULL)
    {
        second=second->next;
    }
    for(int i=0;i<p;i++)
    {
        pre=first;
        first=first->next;
    }
    second->next=start;
    start->prev=second;
    pre->next=NULL;
    first->prev=start;
    return first;
    
}
