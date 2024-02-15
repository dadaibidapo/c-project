#include <fstream>
#include <iostream>

using namespace std;

int main(){
	//variable
	ifstream inputFile; //input file
	ofstream outputFile; //output file
	
	// open input
	inputFile.open("file.txt");
	if(!inputFile.is_open()){
		cout<<"Error opening input file \n";
		return 0;
	}
	
	// open output 
	outputFile.open("output.txt");
	if(!outputFile.is_open()){
		cout<<"Error opening output file \n";
		return 0;
	}	
	
	//read from file
	int i_fromFile = 0;
	while(inputFile >> i_fromFile){
		int result = i_fromFile * 2;
		outputFile<<result<<endl;
	}
	
	//close files
	inputFile.close();
	outputFile.close();
	
	return 0;
	
}
