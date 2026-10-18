#include "atbash_cipher.h"

namespace atbash_cipher {


    std::string encode(std::string plain){
        std::string cipher="";
        int i=0;

        for(char letter: plain){
            // add the space
            if(i>=5 && letter >= 'a' && letter <= 'z'){
                cipher.append(" ");
                i=0;
            }
            // lowering
            if(letter >= 'A' && letter <= 'Z') letter +=32;

            // ciphing
            if(letter >= 'a' && letter <= 'z') {
                cipher.push_back('z'-(letter-97));
                i++;
            }else if(letter >='0' && letter <= '9'){
                cipher.push_back(letter);
                i++;
            }
        }

        return cipher;
    }

    std::string decode(std::string cipher){
        std::string plain="";
        int i=0;

        for(char letter: cipher){
            //plainTexting
            if(letter >= 'a' && letter <= 'z') {
                plain.push_back('z'-(letter-97));

            // remove the space
            }else if(letter == ' '){

            // every other sign must be transfered
            }else{
                plain.push_back(letter);
            }
        }

        return plain;

    }

}  // namespace atbash_cipher
