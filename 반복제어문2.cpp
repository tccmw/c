//반복제어문(2) 1
//#include <stdio.h>
//
//int main()
//{
//	int n,i;
//	
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		printf("c언어 프로그래밍\n");
//	}
//return 0;
//}

//자가진단1 
//#include <stdio.h>
//
//int main(){
//	int i;
//	char n;
//	int m=20;
//	scanf("%c",&n);
//	for(i=1;i<=m;i++){
//		printf("%c",n);
//	}
//	return 0;
//}

//반복제어문(2) 2
//#include <stdio.h>
//
//int main(){
//	char i;
//	
//	for(i='A';i<='Z';i++){
//		printf("%c",i);
//	}
//	return 0;
//}

//자가진단 2
//#include <stdio.h>
//
//int main(){
//	int i;
//	
//	for(i=10;i<=20;i++){
//		printf("%d ",i);
//	}
//	return 0;
//}

//반복제어문(2) 3
//#include <stdio.h>
//
//int main(){
//	int i;
//	
//	for(i=1;i<=20;i++){
//		if(i%2==1){
//			printf("%d ",i);
//		}
//	}
//}

//#include <stdio.h>
//
//int main(){
//	int i;
//	
//	for(i=1;i<=20;i+=2){
//		printf("%d ",i);
//	}
//}

