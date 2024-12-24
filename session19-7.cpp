#include <stdio.h>
#include <string.h>

// Khai bao kieu du lieu cau truc Student gom id, fullName,age, phone
	typedef struct  {
		int id;
		char fullName[100];
		int age;
		char phone[25];
	} Student;
// Khai bao nguyen mau ham 
void printStudent(Student students[]);
void sortStudentByName(Student students[]);
int main(){
	// Khai bao mang cau truc gom 5 phan tu va co gia tri
	Student students[5]={
		{1,"Do Thao Minh", 18, "024012006"},
		{2,"Dao Quang Huy", 18, "0902673829"},
		{3,"Do Gia Hung", 81, "06052006"},
		{4,"Ngo Quang Anh", 70, "8873828201"},
		{5,"Nguyen Xuan Bach", 100, "0904662012"},
	};
	// Ham de in danh sinh vien
	printf("In sinh vien truoc khi sap xep:\n");
	printStudent(students);
	// Ham de sap xep sinh vien theo ten cua sinh vien 
	sortStudentByName(students);
	printf("In sinh vien sau khi sap xep:\n");
	printStudent(students);
	return 0;
}

// Khai bao logic ham 
void printStudent(Student students[]){
	for(int i=0;i<5;i++){
		printf("Id :%d\n", students[i].id);
		printf("Ho va ten :%s\n", students[i].fullName);
		printf("Tuoi :%d\n",students[i].age);
		printf("So dien thoai :%s\n", students[i].phone);
	}
}

void sortStudentByName(Student students[]){
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			//strcmp(str1,str2)	
			if(strcmp(students[i].fullName,students[j].fullName)>0){
				Student temp = students[i];
				students[i] =students[j];
				students[j]=temp;
			}
		}
	}
}
