#include <iostream>
using namespace std;
// lớp Student miêu tả thông tin sinh viên cơ bản: tên và điểm
// Code này được viết với sự hỗ trợ từ AI (ChatGPT) và đã được tôi chỉnh sửa, bổ sung.

class Student {
private:
    string name;   // tên (private)
    double grade;  // điểm (private)

public:
    // constructor có tham số: khởi tạo sinh viên với tên và điểm
    Student(string n, double g) {
        name = n;
        grade = g;
    }

    // hiển thị thông tin sinh viên
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
    }

    // kiểm tra đậu hay không (>=50 là đậu)
    bool dau() {
        return grade >= 50;
    }
};

int main() {
    // tạo sinh viên = constructor
    Student hs1("Bao", 47);
    hs1.displayInfo();
    cout << "Status: " << (hs1.dau() ? "Dau" : "Rot") << endl;

    Student hs2("Trung", 99);
    hs2.displayInfo();
    cout << "Status: " << (hs2.dau() ? "Dau" : "Rot") << endl;

    return 0;
}
