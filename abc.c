#include<stdio.h>
void main(){
	int a,b,c;
	printf("nhap diem a= ");
	scanf("%d",&a);
	printf("nhap diem b= ");
	scanf("%d",&b);
	printf("nhap diem c= ");
	scanf("%d",&c);
	if(a>=0 && a<=10){
		if(a>4)
		 printf("Diem ly thuyet dat \n");
		else 
		 printf("Diem ly thuyet truot \n");
	}
	if(b>=0 && b<=100){
		if(b>40)
		 printf("diem thuc hanh dat \n");
		else 
		 printf("diem thuc hanh truot \n");
	}
	if(c>=0 && c<=15){
		if(c>6)
		 printf("Diem bai tap do \n");
		else
		 printf("Diem bai tap truot \n");
	}
}

