//#include <stdio.h>
//
//int main(){
//	int i,j,k;
//	int n = 5;
//	
//	for(i=0; i<n; i++){
//		for(j=0;j<n-i-1;j++){
//			printf(" ");
//		}
//		for(k=0;k<i+1;k++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main(){
//	int i,j,k;
//	int n =5;
//	
//	for(i=0;i<n;i++){
//		for(j=0;j<i;j++){
//			printf(" ");
//		}
//		for(k=0;k<n-i;k++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

#include <stdio.h>

int main(){
	int i,j,k;
	int n = 5;
	
	for(i=0; i<n; i++){
		for(j=0;j<n-i-1;j++){
			printf(" ");
		}
		for(k=0;k<i*2+1;k++){
			printf("*");
		}

		printf("\n");
	}
}
