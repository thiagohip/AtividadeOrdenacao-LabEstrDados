#include <iostream>
#include "Ordenacao.h"

using namespace std;

int main()
{
    srand(time(NULL));
    Ordenacao ordem;
    ordem.bolha();
    ordem.bolha_melhorada();
    return 0;
}
