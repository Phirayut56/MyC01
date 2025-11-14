#include <stdio.h>

int main(){

    int dataA;
    int *p_dataA = &dataA;

    dataA = 10;

    printf("Address of dataA is : %p\n", &dataA); //แสดงAddress number
    printf("Address of dataA is : %d\n", &dataA);
    printf("%p\n", p_dataA);
    printf("%d\n", p_dataA);


    printf("Value A %d\n", dataA);            //แสดงคำที่อยู่ในช่อง
    printf("Value A %d\n", *p_dataA);

    printf("Address of p_dataA is : %p\n", &p_dataA);
    *p_dataA = 999;
    printf("Value A %d\n", dataA);
    printf("Value A %d\n", *p_dataA);

    return 0;
}