#include<stdio.h>
// de bai : in ra tam giac Pascal voi n dong
int main(){
	int a[20][20],i,j,n;
	printf("Nhap n = ");scanf("%d",&n);
	for(i=0; i < n ; i++){
		for(j=0;j < n ; j++){
			if(j <= i){
				if(j==0 || j == i){
					a[i][j] =1;
				}
				else
					a[i][j] = a[i-1][j -1 ] + a[i-1][j];
				printf("%d\t",a[i][j]);
			}
		}
		printf("\n");
	}
	
}
