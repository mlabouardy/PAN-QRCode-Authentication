#include "Challenge.h"

Challenge::Challenge()
{
    //ctor
}

Challenge::~Challenge()
{
    //dtor
}

Challenge::Challenge(string username,int challenge){
	this->username=username;
	this->challenge=challenge;
}


string Challenge::getUsername(){
	return username;
}

int Challenge::getChallenge(){
	return challenge;
}
