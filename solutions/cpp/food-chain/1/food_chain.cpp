#include "food_chain.h"

namespace food_chain {

    std::string verse(int len){
        std::string song = "";
        switch(len){
            case 1:
            song.append("I know an old lady who swallowed a fly.\n");
            song.append("I don't know why she swallowed the fly. Perhaps she'll die.\n");
            break;

            case 2:
            song.append("I know an old lady who swallowed a spider.\n");
            song.append("It wriggled and jiggled and tickled inside her.\n");
            song.append("She swallowed the spider to catch the fly.\n");
            song.append("I don't know why she swallowed the fly. Perhaps she'll die.\n");
            break;

            case 3:
            song.append("I know an old lady who swallowed a bird.\n");
            song.append("How absurd to swallow a bird!\n");
            song.append("She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.\n");
            song.append("She swallowed the spider to catch the fly.\n");
            song.append("I don't know why she swallowed the fly. Perhaps she'll die.\n");
            break;

            case 4:
            song.append("I know an old lady who swallowed a cat.\n");
            song.append("Imagine that, to swallow a cat!\n");
            song.append("She swallowed the cat to catch the bird.\n");
            song.append("She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.\n");
            song.append("She swallowed the spider to catch the fly.\n");
            song.append("I don't know why she swallowed the fly. ");
            song.append("Perhaps she'll die.\n");
            break;

            case 5:
            song.append("I know an old lady who swallowed a dog.\n");
            song.append("What a hog, to swallow a dog!\n");
            song.append("She swallowed the dog to catch the cat.\n");
            song.append("She swallowed the cat to catch the bird.\n");
            song.append("She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.\n");
            song.append("She swallowed the spider to catch the fly.\n");
            song.append("I don't know why she swallowed the fly. ");
            song.append("Perhaps she'll die.\n");
            break;

            case 6:
            song.append("I know an old lady who swallowed a goat.\n");
            song.append("Just opened her throat and swallowed a goat!\n");
            song.append("She swallowed the goat to catch the dog.\n");
            song.append("She swallowed the dog to catch the cat.\n");
            song.append("She swallowed the cat to catch the bird.\n");
            song.append("She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.\n");
            song.append("She swallowed the spider to catch the fly.\n");
            song.append("I don't know why she swallowed the fly. ");
            song.append("Perhaps she'll die.\n");
            break;
            
            case 7:
            song.append("I know an old lady who swallowed a cow.\n");
            song.append("I don't know how she swallowed a cow!\n");
            song.append("She swallowed the cow to catch the goat.\n");
            song.append("She swallowed the goat to catch the dog.\n");
            song.append("She swallowed the dog to catch the cat.\n");
            song.append("She swallowed the cat to catch the bird.\n");
            song.append("She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.\n");
            song.append("She swallowed the spider to catch the fly.\n");
            song.append("I don't know why she swallowed the fly. ");
            song.append("Perhaps she'll die.\n");
            break;

            case 8:
            song.append("I know an old lady who swallowed a horse.\n");
            song.append("She's dead, of course!\n");
            break;

        }

        return song;
    }

    std::string verses(int begin, int end){
        std::string song = "";
        for(int i=begin;i<=end;i++){
            song.append(verse(i));
            song.append("\n");
        }

        return song;
    }

    std::string sing(){
        std::string song = "";
        song.append(verses(1,8));
        return song;
    }

}  // namespace food_chain
