#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#define board_side 8

#include <utility>
#include <map>
#include <stdexcept>
#include <math.h>

namespace queen_attack {

    class chess_board{
    private:
        std::map<std::pair<int,int>,char> board;
        std::pair<int,int> White;
        std::pair<int,int> Black;



    public:

        chess_board (std::pair<int,int> white, std::pair<int,int> black);
        bool can_attack() const;
        std::pair<int,int> white() const;
        std::pair<int,int> black() const;



    };

}  // namespace queen_attack

#endif // QUEEN_ATTACK_H