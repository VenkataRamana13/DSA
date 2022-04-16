#ifndef __COMPLEX_H_
#define __COMPLEX_H_

#define MAX_DIMENSION 100000

typedef struct complex{
    float coefficients[MAX_DIMENSION]; 
} complex;

complex add(complex a, complex b, int n); 

complex sub(complex a, complex b, int n); 

float mod(complex a, int n); 

float dot(complex a, complex b, int n); 

float COS(complex *a, complex *b, int n); 

#endif
