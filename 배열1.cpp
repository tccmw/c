//�迭 1 
//#include <stdio.h>
//
//int main()
//{
//	int a,b,c,d,e;
//	
//	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//	printf("%d %d %d %d %d",a,b,c,d,e);
//	return 0;
//}

//�迭 1 (1)
//#include <stdio.h>
//
//int main(){
//	int a[5];
//	
//	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
//	printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
//}

//�迭 1 (2)
//#include <stdio.h>
//
//int main(){
//	int a[5], i;
//	for(i = 0; i < 5; i++){
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<5;i++){
//		printf("%d",a[i]);
//	}
//	printf("\n");
//} 

//�������� 1
//#include <stdio.h>
//
//int main(){
//	char a[10];
//	for(int i=0;i<10;i++){
//		scanf(" %c",&a[i]);
//	}
//	for(int i=0;i<10;i++){
//		printf("%c",a[i]);
//	}
//	printf("\n");
//	return 0;
//} 

//�迭 2
//#include <stdio.h>
//
//int main(){
//	char a[26];
//	int i;
//	
//	for(i=0;i<26;i++){
//		a[i]='A'+i;
//	}
//	for(i=25;i>=0;i--){
//		printf("%c ",a[i]);
//	}
//	printf("\n");
//} 

//�������� 2
//#include <stdio.h>
//
//int main(){
//	int a[10],i;
//	
//	for(i=0;i<10;i++){
//		a[i]=1+i;
//	}
//	for(i=0;i<10;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//} 

//�迭 3
//#include <stdio.h>
//
//int main(){
//	int num[10],i;
//	
//	for(i=0;i<10;i++){
//		scanf("%d",&num[i]);
//	}
//	printf("%d %d %d",num[2],num[4],num[9]);
//} 

//�������� 
//#include <stdio.h> 
//
//int main(){
//	char a[10];
//	int i;
//	
//	for(i=0;i<10;i++){
//		scanf(" %c",&a[i]);
//	}
//	printf("%c %c %c",a[0],a[3],a[6]);
//}

//�迭 4
//#include <stdio.h>
//
//int main(){
//	int num[100],i,sum;
//	
//	for(i=0;i<100;i++){
//		scanf("%d",&num[i]);
//		if(num[i]==0)break;
//	}
//	for(sum=0;sum<i;sum++){
//		if(sum%2==1)printf("%d",num[sum]);
//	}
//	printf("\n");
//} 

//��������
//#include <stdio.h>
//
//int main(){
//	int num[100],i,sum;
//	
//	for(i=0;i<100;i++){
//		scanf("%d",&num[i]); 
//		if(num[i]==0)break;
//	}
//	for(sum=i-1;sum>=0;sum--){
//		printf("%d ",num[sum]);
//	}
//	printf("\n");
//} 

//�迭 5
//#include <stdio.h>
//
//int main(){
//	int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//	int year,month;
//	
//	while(1){
//		printf("year=");
//		scanf("%d",&year);
//		printf("month=");
//		scanf("%d",&month);
//		
//		if(month==0){
//			break;
//		}
//		else if(month<=0 || 12<month){
//			printf("�߸��Է��ߴ�\n\n");
//		}
//		else{
//			if(year%400==0)days[2]=29;
//			else if(year%4==0 && year % 100 != 0)days[2]=29;
//			else days[2]=28;
//			printf("�Է��Ͻ� ���� ���� %d���Դϴ�\n\n",days[month]);
//		} 
//	}
//}

//��������
//#include <stdio.h>
//
//int main(){
//	double num[6] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
//	double agv=0;
//	int n,m;
//	
//	scanf("%d %d",&n,&m);
//	agv = num[n-1] + num[m-1];
//	printf("%.1f",agv);
//} 

//�迭 6
//#include <stdio.h>
//
//int main(){
//	int num[10];
//	int max=0;
//	int i;
//	
//	for(i=0;i<10;i++){
//		scanf("%d",&num[i]);
//	}
//	for(i=0;i<10;i++){
//		if(max<num[i]){
//			max=num[i];
//		}
//	}
//	printf("%d\n",max);
//} 

//�������� 
//#include <stdio.h>
//
//int main(){
//	int num[10];
//	int min=1000;
//	int i;
//	
//	for(i=0;i<10;i++){
//		scanf("%d",&num[i]);
//	}
//	for(i=0;i<10;i++){
//		if(min>num[i]){
//			min=num[i];
//		}
//	}
//	printf("%d\n",min);
//} 
