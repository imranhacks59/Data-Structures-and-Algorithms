#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    ~Node(){
       int value = this->data;
       if(this->next !=NULL){
           delete next;
           next = NULL;
       }
       cout << " memory is free for node with data " << value << endl;

    }
};
void print(Node* tail){
     Node*temp = tail;
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }
     do{
         cout<<tail->data<<" ";
         tail = tail->next;
     }while (tail != temp);
     cout<<endl;
}

// insert Node
void insertNode(Node* &tail,int element,int d){
    if(tail==NULL){
    Node* temp = new Node(d);
    tail = temp;
    temp->next= temp;
    }
     else {
         Node*curr = tail;

         while(curr->data!=element){
             curr = curr->next;
         }
        //  if(curr  == tail){
        //      Node*temp = new Node(d);
        //      curr->next = temp;
        //      temp->next = curr;
        //  }
        Node*temp = new Node(d);
        temp->next = curr->next;
        curr->next= temp;
     }  
}

void deleteNode(Node*&tail,int element){
    if(tail==NULL){
        cout<<"List is empty, please check again "<<endl;
        return;
    }
    else {
        Node* prev  = tail;
        Node* curr = prev->next;

        while(curr->data!=element){
           prev = curr;
           curr = curr->next; 
        }

        prev->next= curr->next;
        // for 1 node
        if(curr == prev){
            tail==NULL;
        }
        else if(tail == curr){
            tail=prev;
        }
        curr->next = NULL;
        delete curr;
      
        
    }
}

int main(){
    Node* tail = NULL;
    
    insertNode(tail,5,8);
    print(tail);
    insertNode(tail,8,11);
    print(tail);
    insertNode(tail,11,15);
    print(tail);
    insertNode(tail,15,18);
    print(tail);
    insertNode(tail,8,6);
    print(tail);
    insertNode(tail,15,20);
    print(tail);
    // deleteNode(tail,15);
    // print(tail);
    // deleteNode(tail,8);
    // print(tail);
    // deleteNode(tail,18);
    // print(tail);
    return 0;

}
