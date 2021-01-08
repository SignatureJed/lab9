#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	string textline;
	cout << "-------------------- BOOM ---------------------" << endl;
	for (int i=0;i<9;i++) {
	getline(source,textline);
	cout << textline << endl;
	}
    cout << "-------------------- HA!! ---------------------" << endl;


    source.close();
    dest.close();
	return 0;
}
