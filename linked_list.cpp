#include<iostream>
using namespace std;
    class node{
    public:
        int data;
        node*next;
    };
    void printlist(node*n)
    {
        while(n)
        {
            cout<<n->data<<endl;
            n=n->next;
        }
    }
    int main()
    {
        node*head;
        node*second;
        node*third;
        //allocated three nodes in heap
        head = new node();
        second = new node();
         third = new node();

         head -> data = 1;
         head->next= second;

         second->data= 2;
         second->next= third;

         third->data=3;
         third->next=NULL;

         printlist(head);
         return 0;

    }



