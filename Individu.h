/**
 * @file Individu.h
 * @author Lopistégui
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 2023-10-10
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */


/**
 * @brief Cette classe définit un Individu par un nom, un prénom et éventuellement une Voiture qu'il conduit
 * @details Au dela de representer un Individu par son nom et présnom la 
 * class Individu permet également de renseigner la Voiture qu'il conduit/
 * 
 * La voiture associé à l'Individu est représenté par un pointeur vers un objet Voiture qui peut être à null si un l'Individu ne possede pas de Voiture
 * @warning un Individu ne peut être associé à au plus une Voiture
 * @deprecated utiliser Personne plutot que Individu (bientot changé)
 */
class Individu
{
    // ATTRIBUTS
  public:

    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom; 

    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;      

    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture; 

    // MÉTHODES
  public:

    /**
     * @brief Construit un objet Individu à partir de son nom (1er param) et son prénom (2eme param)
     * @param [in] nom
     * @param [in] prénom
     */
    Individu(string = "", string = "");
    
    /**
     * @brief Destroy the Individu object
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString

    /**
     * @brief Affiche l'identité de l'Individu
     * 
     * @return string Chaine de caractère sous la forme: nom prénom
     * @bug un espace en trop entre nom et prénom
     * @todo Ajout param ...
     */
    string toString();        
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Set the Ma Voiture object driving by Individu
     * 
     * @param [in] voiture  pointeur vers l'objet Voiture conduit pas l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H