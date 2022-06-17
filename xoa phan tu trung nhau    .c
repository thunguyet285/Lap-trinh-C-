#include<stdio.h>
#include<stdlib.h>
void inmang(int *a , int n){
	int i,j;
	for(i=0;i<n;i++){
		printf("%d\t",*(a+i));
	}
}
void SapXepTangDan(int *b, int n){
	int tg,i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(*(b+i) >= *(b+j)){
				tg = *(b+i);
				*(b+i) = *(b+j);
				*(b+j) = tg;
			}
		}
	}
//	for(i=0;i<n;i++){
//		printf("%d",*(b+i));
	}
void XoaTrungNhau(int *b,int n, int *m){
	int i,j,k;
	for(i = 1;i < n;i++){
		for(j=0;j < n;j++){
			if(j<i){
				if(*(b+i)==*(b+j)){
					for(k = i;k< n-1;k++){
						*(b+k) = *(b+k+1);
						
					}
					n--;
				}
			}
		}
			
 	}
	
	*m = n;
}
int main(){
	int i,n,*a,N;
	printf("Nhap so phan tu : ");scanf("%d",&n);
	a = (int*) malloc(n*sizeof(int));
	for(i = 0;i<n;i++){
		printf("Nhap phan tu thu %d:  ",i+1);scanf("%d",a+i);
	}
	SapXepTangDan(a,n);
	XoaTrungNhau(a,n,&N);
	printf("\nMang sau khi thay doi:\n");
	inmang(a,N);
	free(a);
}
