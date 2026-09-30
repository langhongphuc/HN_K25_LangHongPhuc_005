#include <stdio.h>
#define MAX_SIZE 50

int main() {
	int tickets[MAX_SIZE] = {85, 120, 60, 150, 95};
	int n = 5;
	int i;
	int choice;
	int pos;
	int value;
	int newValue;
	int target;
	int count;
	
	while(1) {
		printf("=============================================================\n");
		printf("         CHUONG TRINH QUAN LY VE BAN RA  STARCINEMA          \n");
		printf("=============================================================\n");
		printf("1. Them so ve ban ra\n");
		printf("2. Sua so ve ban ra\n");
		printf("3. Xoa so ve ban ra\n");
		printf("4. Tim kiem so ve ban ra\n");
		printf("0. Thoat chuong trinh\n");
		printf("=============================================================\n");
		printf("Vui long nhap lua chon cua ban (0-4): ");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1:
				if (n == MAX_SIZE) {
					printf("Mang da day, khong the them!\n");
					break;
				}
				
				printf("Nhap gia tri muon them: ");
				scanf("%d", &value);
				
				if (value < 0) {
					printf("Gia tri khong hop le!\n");
					break;
				}
				
				printf("Nhap vi tri muon chen: ");
				scanf("%d", &pos);
				
				if (pos < 1 || pos > n + 1) {
					printf("Vi tri khong hop le!\n");
					break;
				}
				
				for (i = n; i >= pos; i--) {
					tickets[i] = tickets[i - 1];
				}
				
				tickets[pos - 1] = value;
				n++;
				
				printf("Them thanh cong!\n");
				printf("Mang hien tai: ");
				for (i = 0; i < n; i++) {
					printf("%d ", tickets[i]);
				}
				
				printf("\n");
				
				break;
			case 2:
				printf("Nhap vi tri can sua: ");
				scanf("%d", &pos);
				
				if (pos < 1 || pos > n) {
					printf("Vi tri khong hop le!\n");
					break;
				}
				
				printf("Nhap gia tri moi: ");
				scanf("%d", &newValue);
				
				if (newValue < 0) {
					printf("Gia tri khong hop le!\n");
					break;
				}
				
				tickets[pos - 1] = newValue;
				
				printf("Mang hien tai: ");
				for (i = 0; i < n; i++) {
					printf("%d ", tickets[i]);
				}
				
				printf("\n");
				
				break;
			case 3:
				if (n == 0) {
					printf("Mang rong, khong the xoa!\n");
					break;
				}
				
				printf("Nhap vi tri can xoa: ");
				scanf("%d", &pos);
				
				if (pos < 1 || pos > n) {
					printf("Vi tri khong hop le!\n");
					break;
				}
				
				for (i = pos - 1; i < n - 1; i++) {
					tickets[i] = tickets[i + 1];
				}
				
				n--;
				
				printf("Mang hien tai: ");
				for (i = 0; i < n; i++) {
					printf("%d ", tickets[i]);
				}
				
				printf("\n");
				
				break;
			case 4:
				printf("Nhap gia tri can tim: ");
				scanf("%d", &target);
				
				printf("Tim thay o vi tri: ");
				for (i = 0; i < n; i++) {
					if (tickets[i] == target) {
						printf("%d", i + 1);
						count++;
					}
				}
				
				if (count == 0) {
					printf("Khong tim thay gia tri trong mang!\n");
				}
				
				printf("\nTong so lan xuat hien: %d", count);
				
				printf("\n");
				
				break;
			case 0:
				printf("Thoat chuong trinh!\n");
				return 0;
			default:
				printf("Lua chon khong hop le!\n");
				break;
		}
	}
	
	return 0;
}






















