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
#include <stdio.h>
#include <string>
void age_user(int *age1,int *age2){ //ฟังก์ชั่นย่อย จะเรียกใช้ก็ต่อเมื่อประกาศใน main ฟังก์ชั่นหลัก
    int temp = *age1;
    *age1 = *age2;
    *age2 = temp;
}
int main(){
    int age1, age2 ;
    char name1[10], name2[10] ;
    printf( "Test case: \n" ) ;
    printf( "\tInput A \n" ) ;
    printf( "\tName : \n\t   " ) ;
    scanf( "%s",&name1 ) ; 

    printf( "\tAge : \n\t   " ) ;
    scanf( "%d",&age2) ; 

    printf( "\tInput B \n" ) ;
    printf( "\tName : \n\t   " ) ;
    scanf( "%s",&name2) ;    
    printf("\tAge : \n\t   ") ;
    scanf( "%d",&age2) ; 

     //เรียกใช้ฟังก์ชั่นย่อย
    printf( "Output: \n" ) ;
    printf( "\t** RESULT ** \n" ) ;
    printf ( "\tName: %s (%d)\n", name1 , age1 ) ;
    printf ( "\tName: %s (%d)\n", name2 , age2 ) ;

    printf ( "\n\t** SWAP AGE **\n" ) ;
    printf ( "\tName: %s (%d)\n", name1 , age2 ) ;
    printf ( "\tName: %s (%d)\n", name2 , age1 ) ;
    
    return 0 ;
}