#include <iostream>

void simple();
using namespace std;

int main(){
    cout << "main() will call the simple() function" << endl;
    simple();
    cout << "finish";
    return 0;
}

void simple(){
    cout << "i`m but a simple function";
}