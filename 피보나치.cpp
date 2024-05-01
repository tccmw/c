#include <stdio.h>

int main()
{
	int num[20];
	int n,i;
	
	num[0]=1;
	num[1]=1;
	scanf("%d",&n);
	for(i=2;i<20;i++){
	num[i]=num[i-1]+num[i-2];
	}
	printf("%d",num[n]);
return 0;
}

