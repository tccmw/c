//반복제어문 1
//#include <stdio.h>
//
//int main(){
//	char alpha ='A';
//	
//	while(alpha <= 'Z'){
//		printf("%c", alpha++);
//	}
//	
//	return 0;
//} 

//자가진단 1
//#include <stdio.h>
//
//int main(){
//	int num = 1;
//	while(num <= 15){
//		printf("%d ",num++);
//	}
//	return 0;
//} 

//반복제어문 2
//#include <stdio.h>
//
//int main(){
//	int a = 0;
//	int num = 1;
//	
//	while(num <= 10){
//		a += num;
//		num++;
//	}
//	printf("%d\n",a);
//	printf("%d",num);
//}

//자가진단 2
//#include <stdio.h>
//
//int main(){
//	int sum = 0;
//	int num;
//	int a = 1;
//	
//	scanf("%d",&num);
//	
//	while(a <= num){
//		sum += a;
//		a++;
//	}
//	printf("%d",sum);
//} 

//반복제어문 3
//#include <stdio.h>
//
//int main(){
//	int score;
//	
//	while(1){
//		printf("점수를 입력하세요 : ");
//		scanf("%d",&score);
//		
//		if((score < 0) || (score > 100)) break;
//		if(score >= 80){
//			printf("합격\n");
//		}
//		else if (score < 80){
//			printf("불합격\n");
//		} 
//	}
//	return 0;
//} 

//자가진단 3
//#include <stdio.h>
//
//int main(){
//	int num;
//	
//	while(1){
//		
//	printf("number? :");
//	scanf("%d",&num);
//	
//	if(num == 0)break;
//	if(num > 0){
//		printf("양수\n");
//	} 
//	else if(num < 0){
//		printf("음수\n");
//	}
//}
// 	return 0; 
//}

//반복제어문 4
//#include <stdio.h>
//
//int main(){
//	int num;
//	int sum=0, cut=0;
//	double avg;
//	
//	while(1){
//		scanf("%d",&num);
//		if(num == 0)break;
//		sum += num;
//		cut++;
//	}
//	avg=(double)sum/cut;
//	
//	printf("입력된 자료의 개수 = %d\n",cut);
//	printf("입력된 자료의 합계 = %d\n",sum);
//	printf("입력된 자료의 평균 = %.2f\n",avg);
//	return 0;
//} 

//자가진단 4
//#include <stdio.h>
//
//int main(){
//	int num;
//	int sum = 0, cnt=0;
//	double avg;
//	
//	while(1){
//		scanf("%d",&num);
//		if(num < 100){
//			sum += num;
//			cnt++;
//		}
//		else if(num >= 100){
//		sum += num;
//			cnt++;
//		break;
//	}
//	}
//	avg = (double)sum/cnt;
//	
//	printf("%d\n",sum);
//	printf("%.1f\n",avg);
//	return 0;
//} 

//조건반복문 5
//#include <stdio.h>
//
//int main(){
//	int num;
//	int sum = 0, cnt = 0;
//	int avg;
//	
//	while(1)
//	{
//		scanf("%d",&num);
//		if(num == 0)break;
//		if(num % 2 == 0)continue;
//		sum += num;
//		cnt++;
//	}
//	avg = (int)sum/cnt;
//	
//	printf("홀수의 합 = %d\n",sum);
//	printf("홀수의 평균 = %d\n", avg);
//	return 0;
//} 

//조건 반복문 5-2
//#include <stdio.h>
//
//int main(){
//	int num;
//	int sum = 0, cnt = 0;
//	int avg;
//	
//	do{
//		scanf("%d",&num);
//		if(num % 2 ==1){
//			sum += num;
//			cnt++;
//		}
//	}
//		while(num != 0);
//		avg = sum/cnt;
//		printf("홀수의 합 = %d\n",sum);
//		printf("홀수의 평균 = %d\n", avg);
//		return 0;
//}

//자가진단 5 

//#include <Stdio.h>
//
//int main(){
//	int num;
//	int sum = 0, cnt =0;
//	
//	while(1){
//		scanf("%d",&num);
//		if(num == -1)break;
//		if(num % 3 != 0)continue;
//		printf("%d",num/3);
//	}
//}

//조건반복문 6
//#include <stdio.h>
//
//int main(){
//	int num;
//	
//	do{
//		printf("1,출력하기\n");
//		printf("2,입력하기\n");
//		printf("3,삭제하기\n");
//		printf("4,끝내기\n");
//		
// 		printf("작업할 번호를 선택하세요. :");
//		scanf("%d",&num);
//		
//		switch(num){
//			case 1:
//				printf("출력하기\n");
//				break;
//			case 2:
//				printf("입력하기\n");
//				break;
//			case 3:
//			 	printf("삭제하기\n");
//				break;
//			case 4:
//				printf("끝내기\n");
//				break; 
//			default:
//				printf("잘못입력하였습니다.\n");
//		} 
//	}
//		while(num != 4);
//} 

//자가진단 6
//#include <stdio.h>
//
//int main(){
//	int num;
//	
//	do{
//		printf("1,한국\n");
//		printf("2,미국\n");
//		printf("3,일본\n");
//		printf("4.중국\n");
//		
//		printf("number? :\n");
//		scanf("%d", &num);
//		
//		switch(num){
//			case 1:
//				printf("서울\n");
//				break;
//			case 2:
//				printf("워싱턴\n");
//				break;
//			case 3:
//				printf("동경\n");
//				break;
//			case 4:
//				printf("북경\n");
//				break;
//			default:
//				printf("none");
//		} 
//	}while(num <5);
//} 

//형성평가 1
//#include <stdio.h>
//
//int main(){
//	int num;
//	int sum = 1;
//	
//	scanf("%d",&num);
//	
//	while(num >= sum)
//	{
//		printf("%d", sum++);
//	}
//	printf("\n");
//	return 0;
//} 

//형성평가 2
//#include <stdio.h>
//
//int main(){
//	int num;
//	int odd = 0, even = 0;
//	
//	while(1){
//		scanf("%d",&num);
//		if(num == 0)break;
//		if(num % 2 == 0)odd++;
//		if(num % 2 != 0)even++;
//	}
//	printf("even = %d\n",even);
//	printf("odd = %d",odd);
//} 

//형성평가 4
//#include <stdio.h>
//
//int main(){
//	int num;
//	int cnt = 0;
//	
//	while(1){
//		scanf("%d",&num);
//		if(num == 0)break;
//		if(num%3==0)continue;
//		if(num%5==0)continue;
//		cnt++;
//	}
//	printf("%d",cnt);
//}

//ㅎㅅㅍㄱ 5
//#include <stdio.h>
//
//int main(){
//	int num;
//	char a;
//	int Q = 0, P = 0;
//
//	while(1){
//		scanf("%d %d",&Q, &P);
//		printf("%d\n",Q);
//		printf("%d\n",P);
//		printf("%d\n",Q*P/2);
//		printf("continie? :");
//		scanf(" %c",&a);
//		if(a == 'y') continue;
//		if(a == 'Y') continue;
//		if(a != 'y') break;
//		if(a != 'Y') break;
//	}
//}

