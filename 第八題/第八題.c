#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z;
	do{
		printf("�п�J��Ӿ�ơG");
		scanf("%d %d",&x,&y);
		z=mod(x,y);
		printf("%d��%d���l�ƬO�G%d\n",x,y,z);
	}
	while(y!=0);
	
	return 0;
}
int mod(int X,int Y){
	
	int F;
	F=X%Y;
	return F;
}
