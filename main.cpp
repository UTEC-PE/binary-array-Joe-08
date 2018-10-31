#include <iostream>
#include "binary.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;


    boolean mybool(8);
    mybool.bitOn(2);
    mybool.bitOn(3);
    cout<<mybool[4]<<endl;
    mybool.bitOff(2);
    cout<<mybool[2]<<endl;
    system("read");
    return EXIT_SUCCESS;
}

