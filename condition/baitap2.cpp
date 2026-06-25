#include<iostream>
using namespace std;

int main() {
    // Khai báo biến lưu điểm của 3 nhà bằng 0 (Đã sửa lại tên tiếng Anh chuẩn)
    int warrior = 0;
    int mage = 0;
    int assassin = 0;

    int answer;

    cout << "Enter your answers for these questions!!!!\n";
    
    // Nhập câu hỏi và 3 câu tra lời
    cout << "Q: Weapon of your choice:\n";
    cout << "1: Sword\n";
    cout << "2: Staff\n";
    cout << "3: Dagger\n";
    
    // Lưu câu trả lời của người dùng
    cin >> answer;
     
    // Kiểm tra câu trả lời để cộng điểm (SỬA: Dùng else if cho lựa chọn 3)
    if (answer == 1) {
        warrior++;
    } else if (answer == 2) {
        mage++;
    } else if (answer == 3) {
        assassin++;
    } else {
        cout << "Invalid answer\n";
    }

    // --- PHẦN MỚI: TÌM VÀ XUẤT HỆ PHÁI CHIẾN THẮNG ---
    int max = 0;
    string playerClass = "None"; // Biến lưu tên hệ phái

    if (warrior > max) {
        max = warrior;
        playerClass = "Warrior";
    }
    if (mage > max) {
        max = mage;
        playerClass = "Mage";
    }
    if (assassin > max) {
        max = assassin;
        playerClass = "Assassin";
    }

    // In kết quả chung cuộc ra màn hình
    cout << "Your class is: " << playerClass << "!\n";

    return 0;
}