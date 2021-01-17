#ifndef CHAMBRE_H
#define CHAMBRE_H
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum class Categorie
{
    Simple, Double, Familiale, Suite
};
//prix positif seulement
class Chambre{
private:
    int _id_chambre;
    int _prix_chambre;
    Categorie _categorie;
public:

    Chambre(Categorie categorie, int prix_chambre);
    Categorie categorie() const;
    int getIdChambre() const;
    int getPrixChambre() const;
    std::string stringCategorie(Categorie cat);
    void afficherChambre();
    void modifierChambre(Categorie categorie, int prix_chambre);
};

#endif // CHAMBRE_H
