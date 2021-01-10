#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 
int main() {
	
    char harf[100];
    int i = 0;
    
    printf("enter the word or sentence: ");
    gets(harf);
    
    int fark = 'a' - 'A';
    
      while (harf[i] != '\0') 
    {
        if (harf[i] >= 'A' && harf[i] <= 'Z') 
              {
                 harf[i] += fark;
              } 
		  
		       else if (harf[i] >= 'a' && harf[i] <= 'z') 
          
                {
                  harf[i] -= fark;
                }
           
           
                     printf("%c", harf[i]);
                     i++;
    }
       getch();
    return 0;
}

