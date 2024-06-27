#include "../include/value.h"

#include "../include/ConfigCore.h"
#include <iostream>

Value& Value::operator=(const Value& rop)
{
	if (this != &rop)
		this->value = rop.value;

	return *this;
}

Value& Value::operator=(const variant_t& rop)
{
	this->value = rop;
	return *this;
}

Value& Value::operator=(const ConfigCore& rop)
{
	*this= (ConfigCore*)&rop;

	return *this;
}

std::ostream& operator<<(std::ostream& os, const Value& v)
{
	if (std::holds_alternative<char>(v.value))
	{
		os << "\'" << get<char>(v.value) << "\'";
	}
	else if (std::holds_alternative<std::string>(v.value))
	{
		os << "\"" << get<std::string>(v.value) << "\"";
	}
	//else if (std::holds_alternative<ConfigCore*>(v.value))
	//{
	//	//if (v.value != nullptr)
	//	os << *get<ConfigCore*>(v.value);
	//}
	else
	{
		std::visit([&](const auto& obj) { os << obj; }, v.value);
	}
	return os;
}
