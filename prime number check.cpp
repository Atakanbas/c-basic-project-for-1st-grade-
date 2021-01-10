#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int asal(int sayi) 
{
	int i, ctrl=0;
	
	  for(int i=2;i<sayi;i++) 
	 {
		   if(sayi%i==0) {
		   
		   ctrl=1;
	    	break;
	    }
	 }
	 if(ctrl==0)
	  printf("prime number");
     else 
     printf("not prime number");
}

int main()
{
	
int a, ctrl=0;

printf("enter the number you wanna check => ");
scanf("%d", &a);

printf("\n",asal(a));
return 0;

}
