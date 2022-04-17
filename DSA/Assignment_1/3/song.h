#ifndef __SONG_H_
#define __SONG_H_

#define NAME_LENGTH 100 
#define ARTIST_LENGTH 50 

typedef struct Song{
    char name[NAME_LENGTH];
    char artist[ARTIST_LENGTH]; 
    float duration;
}Song; 

struct Song *makeSong (char *, char *, float); 

#endif
