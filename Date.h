#ifndef DATE_H
#define DATE_H
#include <string>
#include <iostream>

   class Date {
   private:
      int _annee;
      int _mois;
      int _jour;
   public:
      Date (int annee, int mois, int jour);
      int getAnnee() const;
      int getMois() const;
      int getJour() const;
      bool checkDate(int annee, int mois, int jour);
      void setAnnee(int annee);
      void setMois(int mois);
      void setJour(int jour);
      void afficherDate();
      std::string toString() const;
   };

   bool operator == (const Date& d1, const Date& d2);
   bool operator < (const Date& d1, const Date& d2);
   bool operator > (const Date& d1, const Date& d2);
   bool operator <= (const Date& d1, const Date& d2);
   bool operator >= (const Date& d1, const Date& d2);


#endif // DATE_H
