#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B,a,b;
	printf("�п�J��ӼơG");
	scanf("%d %d",&A,&B);
	a=A;
	b=B;
	while(a!=0&&b!=0){
		if(a>b){
			a=a%b;
		}
		else{
			b=b%a;
		}
	} 
	if(a==0){
		printf("�̤j���]��(gcd)���G%d",b);
		printf("\n�̤p������(lcd)���G%d",(A*B/b));
	}
	else{
	printf("�̤j���]��(gcd)���G%d",a);
		printf("\n�̤p������(lcd)���G%d",(A*B/a));
	}
	return 0;
}
