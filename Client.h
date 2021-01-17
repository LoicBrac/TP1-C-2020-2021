#ifndef CLIENT_H
#define CLIENT_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>

class Client{
private:
    std::string _nom;
    std::string _prenom;
    int _reservation;
    int _id;
public:
    Client(std::string prenom, std::string nom, int reservation);
    std::string getNom() const;
    std::string getPrenom() const;
    int getId() const;
    int getReservation() const;
    void ajouterReservation(int nombreReservation);
    void modifierClient(std::string nom,std::string prenom, int reservation);
    void afficherClient();


};


#endif // CLIENT_H
