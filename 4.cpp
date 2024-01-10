#include <iostream>
using namespace std;

int DemoConsoleOutput();

int main() {
    DemoConsoleOutput();
    return 0;
}

int DemoConsoleOutput() {
    cout << "This is a simple string literal" << endl;
    cout << "Writing number 5: " << 5 << endl;
    cout << "Pi approximation is: " << 22/7 << endl;

    return 0;
}