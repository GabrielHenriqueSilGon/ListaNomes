#include <iostream>
#include <string>
#include "Lista.hpp"
using namespace std;
int
main ()
{
  Lista l;
  string c, r;
  int maxtam = 5;//este 5 esta aqui para facilitar testes, mas vai ate 100
  int preenchidos = 0;

  cout << "De os nomes: " << endl;

  for (int a = 0; a < maxtam; a++)
    {				
      cin >> l.vet[a].v;
      preenchidos++;
    }

  cout << "===============================" << endl;
  cout << "Removendo Replicas..." << endl;
  cout << endl;

  l.RemoveReplica ();



  cout << "Adicionar novos nomes? sim/nao" << endl;
  cin >> r;
  if (r == "sim")
    {
      cout << "De os novos nomes:\n";
      for (int a = 0; a < preenchidos; a++)
	{
	  if (l.vet[a].v == " ")
	    {
	      cin >> l.vet[a].v;
	    }
	}

    }
  cout << "===================================\n";
  cout << "A nova lista ficou:\n";

  for (int a = 0; a < maxtam; a++)
    {
      cout << l.vet[a].v << endl;
    }

  cout << "Fim." << endl;

  return 0;

}
