#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int kg,x,y,a,b;
	printf("�п�J���q�G");
	scanf("%d",&kg);
	if(kg<5){
		printf("%d��",(kg*50)+199);
	}
	else {
		x=kg-5;
		printf("%d��",250+199+(x*30));
	}
	return 0;
}
