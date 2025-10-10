//Global-Local Variable
#include "stdio.h" //หรือ <stdio.h>

int dataA = 100; //global variable ใฃ้ที่ไหนก็ได้
const int dataE = 5050;
 
void showData(){
    int dataB = 555;

    printf("datA = %d\n",dataA);
    printf("datB = %d\n",dataB);
    // printf("datC = 5d\n",dataC); //error
    //printf("datC = 5d\n",dataD); //error
}

int main(){
    int dataC = 999; //local variableใช้ได้เฉพาะใน code block นั้นๆ เท่านั้น
    const int dataD = 1010; //local constant variable
    // dataD = 2020; //error

    dataC = 888;

    printf("dataA = %d\n", dataA);
    dataC = 777;
    printf("dataC = %d\n", dataC);
   // printf("dataB = %d\n", dataB); //error
    printf("dataE = %d\n", dataE);

    return 0;
}