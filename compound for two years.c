#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float P,R,a,c;
    scanf("%f",&P);
    scanf("%f",&R);
    a=(1+R/100);
    c=pow(a,2);
    printf("%.2f",P*c-P);
    
    
    return 0;
}
