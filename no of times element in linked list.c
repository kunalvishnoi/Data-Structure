/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
  Return the no. of times search_for value is there in a linked list.
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
int count(struct node* head, int key)
{
 struct node* current = head;
    int count = 0;
    while (current != NULL)
    {
        if (current->data == key)
           count++;
        current = current->next;
    }
    return count;
}