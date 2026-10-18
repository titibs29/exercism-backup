#include "protein_translation.h"

namespace protein_translation {
    std::map<std::string,char> codon_map ={
        {"AUG",1},
        {"UUU",2},{"UUC",2},
        {"UUA",3},{"UUG",3}, 
        {"UCU",4},{"UCC",4},{"UCA",4},{"UCG",4},
        {"UAU",5},{"UAC",5},
        {"UGU",6},{"UGC",6},
        {"UGG",7},
        {"UAA",0},{"UAG",0},{"UGA",0},
        };

    std::map<char,std::string> protein_map = {
        {1,"Methionine"},
        {2,"Phenylalanine"},
        {3, "Leucine"},
        {4,"Serine"},
        {5,"Tyrosine"},
        {6,"Cysteine"},
        {7,"Tryptophan"}
        };

    std::vector<std::string> proteins(std::string RNA){
        std::vector<std::string> codons {};
        unsigned int pos=0;
        char selectedProt=0;

        while(pos < RNA.length()){
            selectedProt = codon_map[RNA.substr(pos,3)];

            if(selectedProt == 0) return codons; // STOP condition

            codons.push_back(protein_map[selectedProt]);

            pos+=3;
        }


        return codons;
    }

}  // namespace protein_translation
