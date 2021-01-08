//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
    string textline;
    int i=0;
    double num[100], Xbar=0, sd, sum = 0;
    ifstream source ("score.txt");
    while (getline(source,textline)) {
        //cout << textline << endl;
        num[i++] = stod(textline);
        sum += stod(textline.c_str());
    }
    Xbar = sum/i;
    sum =0;
    for (int j=0;j<i;j++) {
       sum += pow((num[j]-Xbar),2);
    }
    sd = sqrt(sum/i);
    cout << "Number of data = " << i <<endl;
    cout << setprecision(3);
    cout << "Mean = " << Xbar <<endl;
    cout << "Standard deviation = " << sd <<endl;
    source.close();
}