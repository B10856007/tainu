#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,A[SIZE];
	srand(time(NULL));
	printf("排序前：\n");
	for(i=0;i<5;i++){
		A[i]=(rand()%1000)+1;
		printf("%d ",A[i]);
	}
	sort(A);
	printf("\n排序後：\n");
	show(A);
	return 0;
}
	int sort(int A[]){
		int i,j,temp;
		for(i=1;i<SIZE;i++){
			for(j=0;j<5-i;j++){
				if(A[j]<A[j+1]){
					temp=A[j];
					A[j]=A[j+1];
					A[j+1]=temp;
				}
			}
		}
	}
	int show(int B[]){
		int x;
		for(x=0;x<SIZE;x++){
			printf("%d ",B[x]);
		}
		printf("\n");
	}
