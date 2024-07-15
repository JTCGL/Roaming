#pragma once

#include <iostream>
#include <string>
#include <memory>
#include <list>
#include <vector>

class thingbase {
	public:
	virtual std::string StrName() const =0;
	virtual ~thingbase(){};
};

class thing : public thingbase {
	float fNum =1.f;
	std::string sName = "default";
	public:
	thing(){}
	thing(std::string name) : sName(name){}
	const std::string Name() const { return sName;}
	const char* CharName() const { return sName.c_str();}
	const float Number() const { return fNum;}
	void StrName(std::string namein) {
		sName=namein;
	}
	//inherited
	std::string StrName() const {return sName;}
};

