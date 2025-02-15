int main(){
	std::ifstream inFile;
	std::stringstream converter;
	std::string currentLine;

	std::string sNumb1;
	std::string sNumb2;
	std::string text;

	int numb1;
	int numb2;
	int text;

	inFile.open("data.csv");
	while(getLine(inFile, currentLine)){
		converter.clear();
		converter.str(currentLine);

		getLine(converter, sNumb1, ",");
		getLine(converter, sNumb2, ",");
		getLine(converter, text);

		converter.clear();
		converter.str("");
		converter << sNumb1 << "  " << sNumb2;
	}
