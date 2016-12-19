#include "stdafx.h"
#include "jsonParser.h"
#include <sstream>
#include <fstream>
#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
// using the boost libary for this task
using namespace std;
namespace pt = boost::property_tree;

JsonParser::JsonParser()
{
}

void JsonParser::writejson(string filename, PlayerInfo playerinfo)
{
	pt::ptree root;
	// all of the infomation will be taken from playerinfo and passed through the jsonparser
	root.put("id", playerinfo.id);
	root.put("name", playerinfo.name);
	root.put("dateOfBirth", playerinfo.dateOfBirth);
	root.put("country", playerinfo.country);
	root.put("email", playerinfo.email);
	root.put("currentlevel", playerinfo.currentLevel);
	root.put("remaininglives", playerinfo.remainingLives);
	root.put("bulletsCount", playerinfo.bulletsCount);
	root.put("maxLevelReached", playerinfo.maxLevelReached);
	root.put("language", playerinfo.language);
	root.put("volumeLevel", playerinfo.volumeLevel);
	root.put("graphicQuality", playerinfo.graphicQuality);
	root.put("difficultyLevel", playerinfo.difficultyLevel);

	pt::write_json(std::cout, root); 
	//shows the data being written on the console
	pt::write_json(filename, root);

}

PlayerInfo JsonParser::readjson(string filename)
{
	pt::ptree root;
	pt::read_json(filename, root);

	PlayerInfo read = PlayerInfo();

	read.id = root.get<int>("id", 0);
	read.name = root.get<string>("name", "");
	read.dateOfBirth = root.get<int>("dateOfBirth", 0);
	read.country = root.get<string>("country", "");
	read.email = root.get<string>("email", "");
	read.currentLevel = root.get<int>("gamedata.currentLevel", 0);
	read.remainingLives = root.get<int>("gamedata.remainingLives", 0);
	read.bulletsCount = root.get<int>("gamedata.bulletsCount", 0);
	read.maxLevelReached = root.get<int>("gamedata.maxLevelReached", 0);
	read.language = root.get<string>("preference.language", "");
	read.volumeLevel = root.get<int>("preference.volumeLevel", 0);
	read.graphicQuality = root.get<string>("preference.graphicQuality", "");
	read.difficultyLevel = root.get<int>("preference.difficultyLevel", 0);

	return read;

}


JsonParser::~JsonParser()
{
}
