#include<stdio.h>
int main(){
	int i,j,a[10][10],ha,ca,h1,h2,trunggian;
	printf("Nhap so hang va so cot cua ma tran a lan luot la : ");
	scanf("%d%d",&ha,&ca);
	for(i=0;i<ha;i++){
		for(j=0;j<ca;j++){
			printf("A[%d][%d] = ",i+1,j +1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMa tran A ban dau la : \n");
	for(i=0;i<ha;i++){
		for(j=0;j<ca;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
//a) Hoan doi 2 hang cho nhau:
	do{
		printf("\nHai hang ma ban muon hoan doi cho nhau la : ");
		scanf("%d%d",&h1,&h2);}
	while(h1,h2 < 0 || h1,h2 > ha);
	h1--;
	h2--;
	for(j =0; j < ca;j++){
		trunggian = a[h1][j];
		a[h1][j] = a[h2][j];
		a[h2][j] =trunggian;
	}
	printf("\nMa tran A sau khi doi cho hai hang mong muon la : \n");
	for(i=0;i<ha;i++){
		for(j=0;j < ca;j++)
			printf("%d\t",a[i][j]);
		printf("\n");		
	}


}
