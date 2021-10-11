//
//  main.cpp
//  Unit 6 No Brainer: TicTacToe
//
//  Created by Coleton Watt on 10/11/21.
//

#include <iostream>
#include "TTTGrid.hpp"

using std::cin,std::cout,std::endl;

int main() {
    TTTGrid game;
    char choice;
    for(int i = 0; i < 9; i++){
        //system("clear"); doesn't work for mac/xcode
        cout << "Tic Tac Toe"<< endl;
        cout << game;
        cout << endl << game.getCurrentPlayer() << "\'s turn\n";
        cin >> choice;
        
        game.selectMove(choice);
        if(game.hasWon()){
            cout << game.getCurrentPlayer() << " WINS\n";
            break;
            
        }else{
            game.switchPlayer();
        }
            
    }
    
    
   
    
    return 0;
}
