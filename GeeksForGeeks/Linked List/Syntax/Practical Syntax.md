### Print linked list elements :

```
class Solution
{
    public:
    void display(Node *head)
    {
      while(head!=NULL){
          cout<<head->data<<" "; // printing data value of each node
          head = head->next;     // pointing to next node
      }
    }
};
```

### Count nodes of linked list :

```
int getCount(struct Node* head)
    {   
        int count = 0;
        while(head!=NULL)
        {
            count++;
            head = head->next;
        }
    return count;     
    }
```

### Linked List Length Even or Odd :

return 0 for even 1 for odd

```
int isLengthEvenOrOdd(struct Node* head)
{
     int count=0;
     while(head!=NULL){
         count++;
         head = head->next;
     }
     return count%2==0 ? 0 : 1 ;
}
```