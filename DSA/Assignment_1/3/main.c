#include <stdio.h>
#include "song.h"
#include "musicplayer.h"
#include <string.h>
#include <stdlib.h>

#define STR_LENGTH 50

int main(){
    MusicPlayer *mp = malloc(sizeof(MusicPlayer)); 
    char str[STR_LENGTH]; 
    Song song[100];  
    int song_count = 0; 
    for(;;){
        scanf("%s", str); 
        if (!strcmp(str, "make_song")){
            char SONG[STR_LENGTH]; 
            scanf("%s", SONG); 
            char n[STR_LENGTH], art[STR_LENGTH]; float dur; 
            scanf("%s%s%f", n, art, &dur); 
            strcpy(song[song_count].name, n); 
            strcpy(song[song_count].artist, art); 
            song[song_count].duration = dur; 
            song_count++; 
        }
        else if(!strcmp(str, "create_player")){
            mp = createMusicPlayer();  
        }
        else if(!strcmp(str, "add_song")){
            int n; 
            scanf("%d", &n); 
            int m = addSongToQueue(mp, &song[n - 1]); 
            if (!m){
                exit(0); 
            }
        }
        else if(!strcmp(str, "remove_song")){
            int n; 
            scanf("%d", &n); 
            int m = removeSongFromQueue(mp, n); 
            if(!m){
                exit(0); 
            }
        }
        else if(!strcmp(str, "play_song")){
            playSong(mp); 
        }
        else if(!strcmp(str, "current_song")){
            Song *SONG = getCurrentSong(mp);
            printf("%s by %s\n", SONG -> name, SONG -> artist); 
        }
        else{
            exit(0); 
        } 
    }
}
