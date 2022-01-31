#include <stdio.h>
#include <stdlib.h>


// Example use case:
// Input -> "1800what am I doing here???"
// Output -> "1800"


int main() {

    char *str = (char *) malloc(sizeof(char) * 30);
    char *ptr;
    int x, temp;

    // Scan in a value using a character pointer, or character array.
    scanf("%s", str);

    // This will eat all extra values. Or, you could just use a scanf alternative like "getchar()".
    while ((temp = getchar() != '\n') && temp != EOF);

    // str = The string with the data we wish to extract.
    // ptr = Temp value holder.
    // 10 = The base of the value. For example 2 would be binary.
    x = (int) strtol(str, &ptr, 10);

    printf("%d\n", x);
    
    // Testing while(...) loop actually ate uneeded characters.
    scanf("%s", str);
    printf("%s\n", str);

    return 0;
}
