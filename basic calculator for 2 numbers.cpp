#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int sayi1,sayi2;
	printf("enter the number 1:");
	scanf("%d",&sayi1);
	printf("enter the number 2 :");
	scanf("%d",&sayi2);
	
	if(sayi2!=0){
	printf("%d+%d=%d \n",sayi1,sayi2,sayi1+sayi2);
	printf("%d-%d=%d \n" ,sayi1,sayi2,sayi1-sayi2);
	printf("%d*%d=%d \n" ,sayi1,sayi2,sayi1*sayi2);
	printf("%d/%d=%f" ,sayi1,sayi2,sayi1/(float)sayi2);
}
else{
	printf("%d+%d=%d \n",sayi1,sayi2,sayi1+sayi2);
	printf("%d-%d=%d \n" ,sayi1,sayi2,sayi1-sayi2);
	printf("%d*%d=%d \n" ,sayi1,sayi2,sayi1*sayi2);
	printf("error try the number 2 again");
	
}	
	
	getch();
	return 0;
}
	