//자가진단 3
//#include <stdio.h>
//int main(){
//	int i,n;
//	
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		if(i%2==0){
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//반복제어문(2) 4
//#include <stdio.h>
//
//int main(){
//	int i;
//	int n;
//	int a=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		a += i;
//	}
//	printf("%d",a);
//	return 0;
//}

//자가진단 4
//#include <stdio.h>
//
//int main(){
//	int i,n;
//	int sum=0;
//	scanf("%d",&n);
//	
//	for(i=n;i<=100;i++){
//		sum+=i;
//	}
//	printf("%d",sum);
//} 

//반복제어문(2) 5
//#include <stdio.h>
//
//int main(){
//	int i,n;
//	int count = 0;
//	
//	for(i=1;i<=10;i++){
//		scanf("%d",&n);
//		if(n%2==0)count++;
//	}
//	printf("입력받은 짝수의 개수는 %d개입니다",count);
//} 

//자가진단 5
//#include <stdio.h>
//
//int main(){
//	int i,n;
//	int count=0;
//	int num=0;
//	for(i=1;i<=10;i++){
//		scanf("%d",&n);
//		if(n%3==0)count++;
//		if(n%5==0)num++;
//	}
//	printf("Multiples of 3 : %d\n",count);
//	printf("Multiples of 5 : %d",num);
//}

//반복제어문(2) 6
//#include <stdio.h>
//
//int main(){
//	int i,score;
//	int sum=0;
//	double avg;
//	
//	for(i=1;i<=5;i++){
//		scanf("%d",&score);
//		sum+=score;
//	}
//	avg=(double)sum/5;
//	printf("총점 : %d\n",sum);
//	printf("평균 : %.1f",avg);
//}

//자가진단 6
//#include <stdio.h>
//
//int main(){
//	int a,i,n;
//	int sum=0;
//	double avg=0;
//	
//	scanf("%d",&a);
//	
//	for(i=1;i<=a;i++){
//		scanf("%d",&n);
//		sum+=n;
//	}
//	avg=(double)sum/a;
//	printf("avg : %.1f\n",avg);
//	if(avg>=80){
//		printf("pass");
//	}
//	else{
//		printf("fall");
//	}
//}

//반복제어문(2) 7
//#include <stdio.h>
//
//int main(){
//	int i,j;
//	
//	for(i=1;i<=5;i++){
//		for(j=1;j<=5;j++){
//			printf("%d",i);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	for(i=1;i<=5;i++){
//		for(j=1;j<=5;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}

//자가진단 7
//#include <stdio.h>
//
//int main(){
//	
//	int i,j;
//	for(i=2;i<=6;i++){
//		for(j=i;j<=4+i;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//} 

//반복제어문(2) 8
//#include <stdio.h>
//
//int main(){
//	int i,j;
//	
//	for(i=2;i<=4;i++){
//		for(j=1;j<=9;j++){
//			printf("%d*%d=%d ",i , j, i*j);
//		}
//		printf("\n");
//	}
//} 
 
//자가진단 8
//#include <stdio.h>
//
//int main(){
//	int i,j;
//	
//	for(i=2;i<=4;i++){
//		for(j=1;j<=5;j++){
//			printf("%2d*%1d=%3d",i,j,i*j);
//		}
//		printf("\n");
//	}
//} 

//ㅎㅅㅍㄱ 1
//#include <stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
// 	for(int i=1;n>=i;i++){
// 		printf("JUNGOL\n");
//	 }	
//}

//ㅎㅅㅍㄱ2
//#include <stdio.h>
//
//int main(){
//	int num,n,m;
//	scanf("%d %d",&num,&n);
//	if(num>n){
//		m=num;
//		num=n;
//		n=m;
//	}
//	for(num;num<=n;num++){
//		printf("%d ",num);
//	}
//} 

//ㅎㅅㅍㄱ3
//#include <stdio.h>
//
//int main(){
//	int num,n;
//	int a=0;
//	scanf("%d",&n);
//	for(num=1;num<=n;num++){
//		if(num%5==0){
//		 a+=num;
//		}
//	}
//	printf("%d",a);
//} 

//ㅎㅅㅍㄱ4
//#include <stdio.h>
//
//int main(){
//	int n=0;
//	int i=0,a=0,sum=0,m=0;
//	double avg=0;
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%d",&a);
//		m++;
//		sum+=a;
//	}
//	avg=(double)sum/m;
//	printf("%.2f",avg);
//}

//ㅎㅅㅍㄱ5
//#include <stdio.h>
//
//int main(){
//	int num=0;
//	int i=0;
//	int even=0;
//	int odd=0;
//	for(i=1;i<=10;i++){
//		scanf("%d",&num);
//		if(num%2==0){
//			even++;
//		}
//		else{
//			odd++;
//		}
//	}
//	printf("%d :\n",even);
//	printf("%d :\n",odd);
//} 

//ㅎㅅㅍㄱ6
//#include <stdio.h>
//
//int main(){
//	int num,n;
//	int a=0,i=0,m=0;
//	int sum=0;
//	double avg=0;
//	scanf("%d %d",&num,&n);
//	
//	for(num;num<=n;num++){
//		if(num%3==0){
//			sum+=num;
//			a++;
//		}
//		else if(num%5==0){
//			sum+=num;
//			i++;
//		}
//	}
//	m=i+a;
//	avg=(double)sum/m;
//	printf("%d\n",sum);
//	printf("%.1f",avg);
//}

//ㅎㅅㅍㄱ7
//#include <stdio.h>
//
//int main(){
//	int num;
//	int sum=0;
//	scanf("%d",&num);
//	
//	for(int n=1;n<=10;n++){
//		sum=num*n;
//		printf("%d\n",sum);
//	}
//}

//ㅎㅅㅍㄱ8
//#include <stdio.h>
//
//int main(){
//	int i,j,n,m;
//	
//	scanf("%d %d",&n,&m);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=m;j++){
//			printf("%d ",i*j);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//int main(){
//	
//	int i,j;
//	for(i=2;i<=6;i++){
//		for(j=i;j<=4+i;j++){
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//} 

//ㅎㅅㅍㄱ9
//#include <stdio.h>
//
//int main(){
//	int a,i,j;
//	scanf("%d",&a);
//	for(i=0;i<=a;i++){
//		for(j=0;j<=a;j++){
//			printf("(%d, %d)",i, j);
//		}
//		printf("\n");
//	}
//} 

//ㅎㅅㅍㄱ10
//#include <stdio.h>
//
//int main(){
//	int a,n,i,j;
//	scanf("%d %d",&a,&n);
//	for(i=a;i>=n;i--){
//		for(j=1;j<=9;j++){
//			printf("%d * %d = %d \n",i,j,i*j);
//		}
//		printf("\n");
//	}
//} 
