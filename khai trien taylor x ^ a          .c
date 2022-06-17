#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float lnx(float x){
	int i;
	float n = (x-1)/(x+1);
	float tong,sum;
	tong = 0;
	float m;
	int mu;
	for(i=1;i<1000;i++){
		mu = (2*i)-1 ;
		m = pow(n,mu)/mu;
		tong += m;
	}
	sum = 2*tong;
	return sum ;
}

float hame(float err,float kq){
	int i=0;
	float R = 1;
	float tong = 0 ;
    while (fabs(R) >= err) {
        tong +=R;
        i++;
        R *= (kq/i);  
	}
	return tong;
}
int main(){
	float x , a  ,err;
	float KQ,kq;
	printf("Nhap x,a,ERR : ");
	scanf("%f%f%f",&x,&a,&err);
	kq = a*lnx(x);
	KQ = hame(err,kq);
	printf("\nGia tri cua ham nay la : %f",KQ);
}
