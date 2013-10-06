#include <iostream> 
using namespace std;

int main(int argc, char* argv[]) { 
	cout << "argc = " << argc << endl; 
	cout << "argv[0] = " << argv[0] << endl << endl; 

	for(int i = 1; i < argc; i++){
	cout << "argv[" << i << "] = " << argv[i] << endl; 
	}
	// return 0;  
	system("pause"); 
}
