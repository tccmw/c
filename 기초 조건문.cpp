//조건문 1 
//#include <stdio.h>
//
//int main(){
//	int a;
//	scanf("%d",&a);
//	printf("%d\n", a);
//	if(a>10){
//		printf("10보다 큰 수를 입력함");
//	}
//}

//자가진단 1
//#include <stdio.h>
//  int main(){
//  	int a;
//  	scanf("%d",&a);
//  	printf("%d\n",a);
//  	
//  	if(a < 0)
//  	{
//  		printf("minus");
//	  }
//	  return 0;
//  }

//조건문 2 
//#include <stdio.h>
//
//int main(){
//	int a,b,c;
//	scanf("%d %d",&a,&b);
//	if(a < b){
//		c = a;
//		a = b;
//		b = c;
//	} 
//	printf("입력받은 두 수중 큰수는 %d이고",a);
//	printf("작은 수는 %d이다.",b);
//	return 0; 
//}

//자가진단 2
//#include <stdio.h>
//
//int main(){
//	int a,b,c;
//	scanf("%d %d", &a, &b);
//	c = a+100-b;
//	printf("%d\n", c);
//	if(c > 0){
//		printf("Obesity");
//	}
//	return 0;
//} 

//조건문 3
//#include <stdio.h>
//
//int main(){
//	int a;
//	printf("점수를 입력하세요:");
//	scanf("%d",&a);
//	if(a >= 80){
//		printf("축하합니다. 합격입니다.");
//	} 
//	else{
//		printf("죄송합니다.불합격입니다.");
//	}
//	return 0; 
//} 

//자가진단 3
//#include <stdio.h>
//
//int main(){
//	int a;
//	printf("나이를 입력하세요 :");
//	scanf("%d",&a);
//	if(a >=20){
//		printf("성인");
//	}
//	else{
//		printf("미성년자"); 
//	}
//	return 0;
//} 

//조건문 4
//#include <stdio.h>
//
//int main(){
//	int a;
//	printf("점수를 입력하세요:");
//	scanf("%d",&a);
//	if(a>=90){
//		printf("A");
//	} 
//	else if(a>=80){
//		printf("B");
//	}
//	else if(a>=70){
//		printf("C");
//	}
//	else if(a>=60){
//		printf("D");
//	}
//	else{
//		printf("F");
//	}
//	return 0;
//} 

//자가진단 4 
//#include <stdio.h>
//
//int main(){
//	int a;
//	printf("몸무게를 입력하세요:");
//	scanf("%d", &a);
//	if(a <= 50.8){
//		printf("Flyweight");
//	} 
//	else if(a <= 61.23){
//		printf("lightweight");
//	} 
//	else if(a <= 72.57){
//		printf("MIddleweight");
//	} 
//	else if(a <= 88.45){
//		printf("Cruiserweight");
//	} 
//	else{
//		printf("Heavyweight");
//	} 
//	return 0;
//}

//조건문 5
//#include <stdio.h>
//
//int main(){
//	int a,b;
//	printf("정수 두개를 입력하세요:");
//	scanf("%d %d",&a,&b);
//	if(a >= 4 && b >= 4){
//		printf("승리");
//	} 
//	else if(a >= 4 || b >= 4){
//		printf("비김");
//	} 
//	else {
//		printf("패배");
//	}
//	return 0; 
//} 

//자가진단 5
//#include <stdio.h>
//
//int main(){
//	int a,b;
//	printf("두가지 정수를 입력하세요:");
//	scanf("%d %d", &a, &b);
//	if(a >= 4 && b >= 4){
//		printf("승리");
//	} 
//	else if(a >= 4 || b >= 4){
//		printf("비김");
//	}
//	else{
//		printf("패배");
//	}
//	return 0;
//} 

//조건문 6
//#include <stdio.h>
// 
// int main(){
// 	int a,b,c,m;
// 	 printf("세 정수를 입력하시요:");
// 	 scanf("%d %d %d",&a,&b,&c);
//	   if(a>b){
//	   	if(a>c){
//	   		m = a; 
//		   }
//		   else{
//		   	m=c;
//		   }
//	   }
//	    else if(c>b){
//	   	if(c>a){
//	   		m = c; 
//		   }
//		   else{
//		   	m=a;
//		   }
//	   }
//	    else if(b>a){
//	   	if(b>c){
//	   		m = b; 
//		   }
//		   else{
//		   	m=c;
//		   }
//	   }
//	   printf("가장 큰수는 %d입니다.",m);
//	   return 0;
// }

//자가진단 6
//#include <stdio.h>
//
//int main(){
//	int b;
//	char a;
//	printf("성별과 나이를 입력하세요:");
//	scanf("%c %d",&a,&b);
//	if(b >= 20 && a == 'M'){
//		printf("MAN");
//	} 
//	else if(b < 20 && a == 'M'){
//		printf("BOY");
//	} 
//	else if(b >= 20 && a == 'F'){
//		printf("WOMAN");
//	} 
//	else if(b < 20 && a == 'F'){
//		printf("GIRL");
//	}  
//	return 0;
//} 

