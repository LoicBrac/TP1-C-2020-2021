#include "Client.h"


Client::Client(std::string prenom, std::string nom, int reservation){
    _prenom = prenom;
    _nom = nom;
    _reservation = reservation;
    _id = rand() % 99999 + 10000;

}

std::string Client::getNom() const{
    return _nom;
}

std::string Client::getPrenom() const{
    return _prenom;
}

int Client::getId() const{
    return _id;
}

int Client::getReservation() const{
    return _reservation;
}

void Client::ajouterReservation(int nombreReservation){
    _reservation += nombreReservation;
}

void Client::modifierClient(std::string nom, std::string prenom, int reservation){
    _nom = nom;
    _prenom = prenom;
    _reservation = reservation;
}

void Client::afficherClient(){
    std::cout <<"nom : " << getNom() << "\n" << "Prenom :" << getPrenom() << "\n" << "Identifiant:" <<getId() << "\n" << "Nombre de reservation : " << getReservation() << std::endl;

}


