#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;  //pointer jo next ko darsha rha ho
//    constructor
    Node(int data){
        this -> data = data;
        this ->next = NULL;
    }
    // deconstructor
    ~Node(){
        int value = this->data;
        // memory free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void  print(Node* &head){
        if(head==NULL){
            cout<<"list is empty"<<endl;
        }
        Node* temp  = head;
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }  cout<<endl;
    }

 // ye pehle hi add ho jayega
    void insertAtHead(Node* &head, int d){
       Node* temp = new Node(d);   //jo insert krenge usko noe node me dal denge
       temp->next=head;
       head=temp;   //ab head temp ho jayega
    }
    
    void insertAtTail(Node* &tail,int d){
         Node* temp = new Node(d);
         tail->next = temp;
        //  temp->next = NULL; wrong
        // bhai tail ek to print ho gya hai ya aa gya hai 
        // ab tail ko aage badha de to tail=temp ho gya bcs tail hmesha last pe rhega

          tail= temp;
    }
    
    void insertAtPosition(Node* &head,Node* &tail,int position,int d){
      if(position==1){
          insertAtHead(head,d);
          return;
      }
        Node* temp = head;
        int cnt = 1;
        while(cnt<position-1){
            temp = temp->next;
            cnt++;
        }

        if(temp->next ==NULL){
            insertAtTail(tail,d);
            return;
        }
        // ab bhai mera temp node position se pehle aa gya
        // to ab nya node bna le aur use relation bna de
        Node* insertNode = new Node(d);
        insertNode->next = temp ->next;
        temp->next = insertNode;
    }

    void deleteNode(int position,Node* &head){
         if(position==1){
             Node* temp = head;
             head = head->next;
            //  memory free start node
            temp->next= NULL;
            delete temp;
         } else{
         Node* temp = head;
         Node* prev = NULL;

         int cnt = 1;
         while(cnt<position){
             prev = temp;
             temp = temp->next;
             cnt++;
         }

         prev->next = temp->next;
         temp->next = NULL;
         delete temp;


         }
    }

int main(){
     
     Node* node1 = new Node(10); //heap me kiye aise bhi kar skte the
    // cout<< node1 -> data<<endl;
    // cout<< node1 -> next<<endl;

    // head pointed to node 1
    Node* head = node1;  //by defaul we know that 
    
  /*  //insert at Head *********************************
   insertAtHead(head,20);
    // print(head);
    
    insertAtHead(head,40);
    // print(head);  
    cout<<"head "<<head ->data <<endl; */

    //insert at Tail *********************************
    Node* tail = node1;
     insertAtTail(tail,30);
    print(head);
    insertAtTail(tail,100);
    print(head);
    // cout<<"tail" <<tail->data<<endl;
    
    // insertAtPosition(head,tail, 1,33);
    // print(head);
    insertAtPosition(head,tail, 4,33);
    print(head);   
    
    deleteNode(2,head);
    print(head);
    deleteNode(1,head);
    print(head);
    return 0;
}



// only with head*************************************************************************
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
    Node* temp= head;
    while(temp!=NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }  cout<<endl;
}


void insertNode(Node* &head,int position,int d){
    if(position ==1){
        Node*temp = new Node(d);
        temp->next = head;
        head = temp;
        return;
    }
    Node*curr = head;
    int cnt = 1;
    while(cnt<position-1){
        curr= curr->next;
        cnt++;
    }
    if(curr->next == NULL){
        Node*temp =new Node(d);
        curr->next = temp;
        temp->next =NULL;
        return;
    }
    Node*temp= new Node(d);
    temp->next = curr->next;
    curr->next = temp;
}
void deleteNode(Node*&head,int position){
    if(position ==1){
        Node*curr =head;
        head = head->next;
        curr->next = NULL;
        delete curr;
    } else {
    Node*curr = head;
    Node*prev = NULL;
    int cnt = 1;
    while(cnt<position){
        prev= curr;
        curr= curr->next;
        cnt++;
    }
    prev->next =curr->next;
    curr->next = 0;
    delete curr;
}
}

int main(){

    Node* head = NULL;
  
     insertNode(head,1,10);
     print(head);
     insertNode(head,2,20);
     print(head);
     insertNode(head,3,30);
     print(head);
     insertNode(head,4,25);
     print(head);

     deleteNode(head,3);
     print(head);
     deleteNode(head,1);
     print(head);
  
    return 0;
}