#include <stdio.h>
#include "song.h"

Song *makeSong (char *a, char *b, float c){
    Song *song; 
    int i = 0; 
    for (int j = 0; j < NAME_LENGTH; j++){
    song -> name[j] = '\0'; 
    }
    for (int j = 0; j < ARTIST_LENGTH; j++){
    song -> artist[j] = '\0'; 
    }
    for (; a[i] != '\0'; i++){
        song -> name[i] = a[i]; 
    } 
    i = 0; 
    for (; b[i] != '\0'; i++){
        song -> artist[i] = b[i]; 
    } 
    song -> duration = c; 
    return song; 
}
