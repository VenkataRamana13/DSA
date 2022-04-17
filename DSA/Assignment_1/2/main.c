#include <stdio.h>
#include "complex.h"
#include <string.h>
#include <stdlib.h>

#define STR_LENGTH 20

int main(){
    complex a, b, c; 
    char str[STR_LENGTH]; 
    scanf("%s", str); 
    if (!strcmp(str, "ADD")){
        int N; 
        scanf("%d", &N); 
        for (int i = 0; i < N; i++){ 
            scanf("%f", &a.coefficients[i]); 
        }
        for (int i = 0; i < N; i++){ 
            scanf("%f", &b.coefficients[i]); 
        }
        c = add(a, b, N); 
        for (int i = 0; i < N; i++){
            printf("%f ", c.coefficients[i]); 
        }
        printf("\n"); 
    }

    else if (!strcmp(str, "SUB")){
        int N; 
        scanf("%d", &N); 
        for (int i = 0; i < N; i++){ 
            scanf("%f", &a.coefficients[i]); 
        }
        for (int i = 0; i < N; i++){ 
            scanf("%f", &b.coefficients[i]); 
        }
        c = sub(a, b, N); 
        for (int i = 0; i < N; i++){
            printf("%f ", c.coefficients[i]); 
        }
        printf("\n"); 
    }

    else if (!strcmp(str, "MOD")){
        int N; 
        scanf ("%d", &N); 
        for (int i = 0; i < N; i++){ 
            scanf("%f", &a.coefficients[i]); 
        }
        printf("%.2f\n", mod(a, N));
    }
    
    else if (!strcmp(str, "DOT")){
        int N; scanf ("%d", &N); 
        for (int i = 0; i < N; i++){ 
            scanf("%f", &a.coefficients[i]); 
        }
        for (int i = 0; i < N; i++){ 
            scanf("%f", &b.coefficients[i]); 
        }
        printf("%.2lf\n", dot(a, b, N)); 
    }

    else if (!strcmp(str, "COS")){
        int N; scanf ("%d", &N); 
        for (int i = 0; i < N; i++){ 
            scanf("%f", &a.coefficients[i]); 
        }
        for (int i = 0; i < N; i++){ 
            scanf("%f", &b.coefficients[i]); 
        }
        float mod1 = mod(a, N), mod2 = mod(b, N); 
        printf("%f %f\n", mod1, mod2); 
        float dot1 = dot(a, b, N); 
        printf("%f\n", dot1); 
        mod1 = mod1 * mod2; 
        printf("%f\n", dot1/mod1); 
    }
    
    else {
        exit(0); 
    }
}
