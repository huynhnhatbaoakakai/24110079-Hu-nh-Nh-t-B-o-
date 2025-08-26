// This code was written with AI assistance (ChatGPT) and then customized by me.
#include <iostream>
using namespace std;

// yêu cầu: tạo class Rectangle bao gồm width (chiều rộng) và height (chiều cao)
class Rectangle {
private:
    double width;   // private
    double height;  // private

public:
    // constructor
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    // hàm tính diện tích HCN
    double calculateArea() {
        return width * height;
    }
};

int main() {
    Rectangle hcn(2, 3);
    cout << "Area: " << hcn.calculateArea() << endl;

    return 0;
}
