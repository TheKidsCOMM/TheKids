#include "jedi.h"
#include <iostream>

int main()
{
  jedi ObiWan;
  
  if(ObiWan.greeting == "Hello there!")
  {
    cout << "General Kenobi!" << endl;
  }else
  {
    cout << "Oh, I don't think so!"
  }
  
  return 0;
}
