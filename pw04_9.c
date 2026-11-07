#include <stdio.h>
void arithmean(double *a, double *b){
    *a = (*a + *b)/2;
    *b = *a;
}
int main(){
    double a = 45.45;
    double b = 45.45;
    printf("before: %lf %lf\n", a, b);
    arithmean(&a, &b);
    printf("after: %lf %lf\n", a, b);
    return 0;
}