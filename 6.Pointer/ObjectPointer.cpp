#include <cstdio>

struct MyNewType{
    int i;
    float f;
};


int main(){
    MyNewType s, *ps;
    ps = &s;

    ps->i=2;
    ps->f = 3.14f;

    printf("ps.i %s, %d\n", ((ps->i)==(*ps).i) ? "true" : "false", ps->i);
    printf("ps.f %s, %f\n", ((ps->f)==(*ps).f) ? "true" : "false",ps->f);




    return 0;
}