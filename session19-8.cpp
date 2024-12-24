#include <stdio.h>
#include<string.h>

struct sinhVien {
    int id;
    char name[100];
    int age;
    char phoneNumber[100];
};
typedef struct sinhVien sinhVien;
void xoaSinhVien(sinhVien *user, int *soSinhVien){
    int idXoa;
    printf("nhap so id sinh vien can xoa: ");
    scanf("%d", &idXoa);
    if(idXoa <= 0 || idXoa > *soSinhVien){
        printf("id sinh vien xoa khong hop le");
        return;
    }
    for(int i = idXoa - 1; i < *soSinhVien - 1; i++){
        user[i] = user[i + 1];
    }
    (*soSinhVien)--;
    printf("da xoa sinh vien id %d\n", idXoa);
}
int main(){
    sinhVien user[100]={
            {1, "abc", 18, "0987654321"},
            {2, "fsg", 20, "0987654321"},
            {3, "tir", 21, "0987654321"},
            {4, "kdf", 22, "0987654321"},
            {5, "fss", 23, "0987654321"},
    };
    int soSinhVien = 5;
    xoaSinhVien(user, &soSinhVien);
    for(int i = 0; i < soSinhVien; i++){
        printf("id: %d | ten: %s | tuoi: %d| sdt: %s\n", user[i].id, user[i].name , user[i].age, user[i].phoneNumber);
    }
    return 0;
}
