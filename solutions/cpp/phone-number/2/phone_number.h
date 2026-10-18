#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H

#include <string>
#include <regex>

namespace phone_number {

    class phone_number{
        private:
            std::string Number="";

        public:

            phone_number(std::string phoneNumber);
            std::string number();
            std::string area_code();
            operator std::string() const;
            

    };

}  // namespace phone_number

#endif // PHONE_NUMBER_H