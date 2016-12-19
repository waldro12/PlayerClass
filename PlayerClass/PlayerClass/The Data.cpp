#include "stdafx.h"
#include <iostream>
#include <string>
#include "jsonParser.h"
#include "playerInfo.h"

using namespace std;

int main()
{
	string value = "";
	JsonParser jsonParser = JsonParser();


	// the data which will be passed into the player data varibles
	PlayerInfo playerdata = PlayerInfo();
	playerdata.name = "Phoenix";
	playerdata.id = 100;
	playerdata.dateOfBirth = "13/01/1996";
	playerdata.country = "England";
	playerdata.email = "phoenixwaldron1996@gmail.com";
	playerdata.bulletsCount = 100;
	playerdata.currentLevel = 1;
	playerdata.remainingLives = 3;
	playerdata.maxLevelReached = 1;
	playerdata.language = "welsh";
	playerdata.volumeLevel = 100;
	playerdata.graphicQuality = "High";
	playerdata.difficultyLevel = 3;

	//writes the file using a json parser as JSONwrite using the player data
	jsonParser.writejson("JSONwrite.json", playerdata);
	//also exported as txt just to make sure data was correct when in debugging stage
	jsonParser.writejson("JSONwrite.txt", playerdata);		

    return 0;
}

