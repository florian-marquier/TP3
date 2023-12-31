#include <iostream>
#include "Personne.h"
using namespace std;
int main ()
{
    // Création des 4 personnages Personne 
    Personne sarko ("SARKOZY", "Nicolas", 62, "Avocat"); // Création de l'objet sarko 
    Personne carlita ("BRUNI", "Carla", 50, "Mannequin"); // Création de l'objet carlita  
    Personne manu("MACRON", "Emmanuel", 48, "Banquier"); // Création de l'objet manu  
    Personne bibi("TROGNEUX", "Brigitte", 64, "Enseignante"); // Création de l'objet bibi
    Personne flamby ("HOLLANDE", "Francois", 67, "Fonctionnaire"); // Création de l'objet flamby 
    Personne sego ("ROYAL", "Segolene", 68, "Ministre"); // Création de l'objet sego 
    Personne jeanmimi ("BLANQUER", "Jean-Michel", 57, "Ministre"); // Création de l'objet jeanmimi 
    Personne aure ("DEVOS", "Aurelia", 42, "Ministre"); // Création de l'objet aure

    // Affichage des informations des 4 personnages avant l'utilisation des objets
    cout << "On affiche les informations des 4 personnages avant l'utilisation des objets" << endl; 
    sarko.afficher();
    carlita.afficher();
    manu.afficher();
    bibi.afficher();
        
    //ajout
    flamby.afficher();
    sego.afficher();
    jeanmimi.afficher();
    aure.afficher();
    
    // Action sur les objets
    carlita.marier("SARKOZY"); // Carla BRUNI se marie avec Nicolas SARKOZY
    bibi.marier("MACRON"); // Brigitte se marie avec Emmanuel MACRON
    manu.demenager("Palais de l'Elysee, 75008 PARIS"); // Emmanuel MACRON déménage à l'Elysée 
    bibi.demenager("Palais de l'Elysee, 75008 PARIS"); // Brigitte MACRON déménage à l'élysée 
    sarko.anniversaire(); // Nicolas SARKOZY a 1 an de plus
    sarko.changer_travail ("Hommes d'Affaires"); // Nicolas SARKOZY a toujours aimé l'argent ! 
    carlita.changer_travail ("Chanteuse"); // Faut croire que Carla BRUNI sait chanter ! 
    manu.changer_travail ("President de la Republique"); // Emmanuel MACRON devient Président 
    bibi.changer_travail ("Premiere Dame"); // Brigitte MACRON devient la première Dame de France
    sego.changer_travail("Retraite"); //Segolaine ROYAL devient une retraitée
        
    //ajout
    flamby.changer_travail("Retraitee"); // François HOLLANDE devient un retraité
    aure.marier("BLANQUER"); // Aurélia DEVOS se marie à Jean-Michel BLAQUER 
    jeanmimi.marier("DEVOS"); // Comme précédemment
    sego.anniversaire(); // Ségolène ROYAL a 1 an de plus 
    jeanmimi.anniversaire(); // Jean-Michel BLANQUER a 1 an de plus
    sego.separation("ROYAL"); // François HOLLANDE se sépare de Ségolène ROYAL (Je le comprends)
    aure.separation("DEVOS"); // Jean-Michel BLANQUER se sépare de Aurélia DEVOS (compréhensible)

    // Affichage des informations des 4 personnages après l'utilisation des objets
    cout << "On affiche les informations des 4 personnages apres l'utilisation des objets" << endl; 
    sarko.afficher();
    carlita.afficher();
    manu.afficher();
    bibi.afficher();
    
    //ajout
    flamby.afficher();
    sego.afficher();
    jeanmimi.afficher();
    aure.afficher();

    return 0;
}