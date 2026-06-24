#include <iostream>  // Thư viện để dùng cout, endl
#include <climits>   // Thư viện để dùng INT_MAX, INT_MIN
//int la kiểu dữ liệu nguyên, có thể lưu trữ các số nguyên từ -2,147,483,648 đến 2,147,483,647  
//short là kiểu dữ liệu nguyên nhỏ hơn int, có thể lưu trữ các số nguyên từ -32,768 đến 32,767  
//float là kiểu dữ liệu số thực, có thể lưu trữ các số thực với độ chính xác thấp hơn double    


using namespace std; // Giúp viết cout, endl ngắn gọn hơn, không cần std::

int main() {
    // Sử dụng đối tượng cout để in ra giá trị cực đại
    cout << "Max cua kieu du lieu int: " << INT_MAX << endl;
    // endl để kết thúc dòng và chuyển sang dòng mới
    
    // Sử dụng đối tượng cout để in ra giá trị cực tiểu
    cout << "Min cua kieu du lieu int: " << INT_MIN << endl;
    cout <<"Max cua kieu du lieu short:"<< SHRT_MAX << endl;   
    cout <<"Min cua kieu du lieu short:"<< SHRT_MIN << endl; 
    //khai bao kieu du lieu
    int toan; 
    float diemtoan;
    double tienluong;
    //khoi tao
    bool ckeck= true;
    char kytu= 'A';
    int cannang = 50;
    float chieucao = 1.75F;  

    //kiem tra kieu du lieu
    cout << typeid(toan).name() << endl; // in ra kieu du lieu cua bien toan
    cout << typeid(diemtoan).name() << endl; // in ra kieu du lieu cua bien diemtoan
    cout << typeid(tienluong).name() << endl; // in ra kieu du lieu cua bien tienluong
    cout << typeid(ckeck).name() << endl; // in ra kieu du lieu cua bien ckeck
    cout << typeid(kytu).name() << endl; // in ra kieu du lieu cua bien kytu
    cout << typeid(cannang).name() << endl; // in ra kieu du lieu cua bien cannang
    cout << typeid(chieucao).name() << endl; // in ra kieu du lieu cua bien chieucao



    
    return 0;
}