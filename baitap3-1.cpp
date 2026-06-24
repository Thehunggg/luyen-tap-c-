// dog years
#include <iostream> // Thư viện để nhập/xuất dữ liệu (dùng cho lệnh cout)
using namespace std; // Sử dụng không gian tên std để viết ngắn gọn cout, endl

int main() { // Hàm chính của chương trình, nơi mọi thứ bắt đầu chạy
    int Dogage = 4; // Khai báo tuổi của chó là một số nguyên và gán bằng 4
    
    int early_years, later_years, human_years; // Khai báo 3 biến số nguyên để tính toán
    
    early_years = 2 * 10.5; // 2 năm đầu đời của chó, mỗi năm bằng 10.5 tuổi người (bằng 21)
    later_years = (Dogage - 2) * 4; // Các năm về sau (lấy tổng tuổi trừ 2), mỗi năm bằng 4 tuổi người
    human_years = early_years + later_years; // Cộng hai giai đoạn lại để ra tổng số tuổi người
    
    // In kết quả cuối cùng ra màn hình và xuống dòng (endl)
    cout << "Your dog is " << human_years << " years old in human years." << endl; 
    
    return 0; // Trả về 0 để báo hiệu chương trình chạy thành công, không có lỗi
} // Kết thúc hàm main và dừng chương trình