//   *
//  * *
// *   *
//*     *

#include<stdio.h>

int main(){
	
	int i,j,k=4,l=4;
	
	for(i=1;i<=4;i++){
		
		for(j=1; j<=7; j++){
		
			if(j==k || j==l){
		
				printf("*");
			}
			else{
		
				printf(" ");
			}
		}
		
		k--;
		l++;
		printf("\n");
	}
	return 0;
}
