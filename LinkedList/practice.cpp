#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data= d;
        this->next= NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
        delete next;
        this->next =NULL;
        }
        cout<<"memory free ho gya "<<value<<endl;
    }
};

void print(Node* head){
    Node*temp=head;
    if(head==NULL){
        cout<<"empty hai bhai "<<endl;
        return;
    }

  do{
      cout<<head->data<<" ";
      head = head->next;
  }while(head!=temp);
  cout<<endl;
}


void insertNode(Node* &head,int element,int d){
      if(head==NULL){
          Node*temp=new Node(d);
          head=temp;
          temp->next=temp;
      } else{
      Node*curr = head;
      while(curr->data != element){
         curr=curr->next;
      }
      Node*temp=new Node(d);
      temp->next=curr->next;
      curr->next=temp;
      }
}
void deleteNode(Node*&head,int element){
    if(head==NULL){
        cout<<"List is empty, please check again "<<endl;
        return;
    } else{
     Node*prev=head;
     Node*curr = prev->next;
     while(curr->data!=element){
          prev=curr;
          curr=curr->next;
     }

     prev->next=curr->next;

    if(prev==curr){
        head=NULL;
    }
    else if(head==curr){
        head=prev;
    }
    curr->next=NULL;
    delete curr;
    }
}

int main(){

    Node* head = NULL;
  
     insertNode(head,1,10);
     print(head);
     insertNode(head,10,20);
     print(head);
     insertNode(head,20,30);
     print(head);
     insertNode(head,10,25);
     print(head);

     deleteNode(head,10);
     print(head);
    //  deleteNode(head,1);
    //  print(head);
  
    return 0;
}