#include <iostream>
using namespace std;
// This code was written with AI assistance (ChatGPT) and then customized by me.
// tạo class bao gồm 2 thuộc tính : accountNumber và balance ;
// có phương thức deposit , withdraw , displaybalance ; 

class Account {
private:
    string accountNumber; // số tài khoản (private)
    double balance;       // số dư (private)

public:
    // constructor cho nhanh 
    Account(string n, double b) {
        accountNumber = n;
        balance = b;
    }

    // check thử coi tài khoản có đủ 10 chữ số không 
    // nếu không đủ thì có thể là tài khoản không thấy hoặc không hợp lệ 
    bool coPhaiACkh() {
        return accountNumber.length() >= 10;
    }

    // nộp tiền 
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited : " << amount << endl;
    }

    // rút tiền 
    void withdraw(double amount) {
        if (amount > balance) {
            // nếu số tiền rút ra lớn hơn tiền hiện có thì không hợp lệ 
            cout << "Insuffiecient balance !" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: " << amount << " Successfully!" << endl;
        }
    }

    // check coi tài khoản có đúng tài khoản ngân hàng không 
    // có thì in ra acnumber và số dư
    void displayBalance() {
        if (!coPhaiACkh()) {
            cout << "Account number is invalid!" << endl;
        } else {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Current Balance: " << balance << endl;
        }
    }
};

int main() {
    Account tk1("512414124", 50000);
    cout << "\n--- Checking tk1 ---\n";
    tk1.deposit(20000);
    tk1.displayBalance();
    tk1.withdraw(20000);
    tk1.displayBalance();

    Account tk2("21122122", 200);
    cout << "\n--- Checking tk2 ---\n";
    tk2.displayBalance();

    Account tk3("1234567891", 100);
    cout << "\n--- Checking tk3 ---\n";
    tk3.deposit(100);
    tk3.displayBalance();
    tk3.withdraw(300);
    tk3.displayBalance();

    return 0;
}
