class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       if(del->next!=NULL){
          del->data=del->next->data;
          del->next=del->next->next;
       }
       else del=NULL;
    }

};