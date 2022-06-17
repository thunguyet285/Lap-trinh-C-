#include<stdio.h>
#include<stdlib.h>
void nhap(int *a, int n){
	int i;
	printf("Nhap tung phan tu:\n");
	for(i=0;i<n;i++){
		scanf("%d",(a+i));
	}
}
void in(int *a,int n){
	int i;
	printf("\nMang vua nhap la:\n");
	for(i=0;i<n;i++){
		printf("%d\t",*(a+i));
	}
}

int Uc2so( int a, int b){
	int i;
	int max = a > b ? a: b;
	int min = a < b ? a : b;
	for( i = min ; i >= 1; i--){
		if(max %i == 0 && min % i == 0){
			return i;
		}
	}
}
int UCLN( int *a , int n){
	int i, tg;
	tg = *(a+0);
	for(i=0;i<n;i++){
	
		tg = Uc2so(tg,*(a+i));
	}
	return tg;
}
int main(){
	int *a,i,n;
	printf("Co bao nhieu so: ");
	scanf("%d",&n);
	a = (int*)malloc(n*sizeof(int));
	nhap(a,n);
	in(a,n);
	printf("\nUCLN = %d ",UCLN(a,n));
	free(a);
}
