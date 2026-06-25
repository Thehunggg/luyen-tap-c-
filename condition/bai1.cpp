#include <iostream>
// Thư viện hỗ trợ nhập và xuất dữ liệu cơ bản (như std::cout và std::cin)

int main() {
// Hàm chính, là nơi bắt đầu chạy của toàn bộ chương trình

  // Magic starts here
  // Dòng chú thích: Phép thuật bắt đầu từ đây

  int gryffindor = 0; 
  // Khai báo biến lưu điểm của nhà Gryffindor và đặt bằng 0
  int hufflepuff = 0; 
  // Khai báo biến lưu điểm của nhà Hufflepuff và đặt bằng 0
  int ravenclaw = 0; 
  // Khai báo biến lưu điểm của nhà Ravenclaw và đặt bằng 0
  int slytherin = 0;
  // Khai báo biến lưu điểm của nhà Slytherin và đặt bằng 0

  int answer1;
  // SỬA: Đổi tên biến chứa câu trả lời câu 1 thành tiếng Anh
  int answer2;
  // SỬA: Đổi tên biến chứa câu trả lời câu 2 thành tiếng Anh
  int answer3;
  // SỬA: Đổi tên biến chứa câu trả lời câu 3 thành tiếng Anh
  int answer4;
  // SỬA: Đổi tên biến chứa câu trả lời câu 4 thành tiếng Anh
  
  std::cout << "The Sorting Hat Quiz!\n";
  // In ra tiêu đề: "Bài trắc nghiệm Chiếc mũ phân loại!"
  
  std::cout << "Q1) When I die, I want people to remember me as:\n";
  // In ra câu hỏi 1: "Khi tôi chết, tôi muốn mọi người nhớ đến tôi là:"

  std::cout << "1) The Good\n";
  // In lựa chọn 1: "Người tốt bụng"
  std::cout << "2) The Great\n";
  // In lựa chọn 2: "Người vĩ đại"
  std::cout << "3) The Wise\n";
  // In lựa chọn 3: "Người sáng suốt"
  std::cout << "4) The Bold\n";
  // In lựa chọn 4: "Người dũng cảm"
  std::cin >> answer1;
  // Chờ người dùng nhập câu trả lời (1-4) rồi lưu vào biến answer1
  
  if (answer1 == 1) {
    hufflepuff++;
    // Nếu chọn 1, tăng 1 điểm cho nhà Hufflepuff
  } else if (answer1 == 2){
    slytherin++;
    // Nếu chọn 2, tăng 1 điểm cho nhà Slytherin
  } else if (answer1 == 3){
    ravenclaw++;
    // Nếu chọn 3, tăng 1 điểm cho nhà Ravenclaw
  } else if (answer1 == 4){
    gryffindor++;
    // Nếu chọn 4, tăng 1 điểm cho nhà Gryffindor
  } else {
    std::cout << "Invalid answer\n";
    // Nếu nhập số khác, in thông báo: "Câu trả lời không hợp lệ"
  }
 
  std::cout << "Q2) Dawn or Dusk?\n";
  // In ra câu hỏi 2: "Bình minh hay Hoàng hôn?"

  std::cout << "1) Dawn\n";
  // In lựa chọn 1: "Bình minh"
  std::cout << "2) Dusk\n";
  // In lựa chọn 2: "Hoàng hôn"
  std::cin >> answer2;
  // Chờ người dùng nhập câu trả lời rồi lưu vào biến answer2
 
  if (answer2 == 1) {
     gryffindor++;
     ravenclaw++;
     // Nếu chọn 1, tăng 1 điểm cho cả Gryffindor và Ravenclaw
  } else if (answer2 == 2){
     slytherin++;
     hufflepuff++;
     // Nếu chọn 2, tăng 1 điểm cho cả Slytherin và Hufflepuff
  } else {
    std::cout << "Invalid answer\n";
    // Nếu nhập số khác, in thông báo: "Câu trả lời không hợp lệ"
  }
  
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
  // In ra câu hỏi 3: "Loại nhạc cụ nào làm tai bạn hài lòng nhất?"

  std::cout << "1) The violin\n";
  // In lựa chọn 1: "Đàn vĩ cầm"
  std::cout << "2) The trumpet\n";
  // In lựa chọn 2: "Kèn trumpet"
  std::cout << "3) The piano\n";
  // In lựa chọn 3: "Đàn piano"
  std::cout << "4) The drum\n";
  // In lựa chọn 4: "Trống"
  std::cin >> answer3;
  // Chờ người dùng nhập câu trả lời rồi lưu vào biến answer3
  
  if (answer3 == 1) {
    slytherin++;
    // Nếu chọn 1, tăng 1 điểm cho nhà Slytherin
  } else if (answer3 == 2){
    hufflepuff++; 
    // Nếu chọn 2, tăng 1 điểm cho nhà Hufflepuff
  } else if (answer3 == 3){
    ravenclaw++;
    // Nếu chọn 3, tăng 1 điểm cho nhà Ravenclaw
  } else if (answer3 == 4){
    gryffindor++;
    // Nếu chọn 4, tăng 1 điểm cho nhà Gryffindor
  } else {
    std::cout << "Invalid answer\n";
    // Nếu nhập số khác, in thông báo: "Câu trả lời không hợp lệ"
  }
 
  std::cout << "Q4) Which road tempts you most?\n";
  // In ra câu hỏi 4: "Con đường nào cám dỗ bạn nhất?"

  std::cout << "1) The wide, sunny, grassy lane\n";
  // In lựa chọn 1: "Con đường mòn đầy cỏ rộng rãi và ngập tràn ánh nắng"
  std::cout << "2) The narrow, dark, lantern-lit alley\n";
  // In lựa chọn 2: "Con hẻm nhỏ hẹp, tăm tối và được thắp sáng bằng đèn lồng"
  std::cout << "3) The twisting, leaf-strewn path through woods\n";
  // In lựa chọn 3: "Con đường rừng quanh co, đầy lá rụng"
  std::cout << "4) The cobbled street (ancient buildings)\n";
  // In lựa chọn 4: "Con đường lát đá cuội quanh các tòa nhà cổ kính"
  std::cin >> answer4;
  // Chờ người dùng nhập câu trả lời rồi lưu vào biến answer4
  
  if (answer4 == 1) {
    hufflepuff++; 
    // Nếu chọn 1, tăng 1 điểm cho nhà Hufflepuff
  } else if (answer4 == 2){
    slytherin++;
    // Nếu chọn 2, tăng 1 điểm cho nhà Slytherin
  } else if (answer4 == 3){
    gryffindor++;
    // Nếu chọn 3, tăng 1 điểm cho nhà Gryffindor
  } else if (answer4 == 4){
    ravenclaw++;
    // Nếu chọn 4, tăng 1 điểm cho nhà Ravenclaw
  } else {
    std::cout << "Invalid answer\n";
    // Nếu nhập số khác, in thông báo: "Câu trả lời không hợp lệ"
  }

  std::cout << "\nCongratulations on being sorted into... ";
  // In dòng chữ: "Chúc mừng bạn đã được phân loại vào nhà..."

  int max = 0;
  // Tạo một biến đặt tên là max bằng 0 để làm mốc tìm điểm số lớn nhất
  std::string house;
  // Tạo một biến chuỗi ký tự tên là house để lưu tên nhà chiến thắng

  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
    // Nếu điểm Gryffindor lớn hơn max, cập nhật mốc max mới và lưu tên nhà là Gryffindor
  }

  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
    // Nếu điểm Hufflepuff lớn hơn max, cập nhật mốc max mới và lưu tên nhà là Hufflepuff
  }

  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
    // Nếu điểm Ravenclaw lớn hơn max, cập nhật mốc max mới và lưu tên nhà là Ravenclaw
  }

  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
    // Nếu điểm Slytherin lớn hơn max, cập nhật mốc max mới và lưu tên nhà là Slytherin
  }

  std::cout << house << "!\n";
  // In tên ngôi nhà đạt điểm cao nhất kèm dấu chấm than ra màn hình

  return 0;
  // Trả về giá trị thành công 0 cho hệ điều hành và kết thúc chương trình
}