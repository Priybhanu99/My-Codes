#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second




void findmid(ListNode** head,ListNode** a,ListNode** b){

	ListNode* slow = *head;
	ListNode* fast = slow->next;

	while(fast && fast->next){
		slow = slow->next;
		fast = fast->next->next;
	}

	a = *head;
	b = slow->next;
	slow->next = NULL;

}

ListNode* mergesortedll(ListNode** a,ListNode** b){
	ListNode* ans = new ListNode(0);

	ListNode* A = *a;
	ListNode* B = *b;
	
	while(A && B){

		if(A->val<=B->val){
			ListNode* node = new ListNode(A->val);
			ans->next = node;
			A = A->next;
		}else{
			ListNode* node = new ListNode(B->val);
			ans->next = node;
			B = B->next;
		}
	}

	while(A){
		ListNode* node = new ListNode(A->val);
		ans->next = node;
		A = A->next;
	}

	while(B){
		ListNode* node = new ListNode(B->val);
		ans->next = node;
		B = B->next;
	}

	return ans->next;
}

ListNode* merge( ListNode* head1 , ListNode * head2){
        ListNode* d = new ListNode (0);            // dummy node
        ListNode* e = d;
        while(head1||head2){
        	if(head1 && (!head2 || head1->val <= head2 -> val) ){
        		e=e->next= head1 ; 
        		head1 = head1 -> next;
        	}
        	if(head2 && (!head1 || head2->val < head1 -> val) ){
        		e=e->next= head2 ; 
        		head2 = head2 -> next;
        	}
        }
        e->next = NULL;
        return d->next;
    }

    void mergesort(ListNode** head){
    	if(head==NULL || head->next==NULL){
    		return;
    	}

    	ListNode* a = *head;
    	ListNode* b = *head;

    	findmid(*head,&a,&b);

    	mergesort(&a);
    	mergesort(&b);

    	*head = mergesortedll(a,b);
    }

    int32_t main(){
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
    	freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
	 #endif

    	int t;
	//cin>>t; while(t--){

    	int n;
    	cin>>n;

    	int a[n];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}

	//}

    }