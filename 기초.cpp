//1�� 
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

//1 �ڱ�����
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

//2�� 
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

//2 �ڰ�����
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

//3��
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

//3 �ڰ�����
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

//4��
//#include <stdio.h>
//
//int main()
//{
//	int a = 5;
//	double b = 3.14;
//	
//	printf("���� = %d * 2 * %f = %f\n", a, b, a*2*b);
//	printf("���� = %d * 5 * %f = %f\n", a, b, a*5*b);
// } 

//4 �ڰ�����
//#include <stdio.h>
//
//int main(){
//	double a = 0.268300;
//	
//	printf("���� ���� * �߷��� ���� = 49 * %f = 49 * %f", a, 49 * a);
//} 

//5��
//#include <stdio.h>
//
//int main(){
//	double x = 1.2340;
//	double y = 10.3459;
//	
//	printf("��ü 7�ڸ��� ���߰� �Ҽ� 4�ڸ����� ���\n");
//	printf("x = %7.4f\n", x);
//	printf("y = %7.4f\n", y);
//	
//	printf("�Ҽ� 2�ڸ����� ���(�ݿø�)\n");
//	printf("x = %.2f\n", x);
// 	printf("y = %.2f\n", y); 
//} 

//5 �ڰ�����
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

//6��
//#include <stdio.h>
//
//int main(){
//	int ago;
//	
//	printf("�� ���� ���?");
//	scanf("%d", &ago);
//	
//	printf("�� ���̴� %d �Դϴ�.\n", ago);
//	
//	return 0;
//} 

//6 �ڰ�����
//#include <stdio.h>
//
//int main(){
//	int height;
//	
//	printf("�� Ű ��?");
//	scanf("%d", &height);
//	
//	printf("�� Ű�� %d �Դϴ�.", height);
//	return 0;
//} 

//7��
//#include <stdio.h>
//
//int main(){
//	int a, b;
//	
//	printf("�� ������ �Է��ϼ���.");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d * %d = %d", a, b, a*b);
//	return 0; 
//} 

//7 �ڰ�����
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

//8��
//#include <stdio.h>
//
//int main(){
//	int a;
//	double b;
//	char c;
//	
//	printf("Ű�� �Է� :");
//	scanf("%d", &a);
//	
//	printf("������ �Է� : ");
//	scanf("%lf", &b);
//	
//	printf("�̸� �Է� :");
//	scanf(" %c", &c);
//	
//	printf("Ű = %d\n", a);
//	printf("������ = %1f\n", b);
//	printf("�̸� = %c", c); 
//	
//	return 0; 
//} 

//8 �ڰ�����
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

//9�� 
//#include <stdio.h>
// 
// int main(){
// 	double x, y;
// 	
// 	printf("�� ���� �Ǽ��� �Է��Ͻÿ�. :");
// 	scanf("%lf\n %lf", &x, &y);
//	  
//	  printf("%.2f\n%.2f", x, y);
// }

//9 �ڰ�����
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

//������ 1
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

//�뼺�� 2
//int main(){
//	double a,b;
//	a=80.50;
//	b=22.34;
//	
//	printf("%10.2f %10.2f %10.2f", a, b, a+b);
//} 

//������ 3
//#include <stdio.h>
//
//int main(){
//	int a = 50;
//	double b = 100.12;
//	
//	printf("%.2f * %d = %.2f", b, a, b*a);
//} 

//������ 4
//#include <stdio.h>
//
//int main(){
//	int a,b,c;
//
//	scanf("%d %d %d", &a, &b, &c);
//	printf("sum = %d", a+b+c);
//} 

//������ 5
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
