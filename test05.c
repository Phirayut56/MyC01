//โปรแกรมแสงชื่อ Sombatและคะแนน 99 ทางหน้าจอ
int main(){

    

    char fullname[10] = "Sombat";
    int score;

    score = 99;

    //ใน " " ของ printf() อย่างไรแสดงอย่างนั้น
    //ยกเว้น % format spec. , \ escape sequence 
    printf("name is : fullname\n");
    printf("Name is : %s\n", fullname);
    printf("Score is : %d\n , score");

    
    return 0;
}