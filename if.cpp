#include <iostream> 
using namespace std;

int main(){
    int consumo;
    cout << "por favor ingrese su consumo  de luz electrica" << endl;
    cin >> consumo;

    if (consumo < 100)
    {
        cout << "su tarifa es baja " << endl;
    }
    else if (consumo >=100 && consumo <=200)
    {
        cout << "su tarifa es media" << endl;
    }
    else if (consumo > 200)
    {
        cout << "tarifa alta" << endl;
    }
    









    return 0;
}