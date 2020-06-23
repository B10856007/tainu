#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z;
	do{
		printf("請輸入兩個整數：");
		scanf("%d %d",&x,&y);
		z=mod(x,y);
		printf("%d除%d的餘數是：%d\n",x,y,z);
	}
	while(y!=0);
	
	return 0;
}
int mod(int X,int Y){
	
	int F;
	F=X%Y;
	return F;
}
