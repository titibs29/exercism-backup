#include "secret_handshake.h"

namespace secret_handshake {

    std::vector<std::string> commands(int code){
        std::vector<std::string> outList={};

        // reverse the string
        bool reverse=false;
        if(code & 0b00010000) reverse = true;

        // wink
        if(code & 0b00000001){
            if(reverse) outList.insert(outList.cbegin(),"wink");
            else outList.push_back("wink");
        }

        // double blink
        if(code & 0b00000010){
            if(reverse) outList.insert(outList.cbegin(),"double blink");
            else outList.push_back("double blink");
        }

        // close your eyes
        if(code & 0b00000100){
            if(reverse) outList.insert(outList.cbegin(),"close your eyes");
            else outList.push_back("close your eyes");
        }

        // jump
        if(code & 0b00001000){
            if(reverse) outList.insert(outList.cbegin(),"jump");
            else outList.push_back("jump");
        }

        return outList;
    }


}  // namespace secret_handshake
