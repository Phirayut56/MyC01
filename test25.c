#include <stdio.h>

//สร้าง Structure
struct Sau{
    char name[20];
    int id;
    int age;
    float score;
};


int main(){
    struct Sau dateA;
    int dateB[5];

    //กรณีสร้างและมีการกำหนด inttial value
    int dateC[3] ={10, 20, 30};
    struct Sau dateD = {"Sombat", 1, 20, 99.99};

    printf("%d\n", dateC[2]); // => 30
    printf("%.2f\n", dateD.score); // => 99.99
    dateD.id = 654568789;
    return 0;
}