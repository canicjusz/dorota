#include <iostream>
using namespace std;

int main()
{
  string odpowiedz;
  cout << "Czy podoba ci sie ten tutorial? (tak/nie)";
  cin >> odpowiedz;
  // jeżeli użytkownik wpisał "tak", to wyświetl następujący tekst. 
  if(odpowiedz == "tak"){
    cout << "Bardzo sie cieszymy :D";
  // natomiast jeżeli użytkownik wpisał "nie", to wyświetl następujący tekst. 
  }else if(odpowiedz == "nie"){
    cout << "Bardzo nam przykro :c";
  // jeżeli oba warunki nie zostały spełnione, to wyświetl następujący tekst. 
  }else{
    cout << "Odpowiedz tak lub nie.";
  }
  return 0;
}
