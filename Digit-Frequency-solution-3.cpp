#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count[10]={0};
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);  
    for(int i=0; i<strlen(s); i++){
        int diff = s[i] - (char)'0';
        if(diff <= 9){
            count[diff]++;
        }        
    }
    for(int j=0; j<10; j++){
        printf("%d ",count[j]);
    }
    return 0;
}

