#ifndef HOTEL_H
#define HOTEL_H
#include <iostream>
#include <string>
#include <vector>
#include "Chambre.h"

class Hotel{
private:
    std::string _nom_hotel;
    std::string _ville_hotel;
    std::vector<Chambre> _liste_chambres;
    std::string _uid_hotel;
public:
    Hotel(std::string nom_hotel, std::string ville_hotel, std::string uid_hotel);
    std::string getNomHotel() const;
    std::string getVilleHotel() const;
    std::string getUid() const;
    void ajouterChambre(Chambre chambre);
    void listeChambre();
    void afficherChambreHotel();

};

#endif // HOTEL_H
