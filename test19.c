// หาผลรวมแล้วค่าเฉลี่ยของเลข 3 จำนวนที่รับทางแป้นพิมพ์ แล้วแสดงผลออกมา

// input, process (คำนวณ/พิสูจน์ตรวจสอบ/ทำซ้ำ), output, save

// feafure การทำงานมีอะไรบ้าง เพื่อมาสรุปสร้างเป็น ฟังก์ชัน
 
// feature การทำงาน -> รับค่าเลข 3 จำนวน, คำนวณผลรวม, คำนวณหาค่าเฉลี่ย, แสดงผลรวม, แสดงผลค่าเฉลี่ย

// function -> inputNumber, calSum, calAverage, showSumAndAverage
 
#include <stdio.h>
 
int calSum(int num1,int num2,int num3){

    return num1 + num2 + num3;

}
 
double calAverage(int num1, int num2, int num3){

    return(num1 + num2 + num3) / 3.0;

}
 
void showSumAndAverage(int sum, double avarage){

    printf("Sum: %d\n",sum);

    printf("Average: %.2lf\n", avarage);

}
 
void inputNumber(){

    int num1, num2, num3;

    int sum;

    double average;

    printf("Enter number 1:"); scanf("%d", &num1);

    printf("Enter number 2:"); scanf("%d", &num2);

    printf("Enter number 3:"); scanf("%d", &num3);

    sum = calSum(num1, num2, num3);

    average = calAverage(num1, num2, num3);

    showSumAndAverage(sum, average);

}
 
int main(){

    inputNumber();

    return 0;

}
 