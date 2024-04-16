#include <cstdio>

void swap(int* px, int* py){
    int temp = *px;
    *px = *py;
    *py = temp;
}


int main(){
    int a=1, b=2;
    printf("swap 호출 전: a=%d, b=%d\n", a, b);

    swap(&a, &b);
    printf("swap 호출 후: a=%d, b=%d\n", a, b);

    return 0;
}