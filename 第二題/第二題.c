#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B,a,b;
	printf("叫块ㄢ计");
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
		printf("程そ计(gcd)%d",b);
		printf("\n程そ计(lcd)%d",(A*B/b));
	}
	else{
	printf("程そ计(gcd)%d",a);
		printf("\n程そ计(lcd)%d",(A*B/a));
	}
	return 0;
}
