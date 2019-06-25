# include  <iostream>
# include  <string>
# include  "neurone1.h"
# include  "neurone2.h"
# include  "neurone3.cpp"

int  main () {
//L'inizializzazione serve per vedere se fila tutto liscio prima della fase vera e propria del programma ... 
int a1, a2, b1, b2;
  Neurone1 n1;
  n1. funzioneNeurone1 ();

  Neurone2 n2;
  n2. funzioneNeurone2 ();

  Neurone3 n3;
  n3. funzioneNeurone3 ();

//Inizio della parte di inserimento e di calcolo del programma ...

  n1.funzionePrimoAnnuncioNeurone1();
  n1.funzionePrimoValoreNeurone1(a1);
  n1.funzioneSecondoAnnuncioNeurone1();
  n1.funzioneSecondoValoreNeurone1(a2);
  std :: cout << n1.funzioneCalcoloNeurone1();

  n2.funzionePrimoAnnuncioNeurone2();
  n2.funzionePrimoValoreNeurone2(b1);
  n2.funzioneSecondoAnnuncioNeurone2();
  n2.funzioneSecondoValoreNeurone2(b2);
  std :: cout << n2.funzioneCalcoloNeurone2();





  return  0;
}
