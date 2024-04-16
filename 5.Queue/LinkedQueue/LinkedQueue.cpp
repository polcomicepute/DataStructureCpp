#include "LinkedQueue.h"


int main(){
    LinkedQueue queue;

    for(int i=0; i<10; i++)
        queue.enqueue(new Node(i));
    queue.display();

    delete queue.dequeue();
    delete queue.dequeue();
    delete queue.dequeue();
    queue.display();

    return 0;
}