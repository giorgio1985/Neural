************    Instructions TensorFlow 1.14.0 for C++   ***********





   1) Tensorflow c++ installation guide --> https://www.eiffel.org/blog/javier/2019/10/wrapping-tensorflow-c-api-wrapc\n
   2) Click this following link --> https://storage.googleapis.com/tensorflow/libtensorflow/libtensorflow-cpu-linux-x86_64-1.14.0.tar.gz
   2) click above in the right in your browser environment, the low arrow
   3) Move .gz file in Documents folder and extract here using this command --> sudo tar -C /usr/local -xzf libtensorflow-cpu-linux-x86_64-1.14.0.tar.gz
   4) You can find your file here -->  ../usr/local/lib directory 
   5) Write here in ../usr/local/lib this -- > sudo ldconfig <-- for the linker
   6) In your cpp/c main file include this in the directives --> #include <tensorflow/c/c_api.h>






------         Have a nice code!  by giorgio1985       -----   : - ) 