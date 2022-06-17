#include<stdio.h>
int main()
{
    int i,j,ha,ca,m,n,hb,cb,a[10][10],b[10][10],c[10][10];
	printf("nhap so hang, so cot cua ma tran a:");
    scanf("%d %d",&ha,&ca);
    
    //ma tran a
    printf("Nhap cac phan tu cua ma tran: \n");
    for (i = 0; i < ha; i++) {
        for (j = 0; j < ca; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    //ma tran b
    printf("nhap so hang, so cot cua ma tran b:");
    scanf("%d %d",&hb,&cb);

    printf("Nhap cac phan tu cua ma tran: \n");
    for (m = 0; m < hb; m++) {
        for (n = 0; n < cb; n++) {
            printf("b[%d][%d] = ", m, n);
            scanf("%d", &b[m][n]);
        }
    }
// in ma tran a
    printf(" ma tran a: \n");
    for (i = 0; i < ha; i++) {
        for (j = 0; j < ca; j++) {
            printf("%d\t ", a[i][j]);
        }
            printf("\n");}
//  in ma tran b
    printf(" ma tran b: \n");
    for (m = 0; m < hb; m++) {
        for (n = 0; n < cb; n++) {
            printf("%d\t ", b[m][n]);
        }
            printf("\n");}
// bat dau tinh : Kich thuoc cua ma tran la hang x cot
    if(ca==hb ){
        for(i=0;i<ha;i++){
            for(n=0;n<cb;n++){
            	c[i][n] = 0;
                for(j=0;j<ca;j++){
                    c[i][n]=c[i][n]+a[i][j]*b[j][n];
                    
                }
                
            }
        }
    
    	printf("Tich 2 ma tran: \n");
    	for (i = 0; i < ha; i++) {
        	for (n = 0; n < cb; n++) {
            	printf("%d\t",c[i][n]);
        }
            printf("\n");
		} 
    }
    else 
    printf("Khong ton tai tich ma tran");
    
}
