#include <stdio.h>
#include <stdlib.h>

int main() {

    char* str = (char*) malloc (sizeof(char) * 30);
    char* ptr;
    int x;

    scanf("%s", str);
  
    // str contains the value we wish to parse
    // temp value holder
    // base: decimal (10) ; binary (2)
    x = (int) strtol(str, &ptr, 10);

    printf("%d", x);

    return 0;
}
