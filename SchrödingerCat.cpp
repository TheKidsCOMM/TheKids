#include <"cat.h">
#include <iostream>

int Main()
{
  Cat cat;

  while(true)
  {
    cat.IsDead(true);
    cat.IsDead(false);
  }
  return 0;
}
