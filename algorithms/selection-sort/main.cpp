#include <iostream>
#include <string>

using namespace std;

struct Music {
  string name;
  string artist;
  int count_plays;
};

int const MAX_MUSICS = 5;

void population_musics(Music *);
int get_great_play(Music *, bool *);
void selection_sort(Music *&);

int main(int argc, char *argv[]) {
  Music *musics = new Music[MAX_MUSICS];
  population_musics(musics);

  for (int i = 0; i < MAX_MUSICS; i++) {
    cout << musics[i].name << endl;
  }

  cout << "Sort musics" << endl;
  selection_sort(musics);
  for (int i = 0; i < MAX_MUSICS; i++) {
    cout << musics[i].name << endl;
  }

  return 0;
}

void selection_sort(Music *&musics) {
  Music *temp_array = new Music[MAX_MUSICS];
  bool *selected = new bool[MAX_MUSICS]{false};
  int size = MAX_MUSICS;

  for (int i = 0; i < MAX_MUSICS; i++) {
    int great_music = get_great_play(musics, selected);
    cout << great_music << endl;
    temp_array[i] = musics[great_music];
    selected[great_music] = true;
  }

  for (int j = 0; j < MAX_MUSICS; j++) {
    musics[j] = temp_array[j];
  }

  delete[] temp_array;
  delete[] selected;
}

int get_great_play(Music *musics, bool *selected) {
  int index = 0;
  Music *music_great_play = &musics[0];

  for (int i = 0; i < MAX_MUSICS; i++) {
    Music temp = musics[i];

    if (!selected[i] && music_great_play->count_plays < temp.count_plays) {
      music_great_play = &temp;
      index = i;
    }
  }

  return index;
}

void population_musics(Music musics[MAX_MUSICS]) {

  Music music1;
  music1.name = "Deus não está morto";
  music1.artist = "Fernandinho";
  music1.count_plays = 3;

  Music music2;
  music2.name = "Oceano";
  music2.artist = "Ana Nóbrega";
  music2.count_plays = 2;

  Music music3;
  music3.name = "Surrender";
  music3.artist = "Upperroom";
  music3.count_plays = 5;

  Music music4;
  music4.name = "Ousado amor";
  music4.artist = "Isaias saad";
  music4.count_plays = 1;

  Music music5;
  music5.name = "Caminho no deserto";
  music5.artist = "Ana Nóbrega";
  music5.count_plays = 3;

  musics[0] = music1;
  musics[1] = music2;
  musics[2] = music3;
  musics[3] = music4;
  musics[4] = music5;
}
