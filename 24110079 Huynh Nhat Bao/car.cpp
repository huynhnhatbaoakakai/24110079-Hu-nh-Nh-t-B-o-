#include <iostream>
// This code was written with AI assistance (ChatGPT) and then customized by me.
using namespace std;
//lớp car mô tả một chiếc xe gồm thông tin cơ bản : hãng và năm sx

class Car{
    public:
    string brand; //hãng xe : vinfast , toyota
    int year; // năm sx
    void displayInfo(){
        cout << "Brand: " << brand << endl;  // phương thức in ra thông tin xe 
        cout << "Year: " << year << endl;

    }
    //constructor : hàm khởi tạo nhận vào tham số b và y 
    // gán giá trị nay cho thuộc tính brand và year của object

    Car(string b , int y) {
      brand = b;
      year = y ;

    }
} ;
int main(){
    Car car1("Honda", 2025);
    car1.displayInfo();
    Car car2("Vinfast", 2022);
     car2.displayInfo();
    Car car3("Tesla2025", 2025);
     car3.displayInfo();
   Car car4("HuynhDai", 2011);
    car4.displayInfo();

    return 0 ; 
    

}