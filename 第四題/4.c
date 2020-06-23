#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct data{
	int number;
	int en;
	int cn;
	float r;
}st[50],x;
int main(int argc, char *argv[]) {
	int i;
	srand(time(NULL));
	for(i=0;i<50;i++){
		st[i].number=i+1;
		st[i].cn=(rand()%100)+1;
		st[i].en=(rand()%100)+1;
		st[i].r=(st[i].cn+st[i].en)/2;
		printf("學號：%d\n英文成績：%d\n國文成績：%d\n平均成績：%.1f\n\n",st[i].number,st[i].en,st[i].cn,st[i].r);
	}
	chipao(st);
	system("pause");
	return 0;
}
int chipao(struct data st[]){
	int i,j,k;
	for(i=1;i<=50;i++){
		for(j=0;j<50;j++){
			if(st[j].r<st[j+1].r){
				x=st[j];
				st[j]=st[j+1];
				st[j+1]=x;
			}
		}
	}
	printf("=====================\n 前十名\n=====================\n\n");
	for(i=0;i<10;i++){
		printf("學號：%d\n英文成績：%d\n國文成績：%d\n平均成績：%.1f\n\n",st[i].number,st[i].en,st[i].cn,st[i].r);
	}
}
