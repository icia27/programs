#include <iostream>
using namespace std;

int main() {
  string sei, na;
  cout << "姓を入力:";
  cin >> sei;
  cout << "名を入力:";
  cin >> na;
  cout << "名前は「" << sei + na << "」です。" << endl;
  return 0;
}
