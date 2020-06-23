#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	printf("請輸入座標：");
	scanf("%f %f",&x,&y);
	if(x>0){
		if(y>0){
			printf("%.1f  %.1f 為第一象限",x,y);
		}
		else if (y<0){
			printf("%.1f  %.1f 為第四象限",x,y);
		} 
		else{
			printf("%.1f  %.1f 在X軸上",x,y);
		} 
	}
	else if(x<0){
		if(y>0){
			printf("%.1f  %.1f 為第二象限",x,y);
		}
		else if (y<0){
			printf("%.1f  %.1f 為第三象限",x,y);
		} 
	}
	else if(x==0){
		if(y!=0){
			printf("%.1f  %.1f 在Y軸上",x,y);
		}
		else{
			printf("%.1f  %.1f 在原點上",x,y);
		} 
	}
	else if(y==0){
		if(x!=0){
			printf("%.1f  %.1f 在X軸上",x,y);
		}
		
	}
	return 0;
}
