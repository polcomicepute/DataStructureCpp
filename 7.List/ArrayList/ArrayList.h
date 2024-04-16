#include <cstdio>
#include <cstdlib>
#define MAX_LIST_SIZE 100

inline void error(const char* str){   //문자열: char의 1차원 배열, 포인터로 배열의 첫 주소를 넘겨주고 NULL이 나올때까지가 문자열 임 
    printf("%s", str);
    exit(1);
}

class ArrayList{
    int data[MAX_LIST_SIZE];
    int length;
public:
    ArrayList(){length=0;}
    ~ArrayList(){}

    void insert(int pos, int item){
        // 유효한 위치 검사 (isFull / 0<= pos <= length)
        if(!isFull() && 0<=pos && pos<=length){ 
            for(int i=length; i>pos; i--){
                data[i] = data[i-1]; // 뒤로 한 칸씩 밀기 O(n) ?
            }
            data[pos] = item; // 복사 
            length++; // 항목 개수 증가
        }
        else error("포화나 삽입 위치 오류");
        
    }

    void remove(int pos){
        if( !isEmpty() && 0<=pos && pos<length ){ // 삭제는 배열의 끝(length)에선 할 수 없음 null이니까 
            for(int i=pos+1; i<length;i++)
                data[i-1] = data[i];
            length--;
        }
        else{
            error("공백이나 삭제 위치 오류");
        }
    }

    int getEntry(int pos){
        return data[pos];
    }

    bool isEmpty(){
        return length==0;
    }

    bool isFull(){
        return length==MAX_LIST_SIZE;
    }

    bool find(int item){
        for(int i=0; i<length; i++){
            if (data[i]==item) return true;
        }
        return false;
    }

    void replace(int pos, int item){
        data[pos] = item;
    }

    int size(){
        return length;
    }

    void display(){
        printf("[배열 리스트 요소]");
        for(int i=0; i<size();i++){
            printf("[%d]", data[i]);
        }
        printf("\n");
    }

    void clear(){
        //data = []; // 아니 이건 왜 안하지? 
        length=0;
    }


};