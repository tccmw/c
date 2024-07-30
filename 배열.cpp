#include <stdio.h>

int main()
{
	int num[10];
	for (int i = 0; i < 10; i++){
		num[i]=i+1;
		printf("%d ",num[i]);
	}

return 0;
}

//#include <stdio.h>
//
//int main(){
//	int num[100000];
//	int i = 0;
//	while(1){
//		scanf("%d",&num[i]);
//		if(num[i]==0)break;
//		i++;
//	}
//	for(int j = i -1; j >= 0; j--){
//		printf("%d ",num[j]);
//	}
//}



