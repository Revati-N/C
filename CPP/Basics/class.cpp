#include <iostream>
#include <string>
using namespace std;

class friends {
  public:
    string name;
    int age;
    string dep;
};

int main() {

  friends f1;
  f1.name = "K";
  f1.age = 20;
  f1.dep = "Comps";

  friends f2;
  f2.name = "M";
  f2.age = 19;
  f2.dep = "IT";

  friends f3;
  f3.name = "N";
  f3.age = 19;
  f3.dep = "IT";

  cout << f1.name << " | " << f1.age << " | " << f1.dep << endl;
  cout << f2.name << " | " << f2.age << " | " << f2.dep << endl;
  cout << f3.name << " | " << f3.age << " | " << f3.dep << endl;
  return 0;
}
