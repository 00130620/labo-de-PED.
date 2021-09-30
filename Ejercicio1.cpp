#include <iostream> 
using namespace std;


int MCD(int a, int b)
{
    if(b==0)
        return a;
    else
        return MCD(b, a%b);
}


int main()
{
    int numero1=0,numero2=0;
    cout<<endl;
    cout << "MCD en el teorema Euclides"<<endl<<endl;
    cout << "Digite el primer numero(el mayor): "<<endl;
    cin>>numero1;
    cout << "Digite el segundo numero(el menor): "<<endl;
    cin>>numero2;
    cout << "Su resultado es:  "<<MCD(numero1,numero2);
    return 0;
}