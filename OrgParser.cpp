#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

#include "OrgParser.h"

using namespace std;

OrgParser::OrgParser() {
}

OrgParser::~OrgParser() {
}


// trim from start (in place)
void OrgParser::ltrim(std::string &s) const {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
		return !std::isspace(ch);
	}));
}

// trim from end (in place)
void OrgParser::rtrim(std::string &s) const {
	s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
		return !std::isspace(ch);
	}).base(), s.end());
}

// trim from both ends (in place)
void OrgParser::trim(std::string &s) const {
	this->ltrim(s);
	this->rtrim(s);
}


std::string OrgParser::readFileContent(const std::string& filePath) const {
	std::string fileContent = "";
	ifstream in(filePath);
	ifstream::pos_type fileSize = in.tellg();

	cout << "File size " << fileSize << endl;

	vector<std::string> content;
	ifstream input(filePath);
	string line;
	while (getline(input, line)){
		trim(line);
		int commentPos = line.find("#");
		if (commentPos != std::string::npos) {
			line.erase(commentPos, line.length());
		}

		if (! line.empty()) {
			fileContent += line;
		}
	}
	return fileContent;
}
