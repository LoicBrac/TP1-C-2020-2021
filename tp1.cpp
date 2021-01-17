#include "Date.h"
#include "Client.h"
#include "Chambre.h"
#include "Hotel.h"
int main()
{
    /*
    //Question 1 test Date
    Date date(1950,9,13);
    date.afficherDate();
    date.setJour(19);
    date.setMois(12);
    date.setAnnee(2000);
    date.afficherDate();
    std::cout << "jour: "<< date.getJour() <<"\n"<< "annee : " << date.getAnnee() <<std::endl;
    Date date1(2015,16,14);
    */

    /*
    //Question 2 test Client
    //srand (time(NULL));
    Client Client1("Hugo", "Cazes",1);
    Client1.afficherClient();
    Client1.ajouterReservation(10);
    Client1.afficherClient();
    Client1.modifierClient("ginhac", "dom",12);
    Client1.afficherClient();
    Client Client2("Maa", "Sas",14);
    Client2.afficherClient();
    Client Client3("Maa", "ab",15);
    Client3.afficherClient();
    */


    //Question 3 test Chambre
    Chambre Chambre1(Categorie::Simple, 100);
    Chambre1.afficherChambre();
    Chambre1.modifierChambre(Categorie::Double, 200);
    Chambre1.afficherChambre();
    Chambre Chambre2(Categorie::Familiale, 400);
    Chambre2.afficherChambre();
    Chambre Chambre3(Categorie::Simple, 100);
    Chambre3.afficherChambre();
    Chambre Chambre4(Categorie::Familiale, 300);
    Chambre4.afficherChambre();
    Chambre Chambre5(Categorie::Simple, 200);
    Chambre5.afficherChambre();
    Chambre Chambre6(Categorie::Simple, 300);
    Chambre6.afficherChambre();


    //Question 4 test hotel
    Hotel Hotel1("Hotel1", "Dijon", "OCEAN11");
    Hotel1.ajouterChambre(Chambre1);
    Hotel1.ajouterChambre(Chambre2);
    Hotel1.ajouterChambre(Chambre3);
    Hotel1.ajouterChambre(Chambre4);
    Hotel1.ajouterChambre(Chambre5);

    Hotel Hotel2("La cloche", "Dijon", "OCEAN14");
    Hotel2.ajouterChambre(Chambre6);
    Hotel2.afficherChambreHotel();
    Hotel2.listeChambre();
    Hotel1.afficherChambreHotel();
    Hotel1.listeChambre();




}
