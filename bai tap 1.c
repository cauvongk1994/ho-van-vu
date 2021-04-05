#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num = 0;
		 
	 printf("nhap mot so: \n");
	
	 scanf("%d", &num);
	 	if (num > 0)
	 	printf ("%d la so duong \n", num);
	 	else if (num < 0)
	 	printf("%d la so am \n", num);
	 	else
	 	printf("0 la so ko am va ko duong");
	return 0;
}
