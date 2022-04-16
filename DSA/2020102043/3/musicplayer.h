#ifndef __MUSIC_PLAYER_
#define __MUSIC_PLAYER_

#include "song.h"

#define MAX_SONGS 1000

typedef struct MusicPlayer{
    int song_num; 
    Song songs[MAX_SONGS]; 
    int current_song; 
}MusicPlayer; 

MusicPlayer *createMusicPlayer(); 

int addSongToQueue(MusicPlayer *, Song *); 

int removeSongFromQueue(MusicPlayer *, int); 

int playSong(MusicPlayer *); 

Song *getCurrentSong(MusicPlayer *);

#endif
