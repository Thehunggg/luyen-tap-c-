#include<iostream> // Thư viện để nhập/xuất dữ liệu (dùng cho lệnh cout
#include<iomanip>// Thư viện để định dạng dữ liệu đầu ra (dùng cho lệnh setprecision)
using namespace std; 
int main(){
    double vnd,yen,usd;//
    cout<<"Enter the amout of VND: "; // SỬA: Bỏ dấu << bị thừa ở cuối dòng này
    cin>>vnd;
        cout << "You enter " << vnd << " VND" << endl;
        cout << "Enter the amount of Japanese yen: ";
    cin>>yen;
    cout<<"You enter "<<yen<<"￥"<<endl;
    double usd_form_vnd=vnd/23000;// Tỷ giá VND sang USD
    double yen_form_vnd=vnd/200;// Tỷ giá VND sang Yên Nhật
    double usd_form_yen=yen/110;// Tỷ giá Yên Nhật sang USD
    cout<<fixed<<setprecision(4);
     // xuất kết quả
  
    cout<<"You enter "<<yen<<"￥"<<endl;
    cout<<"The amount of VND in USD is:"<<usd_form_vnd<<"$"<<endl;
    cout<<"The amount of VND in Japanese yen is:"<<yen_form_vnd<<"￥"<<endl;
    cout<<"The amount of Japanese yen in USD is:"<<usd_form_yen<<"$"<<endl;
    cout<<"The total amount of USD is:"<<usd_form_vnd+usd_form_yen<<"$"<<endl;  

    return 0;

}