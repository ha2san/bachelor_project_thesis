#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
    try
    {
        if (argc < 2){
            throw "No argument given !";
        }else {
            cout << argv[1] << '\n';
        }
    }
    catch (const char* e)
    {
        cout <<"Error: "<< e << '\n';
    }
    return 0;
}
