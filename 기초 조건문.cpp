//���ǹ� 1 
//#include <stdio.h>
//
//int main(){
//	int a;
//	scanf("%d",&a);
//	printf("%d\n", a);
//	if(a>10){
//		printf("10���� ū ���� �Է���");
//	}
//}

//�ڰ����� 1
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

//���ǹ� 2 
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
//	printf("�Է¹��� �� ���� ū���� %d�̰�",a);
//	printf("���� ���� %d�̴�.",b);
//	return 0; 
//}

//�ڰ����� 2
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

//���ǹ� 3
//#include <stdio.h>
//
//int main(){
//	int a;
//	printf("������ �Է��ϼ���:");
//	scanf("%d",&a);
//	if(a >= 80){
//		printf("�����մϴ�. �հ��Դϴ�.");
//	} 
//	else{
//		printf("�˼��մϴ�.���հ��Դϴ�.");
//	}
//	return 0; 
//} 

//�ڰ����� 3
//#include <stdio.h>
//
//int main(){
//	int a;
//	printf("���̸� �Է��ϼ��� :");
//	scanf("%d",&a);
//	if(a >=20){
//		printf("����");
//	}
//	else{
//		printf("�̼�����"); 
//	}
//	return 0;
//} 

//���ǹ� 4
//#include <stdio.h>
//
//int main(){
//	int a;
//	printf("������ �Է��ϼ���:");
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

//�ڰ����� 4 
//#include <stdio.h>
//
//int main(){
//	int a;
//	printf("�����Ը� �Է��ϼ���:");
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

//���ǹ� 5
//#include <stdio.h>
//
//int main(){
//	int a,b;
//	printf("���� �ΰ��� �Է��ϼ���:");
//	scanf("%d %d",&a,&b);
//	if(a >= 4 && b >= 4){
//		printf("�¸�");
//	} 
//	else if(a >= 4 || b >= 4){
//		printf("���");
//	} 
//	else {
//		printf("�й�");
//	}
//	return 0; 
//} 

//�ڰ����� 5
//#include <stdio.h>
//
//int main(){
//	int a,b;
//	printf("�ΰ��� ������ �Է��ϼ���:");
//	scanf("%d %d", &a, &b);
//	if(a >= 4 && b >= 4){
//		printf("�¸�");
//	} 
//	else if(a >= 4 || b >= 4){
//		printf("���");
//	}
//	else{
//		printf("�й�");
//	}
//	return 0;
//} 

//���ǹ� 6
//#include <stdio.h>
// 
// int main(){
// 	int a,b,c,m;
// 	 printf("�� ������ �Է��Ͻÿ�:");
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
//	   printf("���� ū���� %d�Դϴ�.",m);
//	   return 0;
// }

//�ڰ����� 6
//#include <stdio.h>
//
//int main(){
//	int b;
//	char a;
//	printf("������ ���̸� �Է��ϼ���:");
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

//���ǹ� 7
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	
//	printf("1, ����\n");
//	printf("2, ����\n");
//	printf("3, ����\n");
//	printf("���ڸ� �Է��ϼ���\n");
//	scanf("%d", &a); 
//	
//	switch(a)
//	{
//		case 1:
//			printf("������ �����ϼ̽��ϴ�.\n");
//			break;
//		case 2:
//			printf("������ �����ϼ̽��ϴ�.\n");
//			break;
//		case 3:
//			printf("������ �����ϼ̽��ϴ�.\n");
//			break;
//		default:
//			printf("�߸� �Է��ϼ̽��ϴ�.");
//	}
//	return 0; 		
//}

//�ڰ����� 7
//#include <stdio.h>
//
//int main(){
//	char a;
//	
//	printf("A, Excellenta\n");
//	printf("B, Good\n");
//	printf("C, Usually\n");
//	printf("D,Failure\n");
//	printf("���ڸ� �Է��ϼ���.\n");
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

//���ǹ� 8
//#include <stdio.h>
//
//int main(){
//	int a;
//	
//	printf("������ �Է��ϼ���.\n");
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

//�ڰ����� 8
//#include <stdio.h>
//
//int main(){
//	double a;
//	
//	printf("4.5�� ������ ������ �Է��ϼ���.\n");
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

//���ǹ� 9
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

//�ڰ����� 9
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

//������ 1
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

//�������� 2
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

//�������� 3
//#include <stdio.h>
//
//int main(){
//	int a;
//	
//	printf("�⵵�� �Է��ϼ���. :");
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

//�������� 4
//#include <stdio.h>
//
//int main(){
//	int a;
//	printf("1,dog\n");
//	printf("2,cat\n");
//	printf("3,chick\n");
//	printf("���ڸ� �Է��ϼ���"); 
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

//�������� 5
//#include <stdio.h>
//
//int main(){
//	int a;
//	
//	printf("���� �Է��ϼ���.: ");
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


