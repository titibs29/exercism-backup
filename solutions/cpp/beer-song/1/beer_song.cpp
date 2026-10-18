#include "beer_song.h"

namespace beer_song {

    std::string verse(int num){
        std::stringstream verse;

        if(num == 1){
        verse << num <<" bottle of beer on the wall, " << num << " bottle of beer.\n";
        --num;
        }else if(num == 0){
        verse << "No more bottles of beer on the wall, no more bottles of beer.\n";
        num = 99;
        }else{
        verse << num <<" bottles of beer on the wall, " << num << " bottles of beer.\n";
        --num;
        }
            
        

        if(num == 0){
        verse << "Take it down and pass it around, no more bottles of beer on the wall.\n";
        }
        else if(num == 99){
        verse << "Go to the store and buy some more, " << num << " bottles of beer on the wall.\n";
        }
        else{
        verse << "Take one down and pass it around, " << num << " bottles of beer on the wall.\n";
        }
        

        return verse.str();
    }

    std::string verse_ptr(int* num){
        std::stringstream verse;
        int val = *num;

        if(val == 1){
        verse << val <<" bottle of beer on the wall, " << val << " bottle of beer.\n";
        --val;
        }else if(val == 0){
        verse << "No more bottles of beer on the wall, no more bottles of beer.\n";
        val = 99;
        }else{
        verse << val <<" bottles of beer on the wall, " << val << " bottles of beer.\n";
        --val;
        }
            

        if(val == 0){
        verse << "Take it down and pass it around, no more bottles of beer on the wall.\n";
        }
        else if (val == 1){
        verse << "Take one down and pass it around, " << val << " bottle of beer on the wall.\n";
            
        }
        else if(val == 99){
        verse << "Go to the store and buy some more, " << val << " bottles of beer on the wall.\n";
        }
        else{
        verse << "Take one down and pass it around, " << val << " bottles of beer on the wall.\n";
        }
        
        *num = val;

        return verse.str();
    }

    std::string sing(int begin,int end){
        int val = begin, i = begin-end;
        std::string song="";

        while(i>=0){
            song.append(verse_ptr(&val));
            i--;
            if(i>=0) song.append("\n");
        }

        return song;
    }


}  // namespace beer_song
