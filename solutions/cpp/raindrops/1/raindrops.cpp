#include "raindrops.h"

namespace raindrops {

    std::string convert(int value){

        std::string retour = "";

        if( (value %3 ) == 0 ){
            retour.append("Pling");
        }
        if ( (value % 5) == 0 ){
            retour.append("Plang");
        }
        if ( (value % 7) == 0 ){
            retour.append("Plong");
        }
        if( (value %3 ) && (value % 5) && (value % 7) ){
            retour.append(std::to_string(value));
        }

        return retour;

    }

}  // namespace raindrops
