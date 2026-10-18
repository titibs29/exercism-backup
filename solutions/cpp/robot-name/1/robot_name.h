#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H

#include <string>
#include <random>
#include <unordered_set>

namespace robot_name {

    


    class robot{
        private:
            std::string Name;
            std::string alphabet={"AZERTYUIOPQSDFGHJKLMWXCVBN"};

        public:
            robot();


            std::string name() const;

            void reset();


    };

}  // namespace robot_name

#endif // ROBOT_NAME_H