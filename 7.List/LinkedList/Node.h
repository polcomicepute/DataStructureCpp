#include <cstdio>

class Node{
    int data; //data field
    Node* link;

public:
    Node(int val=0):data(val),link(NULL){}
    ~Node(){}

    Node* getlink(){return link;}
    void setlink(Node* next){link=next;}


    bool hasData(int val){return data==val;}

    void insertNext(Node* n){
        // 내 뒤에 n추가
        if (n!=NULL){
            n->link = link;
            link=n;
        }
    }

    Node* removeNext(){
        // 내 뒤 노드 삭제
        Node* removed = link;

        if (removed!=NULL){
            link = removed->link;
        }

        return removed;
    }
    


    void display(){
        printf("[%d]", data);
    }

};