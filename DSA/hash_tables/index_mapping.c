#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

void insert(int *, int, bool[MAX][2]); 
bool search(bool[MAX][2], int); 

bool matrix[MAX][2]; 

int main(){
    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < 2; j++){
            matrix[i][j] = 0; 
        }
    }
    int a[MAX], i = 0, j = 0; 
    while (1){
        scanf("%d", &a[i]);  
        if (a[i] == 0){ j = i + 1; break; }
        i++; 
    }
    insert(a, j, matrix); 
    printf("Number to be searched: " ); 
    scanf("%d", &i); 
    if (search(matrix, i)){printf("found\n");}
    else printf("not here\n"); 
}
 
void insert(int *a, int n, bool matrix[MAX][2]){
    for(int i = 0; i < n; i++){
        if (a[i] >= 0){
            matrix[a[i]][0] = 1; 
        }
        else {
            matrix[-a[i]][1] = 1; 
        } 
    }
}

bool search(bool matrix[MAX][2], int a){
    if(a >= 0){
        if (matrix[a][0])
            return 1; 
        else return 0;  
    }
    else {
        if (matrix[-a][1]) return 1; 
        else return 0; 
    }
}
