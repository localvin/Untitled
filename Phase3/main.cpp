//	CSCI 3060/ SOFE 3980 Course Project Front End
//	Group: Untitled
//	Member: Calvin Lo, Albert Fung, Karan Chandwaney
#include "TransactionProcessing.h"

// main function
int main(int argc, char*argv[]) {
	// if one file specified, start terminal input
	if (argc == 2) {
		TransactionProcessing T(argv[1]);
	}
	// if there are two files specified, start file input 
	else if (argc == 3) {
		TransactionProcessing T(argv[1], argv[2]);
	} 
	else {
		cout << "Please indicated the output file and/or input file.\n";
	}

	return 0;
}