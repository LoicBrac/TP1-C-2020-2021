#include "Hotel.h"

Hotel::Hotel(std::string nom_hotel, std::string ville_hotel, std::string uid_hotel)
{
    _nom_hotel = nom_hotel;
    _ville_hotel = ville_hotel;
    _uid_hotel = uid_hotel;
}
std::string Hotel::getNomHotel() const{
    return _nom_hotel;
}

std::string Hotel::getVilleHotel() const{
    return _ville_hotel;
}

std::string Hotel::getUid() const{
    return _uid_hotel;
}

void Hotel::ajouterChambre(Chambre chambre){
    _liste_chambres.push_back(chambre);
}

void Hotel::listeChambre(){
    for (auto it = _liste_chambres.begin() ;it < _liste_chambres.end() ; it++)
    {
        std::cout << *it << std::endl;
    }

}
void Hotel::afficherChambreHotel(){
    std::cout << getNomHotel() << " ,hotel de " << getVilleHotel() << " ID:" << getUid() << std::endl;

}




