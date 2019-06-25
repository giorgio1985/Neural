#include <iostream>
# include  <string>
//# pragma once
/*#ifndef NEURONE1_H
#define NEURONE1_H
#endif
#ifndef NEURONE2_H
#define NEURONE2_H
#endif   */
#include "neurone1.h"
#include "neurone2.h"  
//Questo nodo/neurone prende i 2 valori uscenti dagli altri due e li calcola ...
/*
Piccolo esempio di ereditarietà multipla ...
*/
class  Neurone3: public Neurone1, public Neurone2  {
  public: std :: string inizializzazioneNeurone3 = " \n Inizializzazione del terzo neurone ... " ;
  public:  void  funzioneNeurone3 () {
    std :: cout << inizializzazioneNeurone3;
  }

  public: int funzioneSommaValori() {
    return funzioneCalcoloNeurone1() + funzioneCalcoloNeurone2();
  }

};

//#endif
