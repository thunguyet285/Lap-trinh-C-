#include<stdio.h>
int main(){
	int a,b;
	printf("nhap lan luot 2 so duong a,b : ");scanf("%d%d",&a,&b);
	if(a == 0 && b== 0){
		printf("Khong co UCLN,UCNN");
	}
	else if ( a== 0 || b == 0){
		printf("Khong co BCNN , UCLN la %d", ( a==0)? a: b);
	}else{
		int bc = a*b;
		while( a != b){
			if(a > b){
				a = a-b;
			}else{
				b=b-a;
			}
		}
		printf("UCLN la %d",a);// in ra gia tri a,b deu duoc
		printf("\nBCNN la %d",bc/a); 
		
	}
	/*  max = a > b ? a: b;
	min = a<b ? a : b;
	for( i = min ; i >= 1; i--){
		if(max %i == 0 && min % i == 0){
			printf("UCLN la ",i )
	
	
	*/
	
	
}
/*
while(a!=0){
	int x = a;
	a= b % a;
	b = x ;
}
printf("UCLN la %d",b);
printf("\nBCNN la %d",bc/b);



*/
