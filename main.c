#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "hello";
    size_t length = strlen(str);
    printf("%s %zu\n", str, length);
    return 0;
}