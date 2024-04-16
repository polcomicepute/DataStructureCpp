#include "Student.h"

class Node: public Student{
    Node* link; //link field: 다음 노드를 가리키는, 포인터 변수, private
    //data field: Student class 

public:
    Node(int id=0, char* name="", char* dept="")
        :Student(id, name,dept){link=NULL;} 
        // 생성자
        //  자식(Node)클래스가 부모(Student)클래스로부터 상속받은 생성자를 호출하여, 
        // 부모클래스의 멤버 변수들을 초기화 
        // 상속 관계에서 자식클래스 객체가 생성될 때 부모클래스의 적절한 생성자도 호출되어야 함
    ~Node(){}; // 소멸자

    Node* getlink(){ return link;}    // private link 변수의 값에 접근
    void setlink(Node* p){ link=p;}    // private link 변수의 값에 접근

};