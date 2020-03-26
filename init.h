#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using std::string;
using namespace :: std;

//https://cognitivedemons.wordpress.com/2017/07/06/a-neural-network-in-10-lines-of-c-code/
//https://www.youtube.com/watch?v=DLm55X8byEc&list=PL3MCKCM5GS4UmZJs-h6Rm11dlExhBPS-k&index=3
class init {
   public: string guide0 = "\n\n***************      Instructions      **************\n\n";
   public: string guide1 = "1) Tensorflow c++ installation guide --> https://www.eiffel.org/blog/javier/2019/10/wrapping-tensorflow-c-api-wrapc\n";
   public: string guide2 = "2) click above in the right in your browser environment, the low arrow\n";
   public: string guide3 = "3) Move .gz file in Documents folder and extract here\n";
   public: string guide4 = "4) You can find your file here -->  ../usr/local/lib directory \n";
   public: string guide5 = "5) Write here in ../usr/local/lib this -- > sudo ldconfig <-- for the linker\n";
   public: string guide6 = "\n\n --------         Have a nice code!      ---------   : - ) \n\n";


   public: void showInit() {

   cout <<guide0;
   cout <<guide1;
   cout <<guide2;
   cout <<guide3;
   cout <<guide4;
   cout <<guide5;
   cout <<guide6;
}

};
