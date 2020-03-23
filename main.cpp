#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
//#include <tensorflow/c/c_api.h>
#include "tensor.h"
#include "init.h"


using namespace :: std;
using std::string;
 
  int main()
  {

    init * i = new init();
    tensor *t = new tensor();

    i->showInit();
    cout<<(t->showSayHello());


    return 0;
  }
