#include <stdio.h>

int main() {
    char mssv[30];
    char hoten[100];
    int namsinh;
    float diemTB;

    // Nhập dữ liệu
    printf("Nhap ma so sinh vien: ");
    scanf("%s", mssv);

    printf("Nhap ho va ten: ");
    getchar(); // Xóa ký tự Enter còn lại trong bộ đệm
    fgets(hoten, sizeof(hoten), stdin);

    printf("Nhap nam sinh: ");
    scanf("%d", &namsinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTB);

    // Xuất dữ liệu
    printf("\nMa so sinh vien: %s", mssv);
    printf("\nHo Va Ten: %s", hoten);
    printf("Nam sinh: %d", namsinh);
    printf("\nTuoi: %d", 2026 - namsinh);
    printf("\nDiem Trung Binh: %.2f\n", diemTB);

    return 0;
}