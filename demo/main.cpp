#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	if (argc == 2) {
		string s(argv[1]); 
		if (s == "Maillot") {
			cout << "Vive Java et le génie logiciel" << endl;
		} else {
			cout << "Ce nom n'est pas encore enregistré" << endl;
		}
	} else {
		cerr << "usage : message <nom>" << endl;
	}
}

