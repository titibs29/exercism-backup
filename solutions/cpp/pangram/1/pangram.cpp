#include "pangram.h"

namespace pangram {

    bool is_pangram(std::string texte){

        // text to lower case
        std::transform(texte.begin(), texte.end(), texte.begin(), ::tolower);

        std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
        int count = 0;
        for(unsigned long long lettre=0;lettre< texte.length();lettre++){
            for (unsigned long long i=0;i< alphabet.length();i++){

                if(texte[lettre] == alphabet[i]){
                    alphabet.erase(i,1);
                    count++;
                    break;
                }
            }
        }
        if(alphabet == ""){
            return true;
        }
        return false;

    }

}  // namespace pangram
