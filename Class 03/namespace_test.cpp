#include <iostream>
using namespace std;

namespace AB {
  string town = "Cope";
}

namespace BC {
  string town = "Cope";
}

namespace MyLib {
  string endl = "\n";
}
using namespace AB;

int main(){
  // imagine we have two towns, one is in BC, one is in Aberta. They have the same name: Cope
  // string town = "Cope";
  // string town = "Cope";

  cout << town << MyLib::endl;

  cout << BC::town << endl;
}