#include <iostream>
using namespace std;
int main() {

    // hàm main là điểm bắt đầu của chương trình, nơi mà chương trình sẽ bắt đầu thực thi
    // 1. output
    cout << "Name: Do The Hung " << endl;
    // sử dụng đối tượng cout   để in ra màn hình chuỗi "Name: Do The Hung " và endl để kết thúc dòng và chuyển sang dòng mới
    cout << "Birthday: 2000-08-27" << endl;
    // sử dụng đối tượng cout để in
    cout << "Sex: Male" << endl;
    cout << "Age:26" << endl;
    double Math, Literature, Average;
    cout << "Enter Math score: ";
    cin >> Math;    
    cout << "Enter Literature socre:"; 
    cin>> Literature;
    Average = (Math+ Literature) / 2;
    cout << "Average score: " << Average << endl;

    return 0;   
}