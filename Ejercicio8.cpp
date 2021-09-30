#include <iostream>

using namespace std;

void ascendente(int n);
void descendente(int);

int main(void)
{
    int n;

    cout << endl;
    cout << " CONTEO " << endl << endl;
    cout << "DIGITAR EL NUMERO DEL CUAL DESEA HACER CONTEO ";
    cin >> n;

    ascendente(n);
    descendente(n);

    cout << endl;
    return 0;

}

void descendente(int n)
{
    if(n >= 1){
        cout << n << endl;
        n = n- 1;
        descendente(n);
    }
}

void ascendente(int n)
{
    int i;

    i = 1;
    while(i <= n){
        cout << i << endl;
        i = i + 1;
    }
}