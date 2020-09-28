#include <iostream>

using namespace std;

int main() {
    string cadena;
    //cin >>cadena; //lee hasta el espacio
    getline(cin, cadena);//lee toda la cadena
    cout << cadena.size() <<endl;

    return 0;
}