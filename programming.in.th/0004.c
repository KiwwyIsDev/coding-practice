#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[10001];
    int lower = 0; 
    int upper = 0;
    
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i ++) {
        if ('a' <= str[i] && str[i] <= 'z') { 
            lower = 1;
        } 
        if ('A' <= str[i] && str[i] <= 'Z') {
            upper = 1;
        }
    }

    if (lower && upper) {
        printf("Mix");
    } else if (lower) {
        printf("All Small Letter");
    } else {
        printf("All Capital Letter");
    }
    return 0;
}