#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	printf("�п�J�y�СG");
	scanf("%f %f",&x,&y);
	if(x>0){
		if(y>0){
			printf("%.1f  %.1f ���Ĥ@�H��",x,y);
		}
		else if (y<0){
			printf("%.1f  %.1f ���ĥ|�H��",x,y);
		} 
		else{
			printf("%.1f  %.1f �bX�b�W",x,y);
		} 
	}
	else if(x<0){
		if(y>0){
			printf("%.1f  %.1f ���ĤG�H��",x,y);
		}
		else if (y<0){
			printf("%.1f  %.1f ���ĤT�H��",x,y);
		} 
	}
	else if(x==0){
		if(y!=0){
			printf("%.1f  %.1f �bY�b�W",x,y);
		}
		else{
			printf("%.1f  %.1f �b���I�W",x,y);
		} 
	}
	else if(y==0){
		if(x!=0){
			printf("%.1f  %.1f �bX�b�W",x,y);
		}
		
	}
	return 0;
}
