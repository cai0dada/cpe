#include "bits/stdc++.h"
using namespace std;
int main()
{ int N; cin >> N; cin.ignore();
  char c;
  int score = 0,conti = 0;
  while (cin.get(c))
  { if (c == '\n')
    { cout << score << endl;
      score = 0;
      conti = 0;
    }
    else
    { if (c == 'O')score += ++conti;
      else         conti = 0;
    }
  }
}