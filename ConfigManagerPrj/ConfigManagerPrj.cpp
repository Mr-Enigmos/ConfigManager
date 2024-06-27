// ConfigManagerPrj.cpp: определяет точку входа для приложения.
//

#include "ConfigManagerPrj.h"
#include <string>
#include <map>
#include <variant>
#include <iostream>
#include "include/ConfigCore.h"
#include "include/value.h"

using namespace std;

//using json_char_t = char;

//std::ostream& operator<<(std::ostream& os, const json_char_t& x)
//{
//	//os << "yest";
//	//os << "a";
//	//os << '/' << "x" << '/';
//	//os << '/';
//
//	os << "\'";
//	os.put(x);
//	os << "\'";
//
//	return os;
//}

int main()
{
	cout << "Hello CMake." << endl;

	ConfigCore C ,C2;

	//string key = "One";
	//C[key] = 1;
	//C[key].operator=(1);
	//C[key].F(1);
	//C[key];
	//C.operator[](key);

	//key = "two";
	//C[key] = "Two";

	C2["two"] = "Two";
	C2["three"] = 3.123f;

	C["one"] = 1;
	C["two"] = "Two";
	C["three"] = 3.123f;
	//C["C2"] = &C2;
	C["C2"] = C2;
	C["four"] = true;
	C["five"] = '5';
	C["six"];

	cout << "C=" << C << endl;
	//cout << C["three"] << endl;
	//cout << C["C2"] << endl;
	//auto t = C["three"];
	//cout << t << endl;

	//C["C2"]["three"] = '3';
	//auto v = C["C2"];
	//v["C2"]=

	//Print(C);

	//cout << "sizeof(value)=" << sizeof(value) << endl;

	//value v;

	//cout << "sizeof(v)=" << sizeof(v) << endl;
	//cout << "------------------------" << endl;

	//v.i = 3;
	//cout << "sizeof(v)=" << sizeof(v) << endl;
	//cout << "v.i=" << v.i << endl;
	//cout << "------------------------" << endl;

	//v.f = 1.23;
	//cout << "sizeof(v)=" << sizeof(v) << endl;
	//cout << "v.f=" << v.f << endl;
	//cout << "------------------------" << endl;

	////v.str = "Привет из union";
	////v.str = "Hello union";
	////v.str = new string("Hello union Hello union");
	//v.str = "Hello union Hello union";
	////cout << "sizeof(v)=" << sizeof(v) << endl;
	//cout << "v.str=" << v.str << endl;
	//cout << "------------------------" << endl;

	//string s1 = "";

	//s1 = "Hello union Hello union";

	//cout << "s1=" << s1 << endl;

	//std::variant<bool, char, int, float, std::string, ConfigCore*> v;
	//v = 1;

	Value v;
	//v = 3.25f;
	//v = 5;
	v = "test";
	v = '$';
	v = "test";
	//v.operator=(3.25f);
	cout << "v=" << v << endl;

	//std::string str = "sdf";
	//json_string_t jt = str;
	//jt.operator=(str);
	//jt = str;
	//variant_t vt = jt;
	//json_char_t j_ch = 'j';
	//cout << j_ch << endl;
	// 
	//variant_t vt = "asdf";
	//json_string_t jt = "asfd";
	//variant_t vt = jt;



	return 0;
}
