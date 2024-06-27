#pragma once

#include <iostream>
#include <string>
#include <variant>

class ConfigCore;

using variant_t = std::variant<bool, char, int, float, std::string, ConfigCore*>;


class Value
{
private:
	variant_t value;
	
public:

	Value& operator=(const Value& rop);
	Value& operator=(const variant_t& rop);
	Value& operator=(const ConfigCore& rop);

	friend std::ostream& operator<<(std::ostream& os, const Value& v);

};
