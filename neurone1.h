#include <iostream>
# include  <string>
# pragma "once"
class  Neurone1 {
  public: int a1, a2;
  public: std :: string inizializzazioneNeurone1 = " \n Inizializzazione del primo neurone ... \n " ;
  public: void  funzioneNeurone1 () {
    std :: cout << inizializzazioneNeurone1;
  }

  public: void funzionePrimoAnnuncioNeurone1() {
    std :: cout <<"\nInserisci il primo valore da inserire nel primo nodo\n";
  }

  public: int funzionePrimoValoreNeurone1(int a1) {
    return a1;
  }

  public: void funzioneSecondoAnnuncioNeurone1 () {
    std :: cout <<"\ninserisci il secondo valore da inserire nel secondo nodo\n";
  }

  public: int funzioneSecondoValoreNeurone1 (int a2) {
    return a2;
  }

  public: int funzioneCalcoloNeurone1 () {
    return a1 + a2;
  }



  // pubblico:


};
