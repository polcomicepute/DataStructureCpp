#include "../../Node.h"

class LinkedStack{
    Node* top;

public: 
    LinkedStack(){top=NULL;}
    ~LinkedStack(){while(!isEmpty()) delete pop();}  //!

    bool isEmpty(){ return top==NULL; }
    
    void push(Node* p){
        if (isEmpty()) top=p;
        else{
            p->setlink(top); //!
            top=p;
        }
    }

    Node* pop(){
        if (isEmpty()) return NULL; 
        Node* temp = top; //!
        top = top->getlink();
        return temp; 
    }

    Node* peek(){
        return top;
    }

    void display(){
        for(Node* p=top; p!=NULL; p=p->getlink()) //!
            p->display();
        printf("\n");

    }


};