//조건문 7
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	
//	printf("1, 삽입\n");
//	printf("2, 수정\n");
//	printf("3, 삭제\n");
//	printf("숫자를 입력하세요\n");
//	scanf("%d", &a); 
//	
//	switch(a)
//	{
//		case 1:
//			printf("삽입을 선택하셨습니다.\n");
//			break;
//		case 2:
//			printf("수정을 선택하셨습니다.\n");
//			break;
//		case 3:
//			printf("삭제을 선택하셨습니다.\n");
//			break;
//		default:
//			printf("잘못 입력하셨습니다.");
//	}
//	return 0; 		
//}

//자가진단 7
//#include <stdio.h>
//
//int main(){
//	char a;
//	
//	printf("A, Excellenta\n");
//	printf("B, Good\n");
//	printf("C, Usually\n");
//	printf("D,Failure\n");
//	printf("문자를 입력하세요.\n");
//	scanf("%c",&a);
//	
//	switch(a)
//	{
//		case 'A':
//			printf("Excellent");
//			break;
//		case 'B':
//			printf("Good");
//			break;
//		case 'C':
//			printf("Usually");
//			break;
//		case 'D':
//			printf("Failure");
//			break;
//		default:
//			printf("error");
//	}
//	return 0;
//} 

//조건문 8
//#include <stdio.h>
//
//int main(){
//	int a;
//	
//	printf("점수를 입력하세요.\n");
//	scanf("%d",&a);
//	
//	switch(a/10)
//	{
//		case 10:
//		case 9:
//			printf("A\n");
//			break;
//		case 8:
//			printf("B\n");
//			break;
//		case 7:
//			printf("C\n");
//			break;
//		case 6:
//			printf("D\n");
//			break;
//		default:
//			printf("F\n");
//	}
//} 

//자가진단 8
//#include <stdio.h>
//
//int main(){
//	double a;
//	
//	printf("4.5점 이하의 평점을 입력하세요.\n");
//	scanf("%lf", &a);
//	
//	switch((int)a){
//		case 4:
//			printf("scholarship");
//			break;
//		case 3:
//			printf("next semester");
//			break;
//		case 2:
//			printf("seasonal semester");
//			break;
//		default:
//			printf("retake");
//	}
//} 

//조건문 9
//#include <stdio.h>
//
//int main() {
//	int a,b,max_data;
//	
//	scanf("%d %d", &a,&b);
//	
//	max_data=(a > b) ? a : b;
//	
//	printf("%d",max_data);
//	return 0;
//}

//자가진단 9
//#include <stdio.h>
//
//int main(){
//	int a,b,c;
//	int min_data;
//	int min;
//	
//	scanf("%d %d %d", &a,&b,&c);
//	
//	min=(a > b) ? a : b;
//	min_data=(min > c) ? min : c;
//	
//	printf("%d",min_data);
//	return 0;
//} 

//형성평가 1
//#include <stdio.h>
//
//int main(){
//	int a,b;
//	
//	scanf("%d %d", &a,&b);
//	
//	if(a>b){
//		printf("%d",a-b);
//	}
//	else{
//		printf("%d",b-a);
//	}
//	return 0;
//} 

//ㅎㅅㅍㄱ 2
//#include <stdio.h>
//
//int main(){
//	int a;
//	
//	scanf("%d",&a);
//	
//	if(a>0){
//		printf("plus");
//	}
//	else if(a<0){
//		printf("minus");
//	}
//	else{
//		printf("zero");
//	}
//	return 0;
//} 

//ㅎㅅㅍㄱ 3
//#include <stdio.h>
//
//int main(){
//	int a;
//	
//	printf("년도를 입력하세요. :");
//	scanf("%d",&a);
//	
//	if((a%400 == 0) || (a%4==0 && a%100!=0)){
//		printf("leap year");
//	} 
//	else{
//		printf("common year");
//	}
//	return 0;
//}

//ㅎㅅㅍㄱ 4
//#include <stdio.h>
//
//int main(){
//	int a;
//	printf("1,dog\n");
//	printf("2,cat\n");
//	printf("3,chick\n");
//	printf("숫자를 입력하세요"); 
//	scanf("%d",&a);
//	
//	switch(a){
//		case 1:
//			printf("dog");
//			break;
//		case 2:
//			printf("cat");
//			break;
//		default:
//			printf("chick");
//	}
//} 

//ㅎㅅㅍㄱ 5
//#include <stdio.h>
//
//int main(){
//	int a;
//	
//	printf("월을 입력하세요.: ");
//	scanf("%d",&a);
//	
//	switch(a)
//	{
//		case 2:
//			printf("28");
//			break;
//	
//	 	case 4:
//	 	case 6:
//	 	case 9:
//	 	case 11:
//	 		printf("30");
//	 		break;
//	 		
//		 default:
//			printf("31");
//	}
//	return 0;
//} 


