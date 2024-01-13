//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
        Node* prev=head_ref;
        Node* cur=head_ref->next;
        Node* faltu=new Node(-1);
        faltu->next=head_ref;
        if(head_ref==NULL||head_ref->next==NULL)return head_ref;
        while(cur!=NULL){
            Node* temp=faltu;
            if(prev->data<cur->data){
                prev=prev->next;
                cur=cur->next;
                continue;
            }
            while(temp->next->data<cur->data){
                temp=temp->next;
            }
            prev->next=cur->next;
            cur->next=temp->next;
            temp->next=cur;
            cur=prev->next;
            
        }
    return faltu->next;
            
        }
        
    
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends