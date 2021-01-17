#include "Date.h"
#include <iostream>
#include "assert.h"


    bool Date::checkDate(int annee, int mois, int jour) {
        if (annee < 0) {
            return false;
        }
        if ((mois < 1) || (mois > 12)) {
            return false;
        }
        if ((jour < 1) || (jour > 31)) {
            return false;
        }
        if ((mois == 1 || mois == 3 || mois == 5 || mois == 7
        || mois == 8 || mois == 10 || mois == 12) && (jour>31) ) {
            return false;
        }
        if ((mois == 4 || mois == 6 || mois == 9 || mois == 11)
        && (jour>30)) {
            return false;
        }
        if ((mois == 2) && (jour > 29)) {
            return false;
        }
        if ((mois == 2) && (jour==29)) {
            if ((annee%4) || ((annee%100==0) && (annee%400))) {
                return false;
            }
        }
        return true;
    }



    Date::Date(int annee, int mois, int jour) {
        bool status = checkDate(annee, mois, jour);
        assert(status==true && "Date is not valid");
        _annee = annee;
        _mois = mois;
        _jour = jour;

    }


    int Date::getAnnee() const {
        return _annee;
    }
    int Date::getMois() const {
        return _mois;
    }

    int Date::getJour() const {
        return _jour;
    }

    std::string Date::toString() const {
        std::string mois[12] = {"Jan", "Fev", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Sept", "Oct", "Nov", "Dec"};
        std::string to_display;
        to_display = std::to_string(_jour) + "/" + mois[_mois-1] + "/" + std::to_string(_annee);
        return to_display;
    }

    void Date::setAnnee(int annee) {
        assert(annee >= 0 && "Year must be positive");
        _annee = annee;
    }

    void Date::setMois(int mois) {
        assert((mois >=1) && (mois<=12) && "Month must be between 1 and 121");
        _mois = mois;
    }

    void Date::setJour(int jour) {
        bool status = checkDate(_annee, _mois, jour);
        assert(status == true && "Day is not valid");
        _jour = jour;
    }

    void Date::afficherDate(){
        std::cout << "Date :" <<toString()<< std::endl;

    }

    bool operator == (const Date& d1,const Date& d2) { // check for equality
        if( (d1.getJour()==d2.getJour()) && (d1.getMois()==d2.getMois()) && (d1.getAnnee()==d2.getAnnee()))
        {
            return true;
        }
    return false;
    }



    bool operator < (const Date& d1, const Date& d2) {
        if (d1.getAnnee()<d2.getAnnee()) {
            return true;
        }
        else if (d1.getAnnee()>d2.getAnnee()) {
            return false;
        }
        else { // same year
            if (d1.getMois()<d2.getMois()) {
                return true;
            }
            else if (d1.getMois()>d2.getMois()) {
                return false;
            } else { // same month
                if ( d1.getJour()<d2.getJour()) {
                    return true;
                }
                else {
                    return false;
                }
            }
        }

    }


    bool operator > (const Date& d1, const Date& d2) {
        if (d1==d2) {
            return false;
        }
        if (d1<d2) {
            return false;
        }
        return true;
    }

    bool operator <=(const Date& d1, const Date& d2) {
        if (d1==d2) {
            return true;
        }
        return (d1<d2);
    }

    bool operator >=(const Date& d1, const Date& d2) {
        if (d1==d2) {
            return true;
        }
        return (d1>d2);
    }


