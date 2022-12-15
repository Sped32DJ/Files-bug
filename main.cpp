#include <fstream>
#include <iostream>
#include <sstream> //istringstream
#include <string>

using namespace std;

int main() {

  string line, word;

  ifstream newitem1;

  newitem1.open("words.txt");

  istringstream iss;

  while (!newitem1.eof()) {

    getline(newitem1, line);

    if (newitem1.good()) {

      iss.clear();
      iss.str(line);

      while (iss.good()) {

        iss >> word;

        cout << word << endl;
      }
    }
  }
}