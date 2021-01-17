#include "Chambre.h"

Chambre::Chambre(Categorie categorie, int prix_chambre){
    _categorie = categorie;
    _prix_chambre = prix_chambre;
    _id_chambre = rand() % 9999 + 1000;

}

Categorie Chambre::categorie() const{
    return _categorie;
}

int Chambre::getIdChambre() const{
    return _id_chambre;
}

int Chambre::getPrixChambre() const{
    return _prix_chambre;
}
std::string Chambre::stringCategorie(Categorie cat){
    std::string res ="";
    switch(cat){
    case Categorie::Simple:
        res = "Simple";
        break;
    case Categorie::Double:
        res = "Double";
        break;
    case Categorie::Familiale:
        res = "Familiale";
        break;
    case Categorie::Suite:
        res = "Suite";
        break;

    }
    return res;

}

void Chambre::afficherChambre(){
    std::cout <<"La chambre :id :"  <<"; prix : "  <<"; categorie : " << stringCategorie(categorie()) << std::endl;
}

void Chambre::modifierChambre(Categorie categorie, int prix_chambre){
    _categorie = categorie;
    _prix_chambre = prix_chambre;

}
