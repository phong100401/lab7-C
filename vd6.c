#include<stdio.h>
void main(){
	int cardnumber,passcard;
	int sodu = 5000000;
	char y,ans;
	int luachon;
	int ruttien;
	printf("Vui long nhap so the: \n");
	scanf("%d",&cardnumber);
	printf("Vui long nhap ma the: \n");
	scanf("%d",&passcard);
	if(cardnumber==6 && passcard == 1){
		printf("Dang nhap thanh cong!\n");
	do{
		ans='y';
		printf("Nhap so de lua chon \n");
		printf("1.Rut tien \n 2.Kiem tra so du \n");
		scanf("%d",&luachon);
		switch(luachon){
			case 1:
				printf("Nhap so tien muon rut ra: \n");
				scanf("%d",&ruttien);
				if(sodu >= ruttien){
					sodu -= ruttien;
					printf("Ban rut thanh cong so tien %d \nSo du con lai la: %d\n	",ruttien,sodu);
				}else printf("Tai khoan cua ban k du de rut \n");
				break;
			case 2:
				printf("So du cua ban la : %d",sodu);
				break;
		}
		printf("ban co muon tiep tuc khong(Y/N): \n");
		ans=getch();
	}while(ans=='Y' || ans == 'y');
	printf("Bye");
	}else printf("khong hop le \n");
}
