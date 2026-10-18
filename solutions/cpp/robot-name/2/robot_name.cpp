#include "robot_name.h"

namespace robot_name {

    std::unordered_set<std::string> robots_list = {};

    robot::robot(){

        do{
            Name=""; // start blank

             Name.push_back(alphabet.at(rand()%26)); // add a uppercase letter
             Name.push_back(alphabet.at(rand()%26));
             Name.append(std::to_string(rand()%10)); // add a number
             Name.append(std::to_string(rand()%10));
             Name.append(std::to_string(rand()%10));


        }while(robots_list.find(Name) != robots_list.cend());

        robots_list.insert(Name);

    }

    std::string robot::name() const{
        return Name;
    }

    void robot::reset(){
        // robots_list.erase(Name);

        do{
            Name=""; // start blank

             Name.push_back(alphabet.at(rand()%26)); // add a uppercase letter
             Name.push_back(alphabet.at(rand()%26));
             Name.append(std::to_string(rand()%10)); // add a number
             Name.append(std::to_string(rand()%10));
             Name.append(std::to_string(rand()%10));


        }while(robots_list.count(Name) != 0);

        robots_list.insert(Name);

    }

}  // namespace robot_name
