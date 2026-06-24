#include <iostream> // Thư viện để nhập/xuất dữ liệu (dùng cho lệnh cout
using namespace std;
int main() {
    string dog_name;// Khai báo biến chuỗi để lưu tên chó
    int dog_age,later_years,early_years,human_years;// Khai báo các biến số nguyên để tính tuổi chó theo tuổi người
    cout << "Enter your dog's name: "; // Yêu cầu người dùng nhập tên chó
    cin >> dog_name; // Đọc tên chó từ bàn phím và lưu vào biến dog_name
    cout<<"Enter your dog's age: "; // Yêu cầu người dùng nhập tuổi chó
    cin>>dog_age; // Đọc tuổi chó từ bàn phím và lưu vào biến dog_age
    early_years = dog_age*10.5; // Tính số tuổi người tương đương với 2 năm đầu đời của chó
    later_years =(dog_age-2)*4;
    human_years =early_years+later_years; // Tính tổng số tuổi người bằng cách cộng tuổi người của 2 năm đầu và các năm sau đó
    cout<<"Your dog name is "<< dog_name<<" and it's age is : "<<human_years<<" years old in human years."<<endl; // In ra tên chó và tuổi của nó theo tuổi người
return 0;
}