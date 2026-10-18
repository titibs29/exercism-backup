#if !defined(BEER_SONG_H)
#define BEER_SONG_H

#include <string>
#include <sstream>

namespace beer_song {

    std::string verse(int num=1);
    std::string verse_ptr(int* num);

    std::string sing(int begin,int end=0);

}  // namespace beer_song

#endif // BEER_SONG_H