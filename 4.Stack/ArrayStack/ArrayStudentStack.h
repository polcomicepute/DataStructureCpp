#include "../Student.h"

const int MAX_STACK_SIZE = 100;

inline void error(char* s){
    printf("%s\n", s);
    exit(1);
}

class StudentStack{
    int top;
    Student data[MAX_STACK_SIZE]; // 객체 요소의 배열 
public:
    StudentStack(){top=-1;}
    ~StudentStack(){}

    bool isEmpty(){return top==-1;} // 난 왜 자꾸 if else문을 쓰려 하지?
    bool isFull(){return top==MAX_STACK_SIZE-1;}
    
    void push(Student x){ // call by value (Object, Deepcopy)
        if (isFull()) error("stack full error");
        data[++top] = x;
    }
    Student pop(){
        if (isEmpty()) error("stack empty error");
        return data[top--];
    }
    Student peek(){
        if (isEmpty()) error("stack empty error");
        return data[top];
    }
    void display(){
        printf("전체 학생의 수: %d\n", top+1);
        for(int i=0; i<=top; i++)
            data[i].display(); //각 학생 정보 출력 
        printf("\n");
    }   

};