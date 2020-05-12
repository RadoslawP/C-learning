#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Witaj na naszym portalu!" << endl;
    cout<<"Podaj login: ";
    cin>>login;
    cout<<"Podaj haslo: ";
    cin>>haslo;

    if((login=="admin")&&(haslo=="szarlotka"))
    {
        cout<<"Udalo sie zalogowac.";
    }
    else
    {
        cout<<"Bledny login lub haslo!";
    }

    return 0;
}
