//
//  TTTGrid.hpp
//  Unit 6 No Brainer: TicTacToe
//
//  Created by Coleton Watt on 10/11/21.
//

#ifndef TTTGrid_hpp
#define TTTGrid_hpp

#include <stdio.h>
#include <iostream>
using std::ostream;
using std::endl;

enum{X = 'X', O = 'O'};

class TTTGrid{
public:
    const int SIZE = 3;
    TTTGrid();
    void switchPlayer();
    void selectMove(char);
    
    bool hasWon();
    
    char getCurrentPlayer();
    friend ostream &operator <<(ostream&, const TTTGrid &);
private:
    char grid[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
        
    };
    char player;
    
};

#endif /* TTTGrid_hpp */
