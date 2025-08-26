#include <iostream>
using namespace std;

// class bao gồm BRAND, model, ram, storage(GB), gpu
// phương thức: display, checkRAM, checkGPU, upgradeRAM
// This code was written with AI assistance (ChatGPT) and then customized by me.

class Laptop {
private:
    string brand;   // hãng
    string model;   // mẫu (vd: 5515)
    int ram;        // dung lượng RAM (GB)
    int storage;    // dung lượng ổ (GB)
    string gpu;     // card đồ họa

public:
    // constructor
    Laptop(string b, string m, int r, int s, string g) {
        brand = b;
        model = m;
        ram = r;
        storage = s;
        gpu = g;
    }

    // hiển thị thông tin laptop
    void displayInfo() {
        cout << "Brand: " << brand << " " << model << endl;
        cout << "RAM: " << ram << "GB" << endl;
        cout << "Storage: " << storage << "GB" << endl;
        cout << "GPU: " << gpu << endl;
    }

    // kiểm tra GPU
    void checkGPU() {
        // nếu tên gpu có chữ "RTX" thì đủ mạnh\
        //tìm kí tự riêng trong string
        if (gpu.find("RTX") != string::npos) {
            cout << "GPU is powerful enough for gaming!" << endl;
        } else {
            cout << "GPU is not strong enough for modern gaming!" << endl;
        }
    }

    // kiểm tra RAM so với yêu cầu phần mềm
    void Check(int required) {
        if (ram >= required) {
            cout << "Meet the requirements to run the software!" << endl;
        } else {
            cout << "Cannot run this software due to insufficient RAM!" << endl;
        }
    }

    // nâng cấp RAM
    void upgradeRAM(int ramthem) {
        ram += ramthem;
        cout << "RAM upgraded! Current RAM: " << ram << "GB" << endl;
    }
};

int main() {
    Laptop lap1("Dell", "Inspiron 5515", 8, 256, "AMD Radeon Vega 8");
    cout << "\n--- Laptop 1 ---\n";
    lap1.displayInfo();
    lap1.Check(16);
    lap1.checkGPU();
    lap1.upgradeRAM(8);
    lap1.Check(16);

    Laptop lap2("Asus", "ROG Strix", 16, 512, "NVIDIA RTX 3060");
    cout << "\n--- Laptop 2 ---\n";
    lap2.displayInfo();
    lap2.Check(16);
    lap2.checkGPU();

    return 0;
}
