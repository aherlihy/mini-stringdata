/*
 * main.cpp
 *
 *  Created on: Nov 10, 2014
 *      Author: annaherlihy
 */

#include <stdio.h>
#include <iostream>
#include "string_data.h"


// this function the argument should be changed to value not const ref
void constref_arg(const mongo::StringData& d) {
	printf("Ref arg: %s\n", d.rawData());
}
// this function can should the same
void string_arg(mongo::StringData d) {
	printf("Str arg: %s\n", d.rawData());
}
int param_construction(void) {
	string_arg("StringData('str')");
	constref_arg("StringData('str')");

	char* ch = "StringData(char*)";
	string_arg(ch);
	constref_arg(ch);

	//string_arg("StringData('str', 22)", 22);
	//constref_arg(("StringData('str', 22)", 22));

	std::string s("StringData(std::string)");
	string_arg(s);
	constref_arg(s);

	//string_arg(("StringData('str', LiteralTag)", mongo::StringData::LiteralTag()));
	//constref_arg(("StringData('str', LiteralTag)", mongo::StringData::LiteralTag()));
	
	mongo::StringData sd("StringData(StringData))");
	string_arg(sd);
	constref_arg(sd);

}

int var_construction(void) {


	mongo::StringData a;
	printf("%s\n", a.rawData());
	
	mongo::StringData b("StringData('str')");
	printf("%s\n", b.rawData());
	
	const char* ch = "StringData(const char*)";
	mongo::StringData c(ch);
	printf("%s\n", c.rawData());
	
	mongo::StringData d("StringData('str', 22)", 22);
	printf("%s\n", d.rawData());
	
	const std::string st("StringData(std::string)");
	mongo::StringData e(st);
	printf("%s\n", e.rawData());

	char ar[20] = "StringData(char[])";
	mongo::StringData f(ar);
	printf("%s\n", c.rawData());

	char ear[5] = "0x";
	mongo::StringData g(ear, mongo::StringData::LiteralTag());
	printf("%s\n", g.rawData());
	
}

int main(void) {
	param_construction();
}
