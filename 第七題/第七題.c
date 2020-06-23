#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int kg,x,y,a,b;
	printf("請輸入重量：");
	scanf("%d",&kg);
	if(kg<5){
		printf("%d元",(kg*50)+199);
	}
	else {
		x=kg-5;
		printf("%d元",250+199+(x*30));
	}
	return 0;
}
