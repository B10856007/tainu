#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B,C,D,E,array[5],i,j,k,temp;
	printf("�п�J5�Ӿ�ơG");
	scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);
	array[0]=A;
	array[1]=B;
	array[2]=C;
	array[3]=D;
	array[4]=E;
	for(i=1;i<=5;i++){
		for(j=0;j<(5-i);j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("�Ƨǫ�G"); 
	for(i=0;i<5;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
