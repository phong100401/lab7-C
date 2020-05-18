#include<stdio.h>
	int menu,tong;
	char y,ans;
void main(){
	do{
		printf("Nhap so theo menu de order do uong \n");
		printf("Bac xiu 1 gia 100k \nNuoc cam 2 gia 200k \n");
		scanf("%d",&menu);
		ans='y';
		switch(menu){
			case 1:
				printf("Ban da order thanh cong bac xiu \n");
				tong+=100000;
				break;
			case 2:
				printf("ban da order thanh cong nuoc cam \n");
				tong+=200000;
				break;
		}
		printf("\nBan co muon order tiep khong(Y/N): \n");
		ans=getch();
	}while(ans =='Y'|| ans == 'y');
	printf("so tien can thanh toan :%d VND \n",tong);
	printf("Good Bye.See you again! \n");
}
