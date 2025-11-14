#include <stdio.h>

void funcA(int *x, int y, int *z){
    *x = 10;
    y = 20;
    *z = 30;
}

int main(){
    int a = 555;
    int b = 666;
    int c = 777;

     funcA(&a, b, &c);

     printf("A = %d\n", a);
     printf("A = %d\n", b);
     printf("A = %d\n", c);


    return 0;
}