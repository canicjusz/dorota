#include <iostream>
using namespace std;

int main()
{
  // Deklarujemy wszystkie zmienne
  int liczba_calkowita = 18;
  char znak = 'l';
  float liczba_zmiennoprzecinkowa = 21.37;
  string ciag_znakow = "Mam ";
  bool typ_logiczny = true;

  // wypisujemy poszczegolne zmienne jedna po drugiej, endl oznacza koniec lini.
  cout << ciag_znakow << liczba_calkowita << znak << endl;

  // wypisujemy dalsze zmienne w nowej lini.
  cout << "float: " << liczba_zmiennoprzecinkowa << " bool: " << typ_logiczny;
  return 0;
}
