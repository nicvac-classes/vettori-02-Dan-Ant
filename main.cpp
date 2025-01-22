#include <iostream>
using namespace std;

int main() {
  int n, i;
  cout << "Quanti studenti ci sono in una classe?" << endl;
  cin >> n;
  int s[n];
  string nomi[n];
  float voti[n], assenze[n];
  i=0;
  while (i<n)
  {
   s[i]=i+1;
   cout << "Qual è il tuo nome?" << endl;
   cin >> nomi[i];
   cout << "Qual è il tuo voto?" << endl;
   cin >> voti[i];
   cout << "Quante assenze hai?" << endl;
   cin >> assenze[i];
   i=i+1;
  }
  cout << "I  nomi della classe sono i seguenti: " << endl;
  i=0;
  while (i<n)
  {
    cout << nomi[i];
    i=i+1;

  }
  cout<< "Le assenze della classe sono le seguenti" << endl;
  i=0;
  while (i<n)
  {
    cout << assenze[i];
    i=i+1;
  }
  i=0;
  cout << "I voti della classe sono i seguenti: " << endl;
  while (i<n)
  {
    cout << voti[i];
    i=i+1;
  }
  i=0;
  cout << "Classifica generale: " << endl;
  while (i<n)
  {
    cout << nomi[i] << " voto " << voti[i] << " assenze " << assenze[i] << endl;
    i=i+1;
  }
  

}


