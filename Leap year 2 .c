#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int yr,a;
    scanf("%d",&yr);
    for (a=1;a<=yr;a++){
        if ((a%4==0 && a%100!=0) || (a%400==0)){
            printf("%d ",a);
        }
    }
    
    return 0;
}
