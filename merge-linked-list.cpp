/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

 Node* MergeLists(Node* head1,   Node* head2)
{

    Node *a = head1, *b = head2, *p;
    Node dump;
    dump.next = NULL;
    p = &dump;
    while(a && b){
        if(a->data <= b->data){
            p->next = a;
            p = a;
            a = a->next;
        }else{
            p->next = b;
            p = b;
            b = b->next;
        }
    }
      while(b){
        p->next = b;
        p = b;
        b = b->next;
    }
       while(a){
        p->next = a;
        p = a;
        a = a->next; 
    }
   
     return dump.next;

}
