#include "StudentQueue.h"


int main(){
    StudentQueue queue;
    queue.enqueue(new Node(2015130007, "홍길동", "컴퓨터공학과"));
    queue.enqueue(new Node(2015130100, "이순신", "기계공학과"));
    queue.enqueue(new Node(2015130007, "황희", "법학과"));
    queue.display();

    delete queue.dequeue();
    queue.display();


    return 0;
}