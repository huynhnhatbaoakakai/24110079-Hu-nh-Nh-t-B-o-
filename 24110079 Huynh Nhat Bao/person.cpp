#include <iostream>
using namespace std;
// This code was written with AI assistance (ChatGPT) and then customized by me.

class Person {
private:
    string name;        // tên (private)
    int age;            // tuổi (private)
    string address;     // địa chỉ (private)
    string phoneNumber; // số điện thoại (private)

public:
    // Constructor có tham số
    Person(string n, int a, string ad, string p) {
        name = n;
        age = a;
        address = ad;
        phoneNumber = p;
    }

    // Hiển thị thông tin người
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone number: " << phoneNumber;
        if (!sdt()) {
            cout << " (Invalid!)";
        }
        cout << endl;
    }

    // Kiểm tra người lớn (>=18 tuổi)
    bool nguoilon() {
        return age >= 18;
    }

    // Kiểm tra số điện thoại hợp lệ (9 chữ số)
    bool sdt() {
        return phoneNumber.length() == 9;
    }

    // Cập nhật địa chỉ mới
    void move(string newAddress) {
        address = newAddress;
    }

    // Lời chào
    void greet() {
        cout << "Hello, my name is " << name << endl;
    }
};

int main() {
    // tạo 1 người = constructor
    Person ng1("Bao", 47, "Tran Hung Dao 1221", "123456789");
    ng1.displayInfo();
    ng1.greet();

    if (ng1.nguoilon()) {
        cout << "This person is an adult." << endl;
    } else {
        cout << "This person is not an adult." << endl;
    }

    // cập nhật địa chỉ mới
    ng1.move("Le Loi 202");
    cout << "After moving: " << endl;
    ng1.displayInfo();

    cout << endl;

    Person ng2("Hung", 11, "Nguyen Van Luong 212", "12345");
    ng2.displayInfo();
    ng2.greet();

    if (ng2.nguoilon()) {
        cout << "This person is an adult." << endl;
    } else {
        cout << "This person is not an adult." << endl;
    }

    return 0;
}
