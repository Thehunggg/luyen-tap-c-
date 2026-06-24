#include<iostream>
// Thư viện để nhập/xuất dữ liệu (dùng cho lệnh cout
#include<cmath>
// Thư viện để sử dụng các hàm toán học (dùng cho lệnh pow)
using namespace std;
// Khai báo không gian tên chuẩn để sử dụng các hàm và đối tượng trong thư
//exchange rates source form  https://www.fiscal.treasury.gov/reports-statements/treasury-reporting-rates-exchange/current.html
int main() {
    // Khai báo hàm main, điểm bắt đầu của chương trình
    double vnd ;
    //khai bao ten du lieu la vnd
    double evnd=23000;
    //khai bai bien evnd(viet tat cua exchange vnd)
    double yen;
    //khai bao bien yen
    double eyen=200;
    // khai bao bien eyen (exchange yen)
    double dollars;
    //khai bao bien dollars
    cout<<"Enter number of Vietnam dong:";
    //yeu cau nguoi dung nhap tien viet nam
    cin>>vnd;
    //in ra so tien nguoi dung nhap so tien viet nam dong
    cout<<"Enter number of Japanese yen:";
    //ey cau nguoi dung nhap bien yen
    cin>>yen;
    // in ra so tien yen nhat maf nguoi dung nhap
    dollars=(vnd/evnd)+(yen/eyen);
    //tinh ra so tien dollar
    cout<<"US Dollars=$"<<dollars<<"\n";
    return 0;
}









