#pragma once

#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS // что бы не ругался hash_map

#include "../include/value.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <hash_map>
#include <variant>


//using Value = variant<bool, char, int, float, string, ConfigCore>;

class ConfigCore
{
public:
	ConfigCore();
	ConfigCore(const ConfigCore& c);
	ConfigCore& operator=(ConfigCore& rop);
private:
	ConfigCore *parent;
	//unordered_map<string, Value> R;
	stdext::hash_map<std::string, Value> M;
public:
	Value& operator[](std::string key);

	//friend ostream& operator<<(ostream& os, const ConfigCore::Value& v);
	//friend ostream& operator<<(ostream& os, const Value& v);
	friend std::ostream& operator<<(std::ostream& os, const ConfigCore& config);
	friend std::ostream& operator<<(std::ostream& os, const ConfigCore* config);
};
