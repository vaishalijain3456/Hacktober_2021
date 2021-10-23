#include <iostream>
using namespace std;

int main() {
  int number, i, j, h=0;
  cin >> number;

  for (i = 0; i < number; i++)
    cout << "* " ;

  for (i = number; i >= 1; --i)
  {
    for (j = 0; j < number - i; ++j){
      while (h != (2 * i - 1))
      {
        if (h == 0 || h == 2 * i - 2)
          cout << "*" ;
        else
          cout << " " ;
        h++;
      }
    }
    h = 0;
    cout << endl;
  }
  
  return 0;
}