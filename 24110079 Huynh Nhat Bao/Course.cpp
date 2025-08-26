#include <iostream>
// This code was written with AI assistance (ChatGPT) and then customized by me.
using namespace std;

class Course {
private:
    string coursename;      // private
    int coursecode;         // private
    string instructorname;  // private

public:
    // constructor cho nhanh 
    Course(string n, int c, string i) {
        coursename = n;
        coursecode = c;
        instructorname = i;
    }

    // hiển thị thông tin môn học
    void displayInfo() {
        cout << "Course: " << coursename << endl;
        cout << "Code: " << coursecode << endl;
        cout << "Instructor Name: " << instructorname << endl;
    }

    // kiểm tra số tín chỉ cao (giả sử >3 tín chỉ là cao)
    bool isHighCredit() {
        return coursecode > 3;
    }

    // kiểm tra có cần phòng lab hay không
    void LabRequired() {
        if (!isHighCredit()) {
            cout << "Does not require a lab!" << endl;
        } else {
            cout << "Require a lab!" << endl;
        }
    }
};

int main() {
    Course kh1("Object Oriented Programming", 4, "Huynh Xuan Phung");
    kh1.displayInfo();
    kh1.LabRequired();

    Course kh2("Research Methods", 3, "Diep Phuong Chi");
    kh2.displayInfo();
    kh2.LabRequired();

    return 0;
}
