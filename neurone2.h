#include <iostream>
# include  <string>
# pragma onc'e
class  Neurone2 {
  public: int b1, b2;
  public: std :: string inizializzazioneNeurone2 = " \n Inizializzazione del secondo neurone ... \n " ;
  public:  void  funzioneNeurone2 () {
    std :: cout << inizializzazioneNeurone2;
  }

public: void funzionePrimoAnnuncioNeurone2 () {
  std :: cout <<"\nInserisci il primo valore da inserire nel secondo nodo\n";
}

public: int funzionePrimoValoreNeurone2 (int b1) {
  return b1;
}

public: void funzioneSecondoAnnuncioNeurone2 () {
  std :: cout <<"\nInserisci il secondo valore da inserire nel secondo nodo\n";
}

public: int funzioneSecondoValoreNeurone2 (int b2) {
  return b2;

}

public: int funzioneCalcoloNeurone2 () {
  return b1 + b2;
}
  
};
