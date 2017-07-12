/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void display(struct Node *head)
{
   
    while(head->next!=NULL)
    {
   printf("%d ",head->data);
   head=head->next;
    }
    if(head->next==NULL)
    printf("%d ",head->data);
}
