#include "Node.h"


class LinkedList{
    Node org; //헤드 노드를 사용하여 코드 단순화, 포인터 대신 org.link가 작동 

public:
    LinkedList():org(NULL){}
    ~LinkedList(){clear();}
    void clear(){while(!isEmpty()) delete remove(0);}
    
    Node* getHead(){return org.getlink();}
    bool isEmpty(){return getHead()==NULL;}

    Node* getEntry(int pos){
        Node* n = &org;
        for(int i=-1; i<pos; i++, n=n->getlink()) //!
            if (n==NULL) break;

        return n;
    }

    void insert(int pos, Node* n){
        Node* prev = getEntry(pos-1);
        if(prev != NULL)
            prev->insertNext(n);
    }

    Node* remove(int pos){
        Node* prev = getEntry(pos-1);
        return prev->removeNext(); //! if문 왜 없니 ..? 
    }

    Node* find(int val){
        for(Node* p=getHead(); p!=NULL; p=p->getlink()){
            if (p->hasData(val)) return p;
        }
        return NULL;
    }

    void replace(int pos, Node* n){ // n 은 다른노드, pos의 노드를 n으로 교체
        Node* prev = getEntry(pos-1);
        if (prev!=NULL){
            delete prev->removeNext();
            prev->insertNext(n);
        }
    }

    int size(){
        int count=0;
        for(Node* p=getHead(); p!=NULL;p=p->getlink()){
            count++;
        }
        return count;
    }

    void display(){
        printf("[전체 항목수 = %d]: ", size());
        for(Node* p=getHead(); p!=NULL;p=p->getlink()){
            p->display();
        }
        printf("\n");
    }






    


};