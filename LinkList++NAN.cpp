#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *prev,*next;
};
Node *head, *tail;

void creatLinkList(){
 head =NULL;
    tail =NULL;
}
Node * creatNode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(Node *newNode){

    if(head==NULL&&tail==NULL){
     head = newNode;
     tail = newNode;
                   }

 else{
       newNode->next = head;
        head->prev = newNode;
        head = newNode;
        }
            }

void insertAtEnding(Node *newNode){

        if(head==NULL&&tail==NULL) {
        head = newNode;
        tail = newNode;
                         }
    else{
         newNode->prev = tail;
         tail->next = newNode;
         tail = newNode;
                 }
                    }

void  traverseForward(){

    for(Node * current = head ; current != NULL; current= current->next) {
    cout<<current->data<<" ";
    }
    cout<<endl;
                }
void deleteFirstdNode()
{

    if(head==NULL){
      return;
    }
    Node * NodeToDelete = head;
    head = head->next ;
    delete NodeToDelete;
    if(head!=NULL)
        head->prev = NULL;
        else tail =NULL;

}
void deleteLastdNode()
{

    if(tail==NULL){
      return;
    }
    Node * NodeToDelete = tail;
    tail = tail->prev ;
    delete NodeToDelete;
    if(tail!=NULL)
        tail->next = NULL;
        else head =NULL;

}
void deleteMiddleNode()
{


    Node* NodeToDelete searchNode(value);
    if(NodeToDelete!=NULL){
        NodeToDelete->prev->next = NodeToDelete->next;
        NodeToDelete->next->prev = NodeToDelete->prev;
        delete NodeToDelete;
    }
}


void traverseBackward(){

    for(Node* current = tail ; current != NULL; current= current->prev){
     cout<<current->data<<" ";
    }
   cout<<endl;
            }
Node* searchNode(int value){
    for(Node * current = head ; current != NULL; current=current->next) {
         if(current->data==value)  {
            return current;
         }
    }

         return NULL;
}

void insertAfterNode(Node* previous ,Node* newNode){
  newNode->next =previous->next;
  newNode->prev= previous;
  previous->next->prev = newNode;
  previous->next = newNode;


}
void insertBeforeNode(Node* nextious ,Node* newNode){
  newNode->prev = nextious->prev;
  newNode->next =nextious;
  nextious->prev->next =newNode;
  nextious->prev = newNode;

}


int main(){

cout<<"======================================="<<endl;
cout<<"***************************************"<<endl;
cout<<"________Welcome to this program________"<<endl;
cout<<"***************************************"<<endl;
cout<<"======================================="<<endl;
 int i,n,input;
    creatLinkList();

   cout<<"Now start insert at beginning program........."<<endl<<endl;
   cout<<"How many numbers you want to "<<endl;
   cout<<"insert at beginning >>>>>>>";
    cin>>n;
   cout<<"Please put your input :";
   for(i=0; i<n; i++) {
   cout<<i+1<<"th element>>";
     cin>>input;
      insertAtBeginning(creatNode(input));
    }
   cout<<"Traverse_ _ from_ _ Forward"<<endl;
    traverseForward();
  cout<<"Traverse_ _ from_ _ Backward"<<endl;
    traverseBackward();
    cout<<endl;

    cout<<"Now start insert at ending program........."<<endl<<endl;
   cout<<"How many numbers you want to "<<endl;
   cout<<"insert at ending >>>>>>>";
    cin>>n;
    cout<<"Please put your input :";

    for(i=0; i<n; i++){
    cout<<i+1<<"th element>>";
        cin>>input;
        insertAtEnding(creatNode(input));
    }


  cout<<"Traverse_ _ from_ _ Forward"<<endl;
    traverseForward();
   cout<<"Traverse_ _ from_ _ Backward"<<endl;
    cout<<endl;
    traverseBackward();

    Node *temp = searchNode(4);
    Node *newNode =creatNode(10);
    if(temp!=NULL){
    insertAfterNode(temp , newNode);
    }
       cout<<"Traverse_ _ from_ _ Forward"<<endl;
    traverseForward();
   cout<<"Traverse_ _ from_ _ Backward"<<endl;
    cout<<endl;
    traverseBackward();
  deleteFirstdNode();

    return 0;
}
