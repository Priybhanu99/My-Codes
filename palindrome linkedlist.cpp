/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* findnode(ListNode* head){
 ListNode* slow = head;
 ListNode* fast = head;

 while(fast && fast->next){
     slow = slow->next;
     fast = fast->next->next;
 }

 return slow;
}

ListNode* reverse(ListNode* head){

    ListNode* temp = NULL;
    ListNode* ahead = NULL;
    
    while(head){
        ahead = head->next;
        head->next = temp;
        temp = head;
        head = ahead;
    }
    
    return temp;
}
int Solution::lPalin(ListNode* A) {

    ListNode* tempnode = A;
    ListNode* middle = findnode(A);
    ListNode* templist = reverse(middle);
    
    while(A!=middle){
        A = A->next;
    }
    
    A->next = NULL;
    
    while(tempnode && templist){
        if(tempnode->val != templist->val){
            return 0;
        }
        tempnode = tempnode->next;
        templist = templist->next;
    }
    
    A->next = reverse(templist);
    return 1;
    
}

bool hasKnodes(ListNode* head,int k){
    int count =0;

    while(head && count<k){
        head = head->next;
        count++;
    }

    if(count==k){
        return true;
    }
    return false;
}

ListNode* findpointerofK(ListNode* head,int k){

    ListNode* temp = head;

    int count = 0;
    while(count<k){
        temp = temp->next;
    }

    return temp;
}

ListNode* reverse_mutliple(ListNode* head,int k){

    ListNode* curr = head;
    ListNode* temp,newnode,nextpointer;

    if(head->NULL){
        return NULL;
    }

    if(k==0 || k==1){
        return head;
    }

    if(hasKnodes(head,k)){
        newnode = findpointerofK(head,k-1);
    }else{
        newnode = head; 
    }


    while(curr && hasKnodes(curr,k)){

        temp = findpointerofK(curr,k);
        int i = 0;

        while(i<k){

            nextpointer = curr->next;
            curr->next = temp;
            temp = curr;
            curr = nextpointer;
            i++;

        }
    }

    return newnode;


}

ListNode* Solution::reverseList(ListNode* head, int k) {
    ListNode* current = head;  
    ListNode* next = NULL;  
    ListNode* prev = NULL;  
    int count = 0;  

    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)  
    {  
        next = current->next;  
        current->next = prev;  
        prev = current;  
        current = next;  
        count++;  
    }  

    /* next is now a pointer to (k+1)th node  
    Recursively call for the list starting from current.  
    And make rest of the list as next of first node */
    if (next != NULL)  
        head->next = reverseList(next, k);  

    /* prev is new head of the input list */
    return prev;  
}

ListNode* reverseList2(ListNode* A,int m,int n){

    if(m==n){
        return A;
    }

    ListNode* rev_s = NULL,*rev_prevs = NULL,*rev_e = NULL,*rev_enext = NULL;
    
    ListNode* temp = A;
    int i=1;
    while(temp && i<=n){

        if(i<m){
            rev_prevs = temp;
        }

        if(i==m){
            rev_s = temp;
        }

        if(i==n){
            rev_e = temp;
            rev_enext = temp->next;
        }

        temp = temp->next;
        i++;
    }

    rev_e->next = NULL;

    rev_e = reverse(rev_s);

    if(rev_prevs){
        rev_prevs->next = rev_enext;
    }else{
        A = rev_e;
    }


    rev_s->next = rev_enext;
    return A;

}

ListNode* add2numbers(ListNode* A,ListNode* B){

    ListNode* node = NULL;
    ListNode* ans = NULL;

    int carry = 0;

    while(A || B){

        int sum = carry + (A ? A->data : 0) + (B ? B->data : 0);
        carry = sum/10;

        ListNode* temp = new ListNode(sum%10);
        if(ans==NULL){

            ans = temp;
        }else{
            node->next = temp;
        }

        node = temp;

        A = (A ? A->next : NULL);
        B = (B? B->next : NULL);
    }

    if(carry!=0){
        ListNode* temp = new ListNode(carry);
        node->next = temp;
    }
    return ans;
}

ListNode* mergeKlist(vector<ListNode*> A){

    if(A.size()==1){
        return A[0];
    }

    ListNode* ans = new ListNode(0);
    ListNode* temp = ans;

    vector<ListNode*> index(A.size());
    int count = 0;
    for(auto i:A){
        index[count] = i;
        count++;
    }

    while(1){

        int minm = INT_MAX;
        count = -1;
        for (int i = 0; i < A.size(); ++i)
        {
            if(index[i]!=NULL && minm>index[i]->val){
                minm = index[i]->val;
                count = i;
            }
        }
        
        if(minm==INT_MAX){
            break;
        }

        ans->next = new ListNode(minm);
        ans = ans->next;
        if(count!=-1){
            index[count] = index[count]->next;
        }

        

    }

    return temp->next;
    

}