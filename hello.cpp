#include <iostream>
using namespace std;
// sử dụng không gian tên std để tránh phải viết std:: trước mỗi lần sử dụng các đối tượng và hàm của thư viện iostream

int main() {

    // hàm main là điểm bắt đầu của chương trình, nơi mà chương trình sẽ bắt đầu thực thi
    // 1. output
    cout << "Hello, World!" << endl;
    // sử dụng đối tượng cout để in ra màn hình chuỗi "Hello, World!" và endl để kết thúc dòng và chuyển sang dòng mới  
    cout << "Welcome to C++ programming." << endl;
    //  sử dụng đối tượng cout          để in   ra màn hình chuỗi "Welcome to C++ programming." và endl để kết thúc dòng và chuyển sang dòng mới    

    // 2. input
    double toán, văn, dtb;
    // khai báo các biến toan, van và dtb có kiểu dữ liệu double để lưu trữ điểm toán, điểm văn và điểm trung bình  

    cout << "nhập điểm toán: ";
    // sử dụng đối tượng cout để in ra màn hình chuỗi "Nhap diem toan: " để yêu cầu người dùng nhập điểm toán   
    cin >> toán;
    // sử dụng đối tượng cin để nhận dữ liệu từ bàn phím và lưu vào biến toan   

    cout << "nhập điểm văn: ";
    // sử dụng đối tượng cout để in ra màn hình         chuỗi "Nhap diem van: " để yêu cầu người dùng nhập điểm văn     

    cin >> văn;
// sử dụng đối tượng cin để nhận dữ liệu từ bàn phím và lưu vào biến van            

    dtb = (toán + văn) / 2;
    // tính điểm trung bình bằng cách cộng điểm toán và điểm văn lại với nhau rồi chia cho 2, kết quả được lưu vào biến dtb 

    cout << "Điểm trung bình của bạn là: " << dtb << endl;
    // sử dụng đối tượng cout để in ra màn hình chuỗi "Điểm trung bình: " và giá trị của biến dtb, sau đó kết thúc dòng và chuyển sang dòng mới bằng endl       

    return 0;
}
