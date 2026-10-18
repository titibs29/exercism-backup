#include "rna_transcription.h"

namespace rna_transcription {

    std::string to_rna(std::string dna) {
        std::string rna= "";
        for(auto i = 0ULL; i<dna.length();i++){
            switch ( dna.at(i) ){
            case 'G':
                rna.append("C");
                break;
            case 'C':
                rna.append("G");
                break;
            case 'T':
                rna.append("A");
                break;
            case 'A':
                rna.append("U");
                break;                 
            }
        }
        return rna;
    };


    char to_rna(char dna) {
        char rna;
            switch ( dna ){
            case 'G':
                rna='C';
                break;
            case 'C':
                rna='G';
                break;
                case 'T':
                rna='A';
                break;
                case 'A':
                rna='U';
                break;
                default:
                throw std::invalid_argument("not handled");
            }
        return rna;
    };

}  // namespace rna_transcription
