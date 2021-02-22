#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>

struct Human {
  char name[20];   // consider using std::string
  char name2[20];
  char name3[20];
  double pts;
};

int main() {
  using namespace std;
  Human people[3] = {
    {"Mr", "Alan", "Turing", 12.25},
    {"Ms", "Ada", "Lovelace", 15.25},
    {"Sir",  "Edgar Allan", "Poe", 45.25}
  };
  printf("%-22s%-22s%-22s%20s\n", "Name1", "Name2", "Name3", "Rating");
  cout << string(22 * 3 + 20, '-') << '\n';
  for (int i = 0; i < 3; i++) {
    Human const& h = people[i];
    printf("%-22s%-22s%-22s%20f\n", h.name, h.name2, h.name3, h.pts);
  }
  return 0;
}
