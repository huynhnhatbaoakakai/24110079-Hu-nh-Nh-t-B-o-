// yêu cầu : tạo class book bao gồm tiêu đề và tác giả 
// This code was written with AI assistance (ChatGPT) and then customized by me.
#include <iostream>
using namespace std;

class Book {
private:
    string title;   // thuộc tính tiêu đề (private)
    string author;  // thuộc tính tác giả (private)

public:
    // constructor có tham số : khởi tạo sách với tiêu đề và tác giả 
    Book(string title, string author) {
        this->title = title;   // gán tham số title cho thuộc tính title
        this->author = author; // gán tham số author cho thuộc tính author
    }

    // this: phân biệt thuộc tính của đối tượng và tham số truyền vào 
    // this là con trỏ ẩn

    // hiển thị thông tin sách
    void displayInfo() {
        cout << "Tieu de: " << title << " | Tac Gia: " << author << endl;
    }
};

int main() {
    // không cần gán thủ công, chỉ cần tạo object book và gọi constructor
    Book sach1("Harry Potter and the Philosopher's Stone", "J. K. Rowling");
    sach1.displayInfo();

    Book sach2("Meu Pé de Laranja Lima", "José Mauro de Vasconcelos");
    sach2.displayInfo();

    return 0;
}
