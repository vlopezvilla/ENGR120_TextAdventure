#include <iostream>
#include "game.h"

int main() {
    std::cout << "Welcome to the Text Adventure Game!\n"; //We can give it a more creative title lol
    std::cout << "To start the game choose your major.\n\n";

    // Start the game
    startGame();

    std::cout << "Thank you for playing!\n";
    return 0;
}