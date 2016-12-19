#pragma once
#include <iostream>
#include <fstream>
#include <iostream>
#include <sstream>
#include "PlayerInfo.h"

using namespace std;

class JsonParser
{
public:

	JsonParser();
	//using jsonparser calls the function WriteToFile
	void writejson(string filename, PlayerInfo playerdata);
	PlayerInfo readjson(string filename);

	~JsonParser();

};