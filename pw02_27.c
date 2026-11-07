#include <stdio.h>
#include <ctype.h>
int main(){
    int q;
    int l;
    int l3;

while((q = getchar()) != -1){
    if (isdigit(q)) {
        l++;
    } else { 
        if (l == 3) l3++;
        l = 0;
    }
}
    if (l == 3) l3++;
    printf("\ntotal num: %d\n", l3);
    return 0;
}
//isdigit() - символы-числа 0-9, isnumber() - любые числа(дроби, римские)(macos)
/*isalpha() - только символы настроенной локали(ASCII по умолчанию), isletter() - что то не из C, 
но в Java есть функция isLetter(), которая выводит true, если символ любая буква из Unicode*/