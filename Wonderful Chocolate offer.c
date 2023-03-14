#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int C,N,D;
    scanf("%d",&C);
    scanf("%d",&N);
    scanf("%d",&D);
    printf("%d",(N*(D-1)+C));
    
    return 0;
}
