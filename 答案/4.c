#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct data{
	int number;
	int en;
	int cn;
	float r;
}st[150],x;
int main(int argc, char *argv[]) {
	int i,search;
	srand(time(NULL));
	for(i=0;i<150;i++){
		st[i].number=i+1;
		st[i].cn=(rand()%11)+90;
		st[i].en=(rand()%11)+90;
		st[i].r=(float)(st[i].cn+st[i].en)/2;
		printf("�Ǹ��G%d\n�^�妨�Z�G%d\n��妨�Z�G%d\n�������Z�G%.1f\n\n",st[i].number,st[i].en,st[i].cn,st[i].r);
	}
	chipao(st);
	
	do{
		printf("�п�J���d�ߪ��������ơG");
		scanf("%d",&search);
		for(i=0;i<150;i++){
			if(st[i].r>search){
				printf("\n�Ǹ��G%d\n�^�妨�Z�G%d\n��妨�Z�G%d\n�������Z�G%.1f\n\n",st[i].number,st[i].en,st[i].cn,st[i].r);
			}
		}
	}while(search!=0);
	
	return 0;
}
int chipao(struct data st[]){
	int i,j,k;
	for(i=1;i<=150;i++){
		for(j=0;j<150;j++){
			if(st[j].r<st[j+1].r){
				x=st[j];
				st[j]=st[j+1];
				st[j+1]=x;
			}
			else if (st[j].r==st[j+1].r){
				if(st[j].cn<st[j+1].cn){
					x=st[j];
					st[j]=st[j+1];
					st[j+1]=x;
				}
			}
			}
		}
	
	printf("=====================\n �ƦW\n=====================\n\n");
	for(i=0;i<150;i++){
		printf("�Ǹ��G%d\n�^�妨�Z�G%d\n��妨�Z�G%d\n�������Z�G%.1f\n\n",st[i].number,st[i].en,st[i].cn,st[i].r);
	}
}
