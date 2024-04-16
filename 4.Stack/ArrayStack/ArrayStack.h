#include <cstdio>
#include <cstdlib>

/* 
class ArrayStack 
    - Data Field:
        int data[MAX_STACK_SIZE];
        int top;
    - Method:
        push(int x)
        pop(): int ,맨 위 요소 삭제하고 맨 위 요소 반환
        isEmpty(): bool
        isFull: bool
        peek(): int , 스택이 비어있지 않으면, 맨 위에 있는 요소를 삭제하지 않고 반환 
        display(), 스택 내 모든 요소 출력 

*/
const int MAX_STACK_SIZE = 20;

inline void error(const char* message){
    printf("%s\n", message);
    exit(1);
}

class ArrayStack{
    private:
        // Data Field
        int top;
        int data[MAX_STACK_SIZE];

    public:
        ArrayStack(){ top=-1; } // 멤버 변수 초기화
        ~ArrayStack(){}

        bool isEmpty(){ return top== -1; }
        bool isFull(){ return top==MAX_STACK_SIZE-1; } // 스택은 하나씩 처리 하니까 부등호 아님 

        void push(int x){ 
            if (isFull()) error ("stack is full!");
            data[++top]= x;
        }

        int pop(){
            if (isEmpty()) error ("stack is empty!");
            return data[top--];
        }


        int peek(){
            if (isEmpty()) error ("stack is empty!");
            printf("%d\n", data[top]);
        }

        void display(){
            printf("스택의 총 요소 수: %d\n", top+1);
            for(int i=0; i<=top; i++){
                printf("<%d>", data[i]);
            }
            printf("\n");
        }

}; 