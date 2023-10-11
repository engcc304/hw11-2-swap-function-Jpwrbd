/*
    ผู้ใช้กรอกชื่อและอายุเข้าไปในระบบจำนวน 2 ครั้ง โดยให้คุณทำการสลับอายุของคน 2 คนนี้ผ่านฟังก์ชันที่คุณเขียนขึ้นมา เช่น นาย ก อายุ 31 ปี และ นาย ข อายุ 20 ปี หลังจากเรียกฟังก์ชันการสลับค่าแล้ว นาย ก จะอายุ 20 ปี และนาย ข จะอายุ 31 ปี

    Test case:
        Input A
        Name : 
            Yorn
        Age : 
            31
        Input B
        Name : 
            Thane
        Age : 
            20
    Output:
        ** RESULT **
        Name: Yorn (31)
        Name: Thane (20)

        ** SWAP AGE **
        Name: Yorn (20)
        Name: Thane (31)

*/
#include <stdio.h>//start
void age_user(int *age1, int *age2) {
    int temp = *age1 ;
    *age1 = *age2 ;
    *age2 = temp ;
}

int main() {
    int age1, age2;
    char name1[10], name2[10] ;
    
    printf("Test case:\n" ) ;
    printf("\tInput A\n") ;
    printf("\tName : ") ;
    scanf("%s", name1) ;
    printf("\tAge : ") ;
    scanf("%d", &age1) ;
    
    printf("\tInput B\n") ;
    printf("\tName : ") ;
    scanf("%s", name2) ;
    printf("\tAge : ") ;
    scanf("%d", &age2) ;

    age_user(&age1, &age2) ; //เรียกใช้ฟังก์ชั่นย่อย

    printf( "** RESULT **\n" ) ;
    printf( "Name: %s (%d)\n", name1, age1) ;
    printf( "Name: %s (%d)\n", name2, age2) ;

    printf( "\n** SWAP AGE **\n" );
    printf( "Name: %s (%d)\n", name1, age2) ;
    printf( "Name: %s (%d)\n", name2, age1) ;

    return 0 ;
} //end