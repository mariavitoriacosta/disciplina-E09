#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x;
    float resultado1;
    float resultado2;
    
    cin >> x;
    
    if(x < 12) {
        resultado1 = x*0.80;
        cout << setprecision(3) << resultado1 << endl;
    }
    
    else if (x >= 12) {
        resultado2 = x*0.65;
        cout << setprecision(3) << resultado2 << endl;
    }
    
    

    return 0;
}