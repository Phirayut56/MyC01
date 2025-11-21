#include <stdio.h>

//สร้าง Structure
typedef struct{
    char name[20];
    int id;
    int age;
    float score;
} Sau; //ชื่อ Structre

int main(){
    Sau dateA;
    Sau dateD = {"Sombat", 1, 20 ,99.99};

    printf("%.2f\n", dateD.score); // => 99.99
    dateD.id = 654568789;
    return 0;
}