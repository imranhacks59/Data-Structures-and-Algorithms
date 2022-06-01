#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d) {
        this -> data = d;
        this->prev = NULL;
        this->next = NULL;

    }
};

// void print(Node* &head){
//     if(head==NULL){
//         cout<<head->data<<endl;
//     }
//     else{
//         Node* temp = head;
//         while(temp!=0){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//     }
  
//   traversing a linked list
void print(Node* &head){
         Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        
    }  cout<<endl;
}

void insertAtHead(Node* &head,Node* &tail,int d){
   if(head==NULL){
       Node*temp = new Node(d);
       temp->next = head;
       head = temp;
       tail = temp;

   }  else {
       Node* temp = new Node(d);
       temp->next = head;
       head->prev = temp;
       head= temp;
   }
}

void insertAtTail(Node* &head,Node* &tail,int d){
    Node*temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position==1){
        insertAtHead(head,tail,d);
        return;
    }
    Node* curr = head;
    int cnt = 1;
    while(cnt<position-1){
        curr= curr->next;
        cnt++;
    }
    if(curr->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }
    Node* temp = new Node(d);
    temp->next = curr->next;
    curr->next->prev = temp;
    curr->next = temp;
    temp->prev = curr;
}

void deleteNode(int position,Node*&head){
    if(position==1){
        Node*temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        
        // delete temp;

    } else {
        Node*curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
           curr = curr->next;
           cnt++;
           
        }
        prev->next = curr->next;
        curr->next =NULL;
        curr->prev =NULL;

        // delete curr;

    }
}


int main(){
    // Node* node1 = new Node(10);
    // cout<<node1->data<<endl;

    Node* head = NULL;
    Node* tail = NULL;
    print(head);
   insertAtHead(head,tail,20);
    print(head);
    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;

   insertAtHead(head,tail,40);
    print(head);
    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;
   insertAtHead(head,tail,60);
    print(head);
    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;
   insertAtTail(head,tail,80);
    print(head);
//    cout<<"head "<<head->data<<endl;
//    cout<<"tail "<<tail->data<<endl;
    insertAtPosition(head,tail,3,55);
    print(head);
    insertAtPosition(head,tail,1,10);
    print(head);
    insertAtPosition(head,tail,7,90);
    print(head);
    
    deleteNode(2,head);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    deleteNode(4,head);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    return 0;
}