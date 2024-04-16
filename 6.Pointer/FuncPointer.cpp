#include <cstdio>

void foo(int a){
    printf("foo: %d\n", a);
};

int main(){

    void (*f)(int); //포인터 변수 선언- int를 매개변수로 갖고, 반환이 없는 함수의 주소 저장 포인터
    f = foo; // 함수의 이름 == 함수의 주소
    f(10);
    (*f)(10);
    printf("%p\n", f);
    printf("%p\n", &foo);
    printf("%p\n", *f);




    return 0;
}