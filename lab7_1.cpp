#include <iostream>
using namespace std;

int main(){
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  int rankn = 999;
  if (rank == 'S')
    rankn = -1;
  else if (rank >= 'A' and rank <= 'D')
    rankn = rank - 'A';
  if (rankn <= -1)
    cout << "You have received Super Ultra Rare Unit!!!\n";
  if (rankn <= 0)
    cout << "You have received 5 gems.\n";
  if (rankn <= 1)
    cout << "You have received 1 gems.\n";
  if (rankn <= 2)
    cout << "You have received 2000 coins.\n";
  if (rankn <= 3)
    cout << "You have received very KAK items.\n";
  return 0;
}
