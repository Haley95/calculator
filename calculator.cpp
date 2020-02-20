#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int total = 0;
    
     for (int i = 1; i < argc; i++) {
        cout << atoi(argv[i]) << endl;
        total += atoi(argv[i]); 
     }
    cout << "The total is: " << total << endl;
    
    return 0;
}