
#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;


class PlayerInfo
{
public:
	// player info 
	int	id = 0;
	string name = "";
	string dateOfBirth = "";
	string country = "";
	string email = "";
	// player game data
	int currentLevel = 0;
	int remainingLives = 0;
	int bulletsCount = 0;
	int maxLevelReached = 0;
	// player preferences
	string language = "";
	int volumeLevel = 0;
	string graphicQuality = "";
	int difficultyLevel = 0;

	PlayerInfo();
	~PlayerInfo();

};


