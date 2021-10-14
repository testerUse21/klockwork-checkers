#include<iostream>
#include<vector>
#include <cstring>
using namespace std;

struct XXX {
  int x, y;
};

struct apa{
std::string a;
}

struct A
{
  int a;
  vector<XXX> b;
  apa temp;
};

void foo() {
  struct A aaa;
  memset(&aaa, 0, sizeof(aaa));        // DEFECT
  struct A *paaa = (struct A *)malloc(sizeof(struct A));
  memset(paaa, 0, sizeof(struct A));   // DEFECT
  struct XXX xxx;
  memset(&xxx, 0, sizeof(struct XXX)); // OK - struct XXX is POD
}

struct apa{
std::string a;
}

struct XXX {
  int x, y;
};

struct A
{
  int a;
  apa temp;
  //vector<XXX> b;

  A() : a(0) {}
};

void foo() {
  struct A aaa;
  void *paaa_memory = malloc(sizeof(struct A));
  struct A *paaa = new (paaa_memory) A;
  struct XXX xxx;
  memset(&xxx, 0, sizeof(struct XXX));
}
