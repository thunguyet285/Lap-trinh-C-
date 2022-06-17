/*
 		Ðe bai : Khu ma tran A(mxn) bang phuong phap Gauss khong trao hang 
*/

#include<stdio.h>
int main(){
	int i,j,c,m,n,trunggian;
	float a[10][10] , k;
	printf("Ma tran A co so hang va so cot lan luot la : ");
	scanf("%d%d",&m,&n);
	printf("Nhap cac phan tu cua ma tran A :\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("A[%d][%d] = ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	printf("\nMa tran A la :\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
//-------------------------Bat dau tinh --------------------------------------------------
	for(i=0 ; i<m;i++){
		for(j=0;j < m;j++){
			if(j>i){
				k = a[j][i] / a[i][i] ;// phan tu hang duoi chia phan tu hang tren , tru phan tu duowng cheo chinh 
				for(c=0; c < n ;c++){
					a[j][c] = a[j][c] - k * a[i][c] ;
				}
			}
		}
	}
//----------------------------------------------------------------------------
	printf("\nMa tran A sau khi khu Gauss khong trao hang la:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
}
