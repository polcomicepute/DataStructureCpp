#include "../../Node.h"

class StudentQueue{
    Node *rear, *front;
public:
    StudentQueue(): rear(NULL), front(NULL){}
    ~StudentQueue(){while (!isEmpty()) delete dequeue();}
    
    bool isEmpty(){return front==NULL;}
    void enqueue(Node* p){ //rear 방향에서 들어옴 
        if (isEmpty()) front=rear=p; 
        else{
            rear->setlink(p);
            rear=p;
        }
    }
    Node* dequeue(){ // front방향으로 나감 
        if (isEmpty()) return NULL;
        Node* temp = front;
        front= temp->getlink();
        if (front==NULL) rear=NULL;
        return temp;
    }

    Node* peek(){return front;}
    void display(){
        printf("[전체 학생 정보]\n");
        for(Node* p=front; p!=NULL; p=p->getlink())
            p->display();
            printf("\n");
    }

};