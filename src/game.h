#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "schedule.h"

// Function Prototypes

// Initializes the game and manages the overall game flow.
void startGame();

// Prompts the player to choose a major and sets up the corresponding schedule.
void chooseMajor(Player& player, Schedule& schedule);

// Handles the scenario where the player wakes up and makes choices affecting their day.
void wakingUpScenario(Player& player, Schedule& schedule, int testReadinessScore);

// Randomly selects two classes for the player to attend and processes the outcomes.
void goToClassScenario(Player &player, Schedule &schedule, int testReadinessScore);

void giveExam(const std::string& className, int testReadinessScore);

#endif // GAME_H
