//เขียนโปรแกรมแสดงข้อความแสดง IoT-SAU
//แสดงผลการคำนวณของ 2 ยกกำลัง 500
//" " double quote, ' ' single quote, / slash, \ back slash 
//{ } curly bracket, [ ] square bracket, ( ) round bracket, < > angle bracket
// : clon, semicolon, `backick (Alt+9+6)


#include <stdio.h> //หรือ "stdio.h"
#include <math.h>

//การกำหนดค่าคงที่ คือ การสร้าตัวแทนมาเก็บข้อมูลใดๆ โดยไม่สามารถเปลี่ยนค่าข้อมูลนั้นได้
//และสามารถเอาตัวแทนที่สร้าไปใช้โปรแกรมได้
#define showline printf("+++++++++++++++++++++++++++++");
#define SMILE "^_____^ 555"

int main(){

    printf("Iot-SAU\n");
    showline
    showline
    printf("%lf\n", pow(2, 10) );
    printf("%s\n",SMILE);
    showline
    
    return 0;
}