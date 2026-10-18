#include "bob.h"

namespace bob {

    std::string hey(std::string watcha_say){
        std::string answer = "";
        bool capital=false, question = false, lowercase = true, asLetter = false;
        if(watcha_say.empty())return "Fine. Be that way!";

        for(char letter: watcha_say){
            if(lowercase && isupper(letter) && isalpha(letter)) capital = true;
            if(capital && islower(letter) && isalpha(letter)) {capital = false; lowercase = false;}
            if(letter == '?') question = true;
            if(isalpha(letter) && question) question = false;
            if(!(letter == ' ' || letter == '\t' || letter == '\n' || letter == '\r')) asLetter = true;
        }

        if(capital && !question) answer = "Whoa, chill out!";
        else if(!capital && question) answer = "Sure.";
        else if(capital && question) answer = "Calm down, I know what I'm doing!";
        else if(!asLetter) answer = "Fine. Be that way!";
        else answer = "Whatever.";

        return answer;
    }

}  // namespace bob
