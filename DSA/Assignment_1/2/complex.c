#include <stdio.h>
#include "complex.h"
#include <math.h>

complex add(complex a, complex b, int n){
    complex c;
    for (int i = 0; i <= n; i++){
        c.coefficients[i] = a.coefficients[i] + b.coefficients[i]; 
    }
    return c; 
}

complex sub(complex a, complex b, int n){
    complex c; 
    for (int i = 0; i <= n; i++){
        c.coefficients[i] = a.coefficients[i] - b.coefficients[i];
    }
    return c; 
} 

float mod(complex a, int n){
    float x; 
    for(int i = 0; i < n; i++){
        x += a.coefficients[i]*a.coefficients[i]; 
    }
    x = pow(x, 0.5); 
    return x; 
}

float dot(complex a, complex b, int n){
    float x; 
    for (int i = 0; i < n; i++){
        x += a.coefficients[i]*b.coefficients[i];
    }
    return x; 
}

float COS(complex *a, complex *b, int n){
    float x;
    x = dot(*a, *b, n)/(mod(*a, n)*mod(*b, n)); 
    return x; 
}
