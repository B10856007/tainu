#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int i,j,n[10];
	for (i=1;i<=10;i++){
		do{
			n[i-1]=(rand()%99)+1;
			for(j=1;j<i;j++){
				if(n[i-1]==n[j-1]){
					break;
				}
			}
		}while (j!=i);
		printf("%d ",n[i-1]);
	}
	printf("\n");
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	   
 
	
