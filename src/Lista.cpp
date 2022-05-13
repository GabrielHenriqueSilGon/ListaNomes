#include <iostream>
#include <string>
#include "Lista.hpp"
using namespace std;

void
Lista::RemoveReplica ()
{
  for (int i = 0; i < MAXTAM; i++)
    {
      for (int j = (i + 1); j < MAXTAM; j++)
	{
	  if (vet[j].v == vet[i].v)
	    {
	      vet[j].v = " ";
	    }
	}
    }
}
