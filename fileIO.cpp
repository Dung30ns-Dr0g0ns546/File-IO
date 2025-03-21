#include <iostream>
#include <fstream>
#include <sstream>


int main(){
	std::ifstream inFile;
	std::stringstream converter;
	std::string currentLine;

	std::string sNumb1;
	std::string sNumb2;
	std::string text;

	int numb1;
	int numb2;

	inFile.open("data.csv");
	while(getline(inFile, currentLine)){

		converter.clear();
		converter.str(currentLine);

		getline(converter, sNumb1, ',');
		getline(converter, sNumb2, ',');
		getline(converter, text);

		converter.clear();
		converter.str("");
		converter << sNumb1 << "  " << sNumb2;

		converter >> numb1 >> numb2;

		int sum = numb1 + numb2;
		
		std::cout << sum;

	}

	return 0;
