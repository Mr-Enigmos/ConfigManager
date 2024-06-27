#include "../include/ConfigCore.h"
#include <iostream>
#include <string>

using namespace std;
using namespace stdext;


ConfigCore::ConfigCore() : parent(nullptr)
{
}

ConfigCore::ConfigCore(const ConfigCore& c) : parent(nullptr)
{
	this->M = c.M;
}

ConfigCore& ConfigCore::operator=(ConfigCore& rop)
{
	if (this != &rop)
	{
		this->M = rop.M;
		rop.parent = this;
	}
	return *this;
}

Value& ConfigCore::operator[](string key)
{
	return this->M[key];
}

std::ostream& operator<<(std::ostream& os, const ConfigCore& config)
{

	const char* record_begin = "{\n";
	const char* record_end = "\n}";
	const char* line_delim = ",\n";
	const char* key_value_delim = ": ";

	os << record_begin;

	for (const auto& var : config.M)
	{
		os << '\t' << '\"' << var.first << '\"' << key_value_delim << var.second << ',';
		os << endl;
	}
	os << record_end;
	
	return os;
}

std::ostream& operator<<(std::ostream& os, const ConfigCore* config)
{
	if (config != nullptr)
	{
		os << *config;
	}

	return os;
}
