#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <tensorflow/c/c_api.h>

using namespace :: std;
 
  int main()
  {

   string guide0 = "\n\n************      Instructions      ***********\n\n";
   string guide1 = "1) Tensorflow c++ installation guide --> https://www.eiffel.org/blog/javier/2019/10/wrapping-tensorflow-c-api-wrapc\n";
   string guide2 = "2) click above in the right in your browser environment, the low arrow\n";
   string guide3 = "3) Move .gz file in Documents folder and extract here\n";
   string guide4 = "4) You can find your file here -->  ../usr/local/lib directory \n";
   string guide5 = "5) Write here in ../usr/local/lib this -- > sudo ldconfig <-- for the linker\n";
   string guide6 = "\n\n -----          Have a nice code!      ------   : - ) \n\n";

   cout <<guide0;
   cout <<guide1;
   cout <<guide2;
   cout <<guide3;
   cout <<guide4;
   cout <<guide5;
   cout <<guide6;

    return 0;
  }
