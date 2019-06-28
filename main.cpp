#include <iostream>
#include <string>
#include <stdlib.h>

 class Neurone1 {
  //public: int valore1, valore2;
  public: void inizializzazioneN1() {
    std :: cout <<"\n neurone 1 inizializzato!\n ";
  }

  public: void inserisciPrimoValoreN1() {
    std :: cout<<"\n inserisci il primo valore del primo nodo\n";
  }

  public: int primoValoreN1(int valore1) {
    return valore1;

  }

  public: void inserisciSecondoValoreN1() {
    std :: cout<<"\n inserisci il secondo valore del primo nodo\n";
  }

  public: int secondoValoreN1(int valore2) {
    return valore2;

  }

};

class Neurone2 {

  public: void inizializzazioneN2() {
    std :: cout <<"\n neurone 2 inizializzato!\n";
  }
  
  public: void inserisciPrimoValoreN2() {//
    std :: cout <<"\n inserisci il primo valore del secondo nodo \n";
  }

  public: int primoValoreN2(int valore1) {
    return valore1;

  }

  public: void inserisciSecondoValoreN2() {
    std :: cout <<"\n inserisci il secondo valore del secondo nodo\n";
  }

  public: int secondoValoreN2(int valore2) {
    return valore2;

  }

};

class Neurone3: public Neurone1, public Neurone2 {
  public: void inizializzazioneN3() {
    std :: cout <<"\n neurone 3 inizializzato!\n";
  }

  public: int calcoloAttivazioneN3(int valore1, int valore2) {
    return valore1 + valore2;

  }

  
};

int main () {

  int primo1, primo2, uscitaNodo1;
  int secondo1, secondo2, uscitaNodo2;
  int attivazione;

  Neurone1 n1;
  Neurone2 n2;
  Neurone3 n3;

  n1.inizializzazioneN1();
  n2.inizializzazioneN2();
  n3.inizializzazioneN3();

  n1.inserisciPrimoValoreN1();
  std :: cin >> primo1;
  n1.primoValoreN1(primo1);
  n1.inserisciSecondoValoreN1();
  std :: cin >> primo2;
  n1.secondoValoreN1(primo2); 
  uscitaNodo1 = n1.primoValoreN1(primo1)+n1.secondoValoreN1(primo2);
  std :: cout <<uscitaNodo1;

  n2.inserisciPrimoValoreN2();
  std :: cin >> secondo1;
  n2.primoValoreN2(secondo1);
  n2.inserisciSecondoValoreN2();
  std :: cin >> secondo2;
  n2.secondoValoreN2(secondo2);
  uscitaNodo2 = n2.primoValoreN2(secondo1)+n2.secondoValoreN2(secondo2);
  std :: cout <<uscitaNodo2;
  
  attivazione = n3.calcoloAttivazioneN3(uscitaNodo1, uscitaNodo2);
  std :: cout <<"\n"<<attivazione;

 return 0;
}
