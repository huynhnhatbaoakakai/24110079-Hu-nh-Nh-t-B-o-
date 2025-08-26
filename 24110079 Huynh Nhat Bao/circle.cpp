// This code was written with AI assistance (ChatGPT) and then customized by me.
#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846 //đinh nghĩa do không tự định nghĩa được (MSVc)
#endif

using namespace std;

class Circle {
private:
    double radius; // thuộc tính private
    string color;  // thuộc tính private

public:
    // Setter cho bán kính
    void setRadius(double r) {
        radius = r;
    }

    // Getter cho bán kính
    double getRadius() {
        return radius;
    }

    // Setter cho màu
    void setColor(string c) {
        color = c;
    }

    // Getter cho màu
    string getColor() {
        return color;
    }

    // Chu vi hình tròn
    double circumference() {
        return 2 * M_PI * radius;
    }

    // Diện tích hình tròn
    double area() {
        return M_PI * pow(radius, 2);
    }

    // Kiểm tra hợp lệ: bán kính > 0
    bool kt() {
        return radius > 0;
    }
};

int main() {
    Circle tron1;
    double r;
    string c;

    cout << "Please enter radius: ";
    cin >> r;
    tron1.setRadius(r);

    if (!tron1.kt()) {
        cout << "Invalid Radius, Radius must be a positive number." << endl;
    } else {
        cout << "Please enter color: ";
        cin >> c;
        tron1.setColor(c);

        cout << "Circumference: " << tron1.circumference() << " (Length Units) "
             << "and Area: " << tron1.area() << " (Square Units)" << endl;
        cout << "Color of the circle: " << tron1.getColor() << endl;
    }
}
