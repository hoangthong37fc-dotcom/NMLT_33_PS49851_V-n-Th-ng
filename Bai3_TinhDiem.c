#include <stdio.h>

int main() {
    char mssv[30];
    char hoten[100];
    float toan, ly, hoa, diemTB;

    // Nhập dữ liệu
    printf("Nhap ma so sinh vien: ");
    scanf("%s", mssv);

    printf("Nhap ho va ten: ");
    getchar(); // Xóa ký tự Enter còn lại
    fgets(hoten, sizeof(hoten), stdin);

    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Ly: ");
    scanf("%f", &ly);

    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);

    // Tính điểm trung bình
    diemTB = (toan * 2 + ly + hoa) / 4;

    // Xuất kết quả
    printf("\nMa so sinh vien: %s", mssv);
    printf("\nHo Va Ten: %s", hoten);
    printf("Diem Trung Binh: %.2f\n", diemTB);

    return 0;
}