#include <stdio.h>
#include <stdlib.h>

int main() {

    char *str = (char *) malloc(sizeof(char) * 30);
    char *ptr;
    int x, temp;

    scanf("%s", str);
    while ((temp = getchar() != '\n') && temp != EOF);

    x = (int) strtol(str, &ptr, 10);

    printf("%d\n", x);

    scanf("%s", str);
    printf("%s\n", str);

    return 0;
}
