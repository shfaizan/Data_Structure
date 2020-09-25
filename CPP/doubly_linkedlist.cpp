#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{

    int data;
    node *next;
    node *prev;
}*head=NULL,*tail=NULL;

class DoublyLink{
    public:

    void insertb(int v){

    struct node *temp=new node;
    temp->data=v;

    if(head==NULL){
    temp->next=NULL;
    temp->prev=NULL;
     head=temp;
     tail=temp;
    }

    else{
        temp->next=head;
        head->prev=temp;
        temp->prev=NULL;
        head=temp;
    }
    }

    void inserte(int v){

    struct node *temp=new node;
    temp->data=v;

    if(head==NULL){
    temp->next=NULL;
    temp->prev=NULL;
    head=temp;
    tail=temp;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        temp->next=NULL;
        tail=temp;
    }

    }

    void insertma(int v, int p){
    struct node *temp=new node;
    struct node *trav=new node;
    temp->data=v;

    if(head==NULL){
    temp->next=NULL;
    temp->prev=NULL;
    head=temp;
    tail=temp;
    }
    else{
    trav=head;
    while(trav->data!=p){
        trav=trav->next;
        }
        temp->next=trav->next;
        trav->next=temp;
        temp->prev=trav;
    }

    }

    void deleteb(){

    if(head==NULL){
   cout<<"Underflow!!"<<endl;
    }
    else{
    cout<<"Element deleted: "<<head->data<<endl;;
    head=head->next;
    head->prev=NULL;
    }
    }

    void deletee(){

    if(head==NULL){
   cout<<"Underflow!!"<<endl;
    }
    else{
    cout<<"Element deleted: "<<tail->data<<endl;
    tail=tail->prev;
    tail->next=NULL;
    }
    }

    void deletem(int p){
    struct node *trav=new node;
    struct node *pre=new node;
    if(head==NULL){
   cout<<"Underflow!!"<<endl;
    }
    else{
    pre=head;
    trav=head->next;
    while(trav->data!=p){
        trav=trav->next;
        pre=pre->next;
    }
    cout<<"Element deleted: "<<trav->data<<endl;
    trav=trav->next;
    pre->next=trav;
    trav->prev=pre;
    }
    }



    void disp(){
    struct node *trav=new node;
    trav=head;
    while(trav!=NULL){
        cout<<trav->data<<"-->";
        trav=trav->next;
    }
     cout<<"NULL"<<endl;
    }

};

int main(){
DoublyLink l;
 int v,p,n;
    while(n!=8)
    {
        cout<<"1.Insert First \n2.Insert Middle \n3.Insert Last \n4.Delete First \n5.Delete Middle \n6.Delete Last \n7.Display \n8.Exit/n"<<endl;
        cin>>n;
        switch(n)
        {
           case 1:
                cout<<"Insert a number:"<<endl;
                cin>>v;
                l.insertb(v);
                break;
            case 2:
                cout<<"Insert a number: "<<"Insert the position: "<<endl;
                cin>>v>>p;
                l.insertma(v,p);
                break;
            case 3:
                cout<<"Insert a number: "<<endl;
                cin>>v;
                l.inserte(v);
                break;
            case 4:
                l.deleteb();
                break;
            case 5:
                cout<<"Insert a number you want to delete: "<<endl;
                cin>>v;
                l.deletem(v);
                break;
            case 6:
                l.deletee();
                break;
            case 7:
                l.disp();
                break;
            case 8:
                exit(0);
        }
    }
        return 0;

}
