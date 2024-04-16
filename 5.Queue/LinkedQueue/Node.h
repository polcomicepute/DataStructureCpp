#include <cstdio>

class Node{
    int data; //data field
    Node* link; // link field

public:
    Node(int val=0): data(val), link(NULL){}// 생성자, 멤버 초기화 리스트 사용
    Node* getlink(){return link;}
    void setlink(Node* next){link=next;}
    void display(){printf("<%d>", data);}
};