//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        Node *n1=reverse(node1);
        
        Node *n2=reverse(node2);
        Node *temp=newNode(0);
        Node *res=temp;
        while(n1!=NULL && n2!=NULL){
            if(n1->data>=n2->data){
                res->next=n1;
                n1=n1->next;
            }
            else{
                res->next=n2;
                n2=n2->next;
            }
            res=res->next;
        }
        if(n1!=NULL){
            res->next=n1;
            //n1=n1->next;
        }
        if(n2!=NULL){
            res->next=n2;
            //n2=n2->next;
        }
        return temp->next;
    }
     
    Node* reverse(Node* node){
        Node* prev=NULL;
        Node* cur= node;
        while(cur!=NULL){
            Node* next =cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
     
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends