#ifndef __LISTA_HPP
#define __LISTA_HPP
#include <string>
#define MAXTAM 100
using namespace std;

struct Valor
{
  string v;
};


class Lista
{
public:

  Valor vet[MAXTAM];
  string primeiro;
  string ultimo;
  void RemoveReplica();

};

#endif
