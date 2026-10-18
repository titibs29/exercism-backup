#include "phone_number.h"

namespace phone_number
{

    phone_number::phone_number(std::string phoneNumber)
    {
        /*
        valid:
            +1 (613)-995-0253
            613-995-0253
            1 613 995 0253
            613.995.0253
        invalid:
            113.995.0253
            61399502532
            +2 (613)-995-0253
        */
        // /.*(\d{1})?.*([2-9]{1}\d{2}).*([2-9]{1}\d{2}).*(\d{4})/g

        bool flag = true;
        for (unsigned int letter = 0; letter < phoneNumber.length(); ++letter)
        {
            switch (phoneNumber.at(letter))
            {
            case '0':
            case '1':
                if(flag){
                    flag = false;
                    break;
                }
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                Number.push_back(phoneNumber.at(letter));
                flag = false;
                break;
            }
        }

        


        if (Number.size() > 10)
            throw std::domain_error("too big");
        if (Number.size() < 10)
            throw std::domain_error("too short");
        if (Number.at(0) == '1')
            throw std::domain_error("first index not good");
        if (Number.at(3) == '1')
            throw std::domain_error("second index not good");
        if (Number.at(0) == '0')
            throw std::domain_error("first index not good");
        if (Number.at(3) == '0')
            throw std::domain_error("second index not good");
    }

    std::string phone_number::number()
    {
        return this->Number;
    }

    std::string phone_number::area_code()
    {
        std::string area = "";

            area.push_back(Number.at(0));
            area.push_back(Number.at(1));
            area.push_back(Number.at(2));
        return area;
    }

    phone_number::operator std::string() const{
        std::string res = "(";
        res.push_back(Number.at(0));
        res.push_back(Number.at(1));
        res.push_back(Number.at(2));
        res.append(") ");
        res.push_back(Number.at(3));
        res.push_back(Number.at(4));
        res.push_back(Number.at(5));
        res.push_back('-');
        res.push_back(Number.at(6));
        res.push_back(Number.at(7));
        res.push_back(Number.at(8));
        res.push_back(Number.at(9));

        return res;
    }


} // namespace phone_number
