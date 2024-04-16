# include "ArrayList.h"


int main(){
    // int data[100]={0,1,2,3,4,5,6,7,8,9,10}; // 배열 초기화 방법이 기억이 잘 안나네 . 
    // printf(data[0:3]);
    ArrayList list;

    list.insert(0,10);
    list.insert(0,20);
    list.insert(1,30);
    list.insert(list.size(),40);
    list.insert(2,50);
    list.display();

    list.remove(2);
    list.remove(list.size()-1);
    list.remove(0);
    list.replace(1,90);
    list.display();

    list.clear();
    list.display();







    return 0;
}