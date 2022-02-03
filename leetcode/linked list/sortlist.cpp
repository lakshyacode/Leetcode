class Solution{
  public:
   
    void Mergesorting(Node** head)
    {
        Node* curr=*head;
        Node* first;
        Node* second;
        if(!curr||!curr->next)
         return;   
        
        findmiddle(curr,&first,&second);
        
            Mergesorting(&first);
            Mergesorting(&second);
           *head=mergeboth(first,second);
    }
        Node* mergeboth(Node* first,Node* second)
    {
        Node* ans=NULL;
        if(!first)
        {
            return second;
        }
        if(!second)
        {
            return first;
        }
        if(first->data<second->data)
        {
            ans=first;
            ans->next=mergeboth(first->next,second);
        }
        else{
            ans=second;
            ans->next=mergeboth(first,second->next);
        }
            
        return ans;
    }
     void findmiddle(Node* curr,Node** first,Node** second)
    {
        Node* fast;
        Node* slow;
        slow=curr;
        fast=curr->next;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
            slow=slow->next;
            fast=fast->next->next;
            }
        }
        *first=curr;
        *second=slow->next;
        *slow->next=NULL;
    }
    Node* mergeSort(Node* head) {
       Mergesorting(&head);
        return head;
    }
};