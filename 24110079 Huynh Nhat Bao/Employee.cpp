// This code was written with AI assistance (ChatGPT) and then customized by me.
#include <iostream>
using namespace std;

// yêu cầu: tạo class employee bao gồm name (tên) và salary (lương)
class Employee {
private:
    string name;   // private
    double salary; // private

public:
    // constructor
    Employee(string n, double s) {
        name = n;
        salary = s;
    }

    // hiển thị thông tin nhân viên
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee nv1("Tony", 25000);
    nv1.displayInfo();

    Employee nv2("Jack", 500000);
    nv2.displayInfo();

    return 0;
}
