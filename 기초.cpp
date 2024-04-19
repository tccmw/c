//1번 
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	
//	a = 10;
//	b = 'A';
	
//	printf("a = %d\n", a);
//	printf("b = %c\n", b);
//return 0;
//}

//1 자기진단
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	
//	a = -100;
//	
//	printf("a = %d", a);
//	return 0;
//} 

//2번 
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	
//	a = 20;
//	b = 10;
//	
//	printf("%d %d", b, a);
//	return 0;
//}

//2 자가진단
//#include <stdio.h>
//
//int main(){
//	int a, b;
//	
//	a = 100;
//	b = -1;
//	
//	printf("%d\n %d", b, a);
//} 

//3번
//#include <stdio.h>
//
//int main(){
//	int a, b;
//	
//	a = 10;
//	b = 20;
//	printf("%d + %d = %d\n", a, b, a+b);
//	
//	a = 30;
//	b = 40;
//	printf("%d + %d = %d\n", a, b, a+b);
//} 

//3 자가진단
//#include <stdio.h>
//
//int main(){
//	int a,b;
//	
//	a = 55;
//	b = 10;
//	printf("%d - %d = %d\n", a, b, a - b);
//	
//	a = 2008;
//	b = 1999;
//	printf("%d - %d = %d", a, b, a- b);
//} 

//4번
//#include <stdio.h>
//
//int main()
//{
//	int a = 5;
//	double b = 3.14;
//	
//	printf("원주 = %d * 2 * %f = %f\n", a, b, a*2*b);
//	printf("넓이 = %d * 5 * %f = %f\n", a, b, a*5*b);
// } 

//4 자가진단
//#include <stdio.h>
//
//int main(){
//	double a = 0.268300;
//	
//	printf("추의 무게 * 중력의 비율 = 49 * %f = 49 * %f", a, 49 * a);
//} 

//5번
//#include <stdio.h>
//
//int main(){
//	double x = 1.2340;
//	double y = 10.3459;
//	
//	printf("전체 7자리로 맞추고 소수 4자리까지 출력\n");
//	printf("x = %7.4f\n", x);
//	printf("y = %7.4f\n", y);
//	
//	printf("소수 2자리까지 출력(반올림)\n");
//	printf("x = %.2f\n", x);
// 	printf("y = %.2f\n", y); 
//} 

//5 자가진단
//#include  <stdio.h>
//
//int main(){
//	double a,b;
//	a = 2.1;
//	b = 91.44;
//	printf("%.1fyd = %.1fcm\n",a,a*b);
//	
//	a = 2.54;
//	b = 10.5;
//	printf("%.1fin = %.1fcm", b, a*b);
//}

//6번
//#include <stdio.h>
//
//int main(){
//	int ago;
//	
//	printf("님 나이 몇살?");
//	scanf("%d", &ago);
//	
//	printf("님 나이는 %d 입니다.\n", ago);
//	
//	return 0;
//} 

//6 자가진단
//#include <stdio.h>
//
//int main(){
//	int height;
//	
//	printf("님 키 몇?");
//	scanf("%d", &height);
//	
//	printf("님 키는 %d 입니다.", height);
//	return 0;
//} 

//7번
//#include <stdio.h>
//
//int main(){
//	int a, b;
//	
//	printf("두 정수를 입력하세요.");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d * %d = %d", a, b, a*b);
//	return 0; 
//} 

//7 자가진단
//#include <stdio.h>
//
//int main(){
//	int a,b;
//	a = 16;
//	b = 5;
//	
//	printf("%d %d\n", a, b);
//	printf("%d * %d = %d\n", a, b, a*b);
//	printf("%d / %d = %d", a, b, a/b);
//} 

//8번
//#include <stdio.h>
//
//int main(){
//	int a;
//	double b;
//	char c;
//	
//	printf("키를 입력 :");
//	scanf("%d", &a);
//	
//	printf("몸무게 입력 : ");
//	scanf("%lf", &b);
//	
//	printf("이름 입력 :");
//	scanf(" %c", &c);
//	
//	printf("키 = %d\n", a);
//	printf("몸무게 = %1f\n", b);
//	printf("이름 = %c", c); 
//	
//	return 0; 
//} 

//8 자가진단
//#include <stdio.h>
//
//int main(){
//	double a= 12.2536;
//	double b = 526.129535;
//	char c = 'A';
//	
//	printf("%.2f\n", a);
//	printf("%.2f\n", b);
//	printf("%c\n", c);
//	
//	return 0;
//} 

//9번 
//#include <stdio.h>
// 
// int main(){
// 	double x, y;
// 	
// 	printf("두 개의 실수를 입력하시오. :");
// 	scanf("%lf\n %lf", &x, &y);
//	  
//	  printf("%.2f\n%.2f", x, y);
// }

//9 자가진단
// #include <stdio.h>
// 
// int main(){
// 	double a, b, c;
// 	a = 1.2568;
// 	b = 95.21438;
// 	c = 526.851364;
// 	
// 	printf("%.3f\n%.3f\n%.3f", a, b, c);
// }

//형성평가 1
// #include <stdio.h>
// 
// int main(){
// 	int a, b;
// 	
// 	a = 10;
// 	b = 20;
// 	
// 	printf("%d + %d = %d", a, b, a+b);
// }

//헝성평가 2
//int main(){
//	double a,b;
//	a=80.50;
//	b=22.34;
//	
//	printf("%10.2f %10.2f %10.2f", a, b, a+b);
//} 

//형성평가 3
//#include <stdio.h>
//
//int main(){
//	int a = 50;
//	double b = 100.12;
//	
//	printf("%.2f * %d = %.2f", b, a, b*a);
//} 

//형성평가 4
//#include <stdio.h>
//
//int main(){
//	int a,b,c;
//
//	scanf("%d %d %d", &a, &b, &c);
//	printf("sum = %d", a+b+c);
//} 

//형성평가 5
//#include <stdio.h>
//
//int main(){
//	double a;
//	scanf("%lf", &a);
//	printf("%.1fyard = %.1fcm",a,91.44*a);
//} 

//1165
//#include <stdio.h>
//
//int main()
//{
//	int a,b;
//	scanf("%d %d",&a,&b);
//	while(a < 90)
//	{
//		a = a+5;
//		b = b+1;
//	}
//	printf("%d",b); 
//}
