#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomizer(char *s, const int len) {
    static const char alphanum[] =
        "0123456789@.-_"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) 
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
        
    s[len] = 0;
}

int main(void) {
    char *str = malloc(32 + 1);
    srand(time(NULL));  
    randomizer(str, 32);
    printf("%s\n", str);
    free(str);
    return 0;
}
