//�ݺ���� 1
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

//�ڰ����� 1
//#include <stdio.h>
//
//int main(){
//	int num = 1;
//	while(num <= 15){
//		printf("%d ",num++);
//	}
//	return 0;
//} 

//�ݺ���� 2
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

//�ڰ����� 2
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

//�ݺ���� 3
//#include <stdio.h>
//
//int main(){
//	int score;
//	
//	while(1){
//		printf("������ �Է��ϼ��� : ");
//		scanf("%d",&score);
//		
//		if((score < 0) || (score > 100)) break;
//		if(score >= 80){
//			printf("�հ�\n");
//		}
//		else if (score < 80){
//			printf("���հ�\n");
//		} 
//	}
//	return 0;
//} 

//�ڰ����� 3
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
//		printf("���\n");
//	} 
//	else if(num < 0){
//		printf("����\n");
//	}
//}
// 	return 0; 
//}

//�ݺ���� 4
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
//	printf("�Էµ� �ڷ��� ���� = %d\n",cut);
//	printf("�Էµ� �ڷ��� �հ� = %d\n",sum);
//	printf("�Էµ� �ڷ��� ��� = %.2f\n",avg);
//	return 0;
//} 

//�ڰ����� 4
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

//���ǹݺ��� 5
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
//	printf("Ȧ���� �� = %d\n",sum);
//	printf("Ȧ���� ��� = %d\n", avg);
//	return 0;
//} 

//���� �ݺ��� 5-2
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
//		printf("Ȧ���� �� = %d\n",sum);
//		printf("Ȧ���� ��� = %d\n", avg);
//		return 0;
//}

//�ڰ����� 5 

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

//���ǹݺ��� 6
//#include <stdio.h>
//
//int main(){
//	int num;
//	
//	do{
//		printf("1,����ϱ�\n");
//		printf("2,�Է��ϱ�\n");
//		printf("3,�����ϱ�\n");
//		printf("4,������\n");
//		
// 		printf("�۾��� ��ȣ�� �����ϼ���. :");
//		scanf("%d",&num);
//		
//		switch(num){
//			case 1:
//				printf("����ϱ�\n");
//				break;
//			case 2:
//				printf("�Է��ϱ�\n");
//				break;
//			case 3:
//			 	printf("�����ϱ�\n");
//				break;
//			case 4:
//				printf("������\n");
//				break; 
//			default:
//				printf("�߸��Է��Ͽ����ϴ�.\n");
//		} 
//	}
//		while(num != 4);
//} 

//�ڰ����� 6
//#include <stdio.h>
//
//int main(){
//	int num;
//	
//	do{
//		printf("1,�ѱ�\n");
//		printf("2,�̱�\n");
//		printf("3,�Ϻ�\n");
//		printf("4.�߱�\n");
//		
//		printf("number? :\n");
//		scanf("%d", &num);
//		
//		switch(num){
//			case 1:
//				printf("����\n");
//				break;
//			case 2:
//				printf("������\n");
//				break;
//			case 3:
//				printf("����\n");
//				break;
//			case 4:
//				printf("�ϰ�\n");
//				break;
//			default:
//				printf("none");
//		} 
//	}while(num <5);
//} 

//������ 1
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

//������ 2
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

//������ 4
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

//�������� 5
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

