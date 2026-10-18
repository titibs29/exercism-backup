#include "allergies.h"

namespace allergies {

    allergy_test::allergy_test(int allergies){

        if(allergies & 0b00000001) this->allergy_list.insert("eggs");
        if(allergies & 0b00000010) this->allergy_list.insert("peanuts");
        if(allergies & 0b00000100) this->allergy_list.insert("shellfish");
        if(allergies & 0b00001000) this->allergy_list.insert("strawberries");
        if(allergies & 0b00010000) this->allergy_list.insert("tomatoes");
        if(allergies & 0b00100000) this->allergy_list.insert("chocolate");
        if(allergies & 0b01000000) this->allergy_list.insert("pollen");
        if(allergies & 0b10000000) this->allergy_list.insert("cats");
    }

    bool allergy_test::is_allergic_to(std::string name){

        std::unordered_set<std::string>::const_iterator got = this->allergy_list.find(name);

        if (got == this->allergy_list.end()) return false;
        return true;

    }

    std::unordered_set<std::string> allergy_test::get_allergies(){
        return this->allergy_list;

    }

}  // namespace allergies
