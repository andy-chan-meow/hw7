#include <stdio.h>
#include <ctype.h>
int main(){
  
    int q;
    printf("Ctrl+D x2\n");
    while((q = getchar()) != -1){
    if (isdigit(q)){
        printf(" ");
        putchar(q);
        
    }
  
    }
    printf("\n");
    return 0;
}