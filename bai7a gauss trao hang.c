/*
 		Ðe bai : Khu ma tran A(mxn) bang phuong phap Gauss co trao hang 
*/



#include<stdio.h>
#include<time.h>
int main(){
	int i,j,c,m,n,h,trunggian;
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
	for(i=0;i < m -1 ; i++){
		if(a[i][i] == 0){ // neu phan tu tren duong cheo chinh bang 0 thi doi phan tu hang duoi len tren
			for(j=i;j < n ; j++){
				trunggian = a[i][j];
				a[i][j] = a[i+1][j];
				a[i+1][j] = trunggian;
	
			}
		}
	//------------------------------
		for(h=i+1 ; h<m;h++){
			k = a[h][i] / a[i][i] ;
			for(c=0; c < n ;c++){
				a[h][c] = a[h][c] - k * a[i][c] ;
				}
			}
		}
	
//-----------------Ket qua gauss co trao hang ----------------------------------------------------------
	printf("\nMa tran A sau khi khu Gauss co trao hang la:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
}
