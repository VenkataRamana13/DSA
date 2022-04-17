#include <stdio.h>
#include "musicplayer.h"
#include <stdlib.h>

MusicPlayer *createMusicPlayer(){
    MusicPlayer *mp = malloc(sizeof(MusicPlayer)); 
    mp -> song_num = 0; 
    mp -> current_song = 0; 
    return mp;
}

int addSongToQueue(MusicPlayer *mp, Song *SONG){
    mp -> songs[mp -> song_num] = *SONG; 
    mp -> song_num++; 
    return 1;  
}

int removeSongFromQueue(MusicPlayer *mp, int n){
    for (int i = n; i < mp -> song_num; i++){
        mp -> songs[i - 1] = mp -> songs[i]; 
    }
    mp -> song_num--; 
    return 1; 
}

int playSong(MusicPlayer *mp){
    mp -> current_song++; 
    return 1; 
}

Song *getCurrentSong(MusicPlayer *mp){
    Song *SONG;
    *SONG = mp -> songs[mp -> current_song - 1]; 
    return SONG;
}
