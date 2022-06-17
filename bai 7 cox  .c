#include <stdio.h>
#include <math.h>
// ham cosx
int main()
{
	double S=0, m=1, x;   
    int i = 0;
    printf("Nhap so x: ");scanf("%lf", &x);
    while (fabs(m) >= 0.00001)   
    {
		/*if (i%2==0) 
		 	S = S + M;
        else 
			S = S-M;
		*/
        i++;
        //m = m*pow(x,2)/((2*i-1)*(2*i)); 
		S = S + m;
        m *=(-1)*x*x/((2*i-1)*(2*i));    
    }
    printf("\nGia tri cua cos(%.5lf)= %.5lf", x, S);
    printf("\nGia tri trong thu vien cos(%.5lf)= %.5lf", x, cos(x));
} 
