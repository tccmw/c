//반복제어문 3  1
//#include <stdio.h>
//
//int main()
//{
//	int n=0;
//	int i=1;
//	int sum=0;
//	scanf("%d",&n);
//	
//	while(1){
//		sum+=i;
//		i++;
//		if(sum>n) break;
//	}	 
//	printf("%d %d\n",i,sum);
//return 0;
//}

//ㅈㄱㅈㄷ 1
//#include <stdio.h>
//
//int main(){
//	int n;
//	int i=0;
//	int sum=0;
//	int a=0;
//	
//	scanf("%d",&n);
//	for(i=0;;i++){
//		if(sum>=n)break;
//		if(i%2==1){
//			sum+=i;
//			a++;
//		}
//	}
//	printf("%d %d",a,sum);
//}

//반복제어문 3 2
//#include <stdio.h>
//
//int main(){
//	int i,j;
//	
//	for(i=1;i<=3;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//ㅈㄱㅈㄷ 2
//#include <stdio.h>
//
//int main(){
//	int n;
//	int i,j;
//	
//	scanf("%d",&n);
//	
//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//} 

//반복제어문 3 3
//#include <stdio.h>
//
//int main(){
//	int i,j;
//	
//	for(i=1;i<=3;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(i=3;i>=1;i--){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//ㅈㄱㅈㄷ3
//#include <stdio.h>
//
//int main(){
//	int i,j;
//	for(i=3;i>=1;i--){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(i=1;i<=3;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//반복제어문 3 4
//#include <stdio.h>
//
//int main(){
//	int i,j;
//	int n;
//	
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n-i;j++){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//ㅈㄱㅈㄷ4
//#include <stdio.h>
//
//int main(){
//	int i,j,n;
//	
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		for(j=0;j<=i-2;j++){
//			printf(" ");
//		}
//		for(j=3;j>=i;j--){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//반복제어문 3 5
//#include <stdio.h>
//
//int main(){
//	int i,j;
//	
//	for(i=1;i<=5;i++){
//		for(j=4;j>=i;j--){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		for(j=2;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//} 

//ㅈㄱㅈㄷ 5
//#include <stdio.h>
//
//int main(){
//	int i,j;
//	int n;
//	
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for(j=0;j<=i-2;j++){
//			printf(" ");
//		}
//		for(j=n;j>=i;j--){
//			printf("*");
//		}
//		for(j=2;j>=i;j--){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//반복제어문 3 6
//#include <stdio.h>
//
//int main(){
//	int i,j;
//	int n,num=0;
//	
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++){
//			num++;
//			printf("%d ",num);
//		}
//		printf("\n");
//	}
//}

//ㅈㄱㅈㄷ6
//#include <stdio.h>
//
//int main(){
//	int i,j,n;
//	char num='A';
//	
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for(j=3;j>=i;j--){
//			printf("%c",num);
//			num++;
//		}
//		printf("\n");
//	}
//} 

//반복제어문 3 7
//#include <stdio.h>
//
//int main(){
//	int i,j;
//	int num=0;
//	char sum='A';
//	
//	for(i=1;i<=4;i++){
//		for(j=1;j<=i;j++){
//			printf("%c " ,sum);
//			sum++;
//		}
//		for(j=3;j>=i-1;j--){
//			num++;
//			printf("%d ",num);
//		}
//		printf("\n");
//	}
//}

//ㅈㄱㅈㄷ7
//#include <stdio.h>
//
//int main(){
//	int i,j,n;
//	int num=0;
//	char sum='A';
//	
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		for(j=3;j>=i;j--){
//			num++;
//			printf("%d ",num);
//		}
//		for(j=1;j<=i;j++){
//			printf("%c ",sum);
//			sum++;
//		}
//		printf("\n");
//	}
//}

//ㅎㅅㅍㄱ 1
//#include <stdio.h>
//
//int main(){
//	int n,i,a=0;
//	int sum=0;
//	int avg=0;
//	
//	for(i=0;i<=20;i++){
//		scanf("%d",&n);
//		if(n==0)break;
//		sum+=n;
//		a++;	
//	}
//	avg=(int)sum/a;
//	printf("%d %d",sum,avg);
//}

//ㅎㅅㅍㄱ2
//#include <stdio.h>
//
//int main(){
//	int n,a;
//	
//	scanf("%d",&n);
//	for(int i=1;i<=100;i++){
//		a=n*i;
//		printf("%d\n",a);
//		if(a%10==0)break;
//	}
//}

//ㅎㅅㅍㄱ3
//#include <stdio.h>
//
//int main(){
//	int n,i,j;
//	
//	scanf("%d",&n);
//	
//	for(i=1;i<=3;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(i=1;i<=3;i++){
//		for(j=2;j>=i;j--){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//ㅎㅅㅍㄱ4
//#include <stdio.h>
//
//int main(){
//	int i,j,n;
//	
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		for(j=3;j<=i+1;j++){
//			printf(" ");
//		}
//		for(j=3;j>=i;j--){
//			printf("*");
//		}
//		for(j=2;j>=i;j--){
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(i=1;i<=n;i++){
//		for(j=2;j>=i;j--){
//			printf(" ");
//		}
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		for(j=2;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//ㅎㅅㅍㄱ5
//#include <stdio.h>
//int main(){
//	int i,j,n;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for(j=5;j>=i*2;j--){
//			printf(" ");
//		}
//		for(j=1;j<=(i*2-1);j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//} 

//ㅎㅅㅍㄱ 6
//#include <stdio.h>
//
//int main(){
//	int n,i,j;
//	
//	scanf("%d",&n);
//	
//	for(i=3;i>=1;i--){
//		for(j=1;j<=i-1;j++){
//			printf(" ");
//		}
//		for(j=1;j<=n-i+1;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}	
//}

//ㅎㅅㅍㄱ 7 
//#include <stdio.h>
//
//int main(){
//	char a = 'A';
//	int i,j;
//	int n,k;
//	
//	scanf("%d",&n);
//	
//	for(i=3;i>=n-2;i--){
//		for(j=1;j<=i;j++){
//			printf("%c",a++);
//		}
//		for(j=0;j<=n-i-1;j++){
//			printf("%d",k++);
//		}
//		printf("\n");
//	}
//}

//ㅎㅅㅍㄱ 8
//#include <stdio.h>
//
//int main(){
//	int i,j,n;
//	int a=1;
//	
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		for(j=0;j<=i-2;j++){
//			printf(" ");
//		}
//		for(j=3;j>=i;j--){
//			printf("%d",a);
//			a++;
//		}
//		printf("\n");
//	}
//} 

//ㅎㅅㅍㄱ 9
//#include <stdio.h>
//
//int main(){
//	int n,i,j;
//	
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++){
//			printf("#");
//		}
//		for(j=3;j>=i;j--){
//			printf(" ");
//		}
//		printf("\n");
//	}
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++){
//			printf(" ");
//		}
//		for(j=2;j>=i;j--){
//			printf("#");
//		}
//		printf("\n");
//	}
//}

//ㅎㅅㅍㄱ10
//#include <stdio.h>
//
//int main(){
//	int n,i,j;
//	int num =1;
//	
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//		printf("%d",num);
//		num+=2;
//		if(num > 10 )num -= 10;
//	
//		}
//	printf("\n");
//	}
//} 


