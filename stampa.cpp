/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

Damiano Carboni 13/12/2024
*/

# include <iostream>
using namespace std;
int main()
{
  int i = 0 ,n; //il contatore deve partire da 0
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  while (i<n)
  {
    i++;        //il contatore si deve incrementare ogni volta
    cout<<"Bada come la fuma"<<endl; 
  }
  system("pause");
}
