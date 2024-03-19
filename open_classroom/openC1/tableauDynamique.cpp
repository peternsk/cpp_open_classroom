// il faut ajouter la librairie <vector>

#include <iostream>
#include <string>
#include <vector>

/*
    Dynamique vs statique

    Declaration :  vector<type> nomTableau(taille) vs type nom[taille]
    Librairie   :  #include <vector>               vs  aucune
*/

int main(void)
{
    int i;
    int tabSize;

    i = 0;
    std::vector<int> dynaTab(5, -1);

    while(i < 5)
    {
        dynaTab.push_back(-2);
        i++;
    }
    i = 0;
    while(i < 10)
    {
        std::cout << "table value : " << dynaTab[i] << std::endl;
        i++;
    }

    tabSize = dynaTab.size();
    std::cout << "tab size : " << tabSize << std::endl;
}