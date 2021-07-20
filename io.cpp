#include <iostream>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[])
{

    /*
    string a = argv[1];
    string ip = argv[2];
    cout << a << endl;
    cout << ip << endl;
*/
    char letra;
    std::cout << "Escribe un carácter:\n";
    std::cin >> letra;
    if (isalpha(letra))
    {
        std::cout << "Es una letra";
    }
    else
    {
        std::cout << "NO es una letra";
    }
}