#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    stringstream ss(str); //convert string to stringstream
    int number;
    char ch;
    std::vector<int> myNumbers; //create a new vec name myNumbers
    while (ss >> number) { //ss push number to number that have type <int> (dynamic array)   
        myNumbers.push_back(number);
        ss >> ch; //push char from ss to ch because if not it will end loop
    }
    return myNumbers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
