#include <iostream>
using namespace std;

// node structure

struct Node
{

    int data;   // data holde
    Node *next; // next node pointer
};
    // node pointer initially null

    Node *head = NULL;

    void insert(int value)
    {

        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else{
            Node* temp =head;
            while(temp->next !=NULL){
                temp =temp->next;
            }
                temp->next=newNode;
        }
    }
  


void display(){
    Node* temp =head;
    while(temp !=NULL)
    {
        cout <<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    insert(10);
    insert(20);
    display();

    return 0;
}