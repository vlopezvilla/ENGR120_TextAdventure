#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "Schedule.h"

// Function Prototypes

// Initializes the game and manages the overall game flow.
void startGame();

// Prompts the player to choose a major and sets up the corresponding schedule.
void chooseMajor(Player& player, Schedule& schedule);

// Handles the scenario where the player wakes up and makes choices affecting their day.
void wakingUpScenario(Player& player, Schedule& schedule);

// Randomly selects two classes for the player to attend and processes the outcomes.
void goToClassScenario(Player &player, Schedule &schedule);

#endif // GAME_H