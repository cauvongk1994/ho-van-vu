#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float toan;
	float ly;
	float hoa;
	float tongbamon;
	float diemTB;
		printf("\nnhap diem ly");
			scanf("%f", &ly);
		printf("\nnhap diem hoa");
			scanf("%f", &hoa);
		printf("\nnhap diem toan");
			scanf("%f", &toan);
			
		tongbamon=toan+ly+hoa;
		
		diemTB=toan+ly+hoa/3;
		
		printf( "diemTB %.1f\n", diemTB);
			
			return 0;
}
