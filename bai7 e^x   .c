#include<stdio.h>
#include<math.h>
// ham e^x

int main() {
    int n,i=0;
    double tong,x,R =1;
    printf("x? "); 
    scanf("%lf", &x);
    printf("n ?");scanf("%d",&n);
    while (fabs(R) >= 0.00001) { // while( i<= n)
        tong +=R;
        i++;
        R *= (x/i);  
    }
    printf("exp(%lf) = %lf",x,tong);
    printf("\nTrog thu vien math.h la exp(%lf) = %lf",x,exp(x));
}
