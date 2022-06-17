#include<stdio.h>
#include<math.h>
// ham sinx
int main(){
	int i = 0;
	float x,m,s;
	s = 0;
	printf("Nhap gia tri x = ");scanf("%f",&x);
	m = x;
	while(fabs(m) >= 0.000001){
		i++;
		s += m ;
		m *= (-1)*x*x/((2*i+1)*(2*i));
		
		
	}
	printf("\nGia tri cua sin(%f)= %f", x, s);
    printf("\nGia tri trong thu vien sin(%.5f)= %f", x,sin(x));
	
	
	
	
}
