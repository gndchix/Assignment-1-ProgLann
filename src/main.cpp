#include <iostream>

using namespace std;

int main(int argc, char ** argv) {

    string name;

    cout << "Silahkan inputkan nama Anda: ";
    std::getline(cin, name);
    cout << "Hello " << name << endl;

    return 0;
}