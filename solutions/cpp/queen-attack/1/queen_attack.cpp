#include "queen_attack.h"

namespace queen_attack {

    chess_board::chess_board (std::pair<int,int> white, std::pair<int,int> black){

        // the pos must be positive
        if(white.first < 0 || white.second < 0
        || black.first < 0 || black.second < 0) throw std::domain_error("out of range");

        // the pos must be on the board
        if(white.first >= board_side || white.second >= board_side
        || black.first >= board_side || black.second >= board_side) throw std::domain_error("out of range");

        // for yach tile
        for(int x=0;x<board_side;x++){
            for(int y=0;y<board_side;y++){

                // the white queen tile
                if(x == white.first && y == white.second){
                    chess_board::board.insert( std::pair<std::pair<int,int>,char>({x,y},'w') );
                    White={x,y};

                }
                // the black queen tile
                 else if(x == black.first && y == black.second){
                    chess_board::board.insert( std::pair<std::pair<int,int>,char>({x,y},'b') );
                    Black={x,y};
                }
                // if the tile is blank
                else{
                    chess_board::board.insert( std::pair<std::pair<int,int>,char>({x,y},'_') );
                }
            }
        }

    }

    std::pair<int,int> chess_board::white() const{
        return White;
    }

    std::pair<int,int> chess_board::black() const{
        return Black;
    }

    bool chess_board::can_attack() const{
        // if on the same x
        if(White.first == Black.first) return true;

        // if on the same y
        if(White.second == Black.second) return true;

        // if diagonal
        if(abs(White.first-Black.first) == abs(White.second-Black.second)) return true;
        

        return false;
    }

}  // namespace queen_attack
