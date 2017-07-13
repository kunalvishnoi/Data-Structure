
/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
search an elemnt
in the linked list
Node is defined as 
struct node
{
    int data;
    struct node* next;
};
 
*/




bool search(struct Node* head, int x)
{
    struct Node* current = head;  // Initialize current
    while (current != NULL)
    {
        if (current->key == x)
            return true;
        current = current->next;
    }
    return false;