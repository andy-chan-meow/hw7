#include <stdio.h>
int trianglenum(int n){
    if (n <= 1) return 1;
    return n + trianglenum(n-1); 
}
int main(){
    int a;
    int triangle;
    scanf("%d", &a);
      printf("by recursion: %d\n", trianglenum(a));
    while(a > 0){
        triangle += a;
        a--;
    }
    printf("by while: %d\n",triangle);
  
    return 0;
}
/* "+": рекурсия лаконичнее и реализация алгоритмов, имеющих рекурсивную природу, легче с ней
   "-": высокий расход памяти, медленнее, возможно переполнение стека, если рекурсия слишком глубокая*/