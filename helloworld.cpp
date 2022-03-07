#include <iostream>
#include <vector>
#include <string>

#include "helloConfig.h"
#include "hugelib.h"

using namespace std;

//******************//
//******************//
//******************//
//******************//

int main(int argc, char * argv[]){

  if (argc < 2)
  {
    //report VERSION
    cout << argv[0] << " Version " << hello_VERSION_MAJOR << "." << hello_VERSION_MINOR << endl;
    cout << "Usage: " << argv[0] << " number" << endl;
  }
  string msg = "Hello World!";

  cout << msg << endl;

  hugelib myLib = hugelib();

  cout << "number: " << myLib.getNumber() << endl;

  return 0;
}
