#include <stdio.h>
#include "tinyexpr.h"

int main(void){
    int error;
    double b = te_interp("2 * 5! / 3", &error);
    printf("2 * 5! / 3 = %f\n", b);
    return 0;
}