#include <stdio.h>
int main(){
    double a;
    double b;
    printf("Enter a & b: ");
    while (scanf(" %lf %lf", &a, &b) == 2 && a != -1 && b != -1){
        printf("%.4lf\n", (a+b)/2);
        printf("Enter a & b: ");
    }
    return 0;
}