#include <iostream>
#include<string>
#include<vector>
#include"Document.h"
#include"Site.h"
using namespace std;
int main()
{
    
    Document doc1("Programmation C++", "Bjarne Stroustrup");
    Document doc2("Python pour débutants", "Guido van Rossum");
    Document doc3("Intelligence Artificielle", "Andrew Ng");
    doc1.ajouter("C++");
doc1.ajouter("Programmation");

   
    Site site1("UGB Bibliothèque", "Éducation");
    site1.Ajouter_Document(&doc1);
    site1.Ajouter_Document(&doc2);
    site1.Ajouter_Document(&doc3);
    cout << "=== Contenu du site ===" << endl;
    site1.Afficher();

    cout << "\n=== Test de suppression d'un document ===" << endl;
    site1.Supprimer_Document("Python pour débutants");
    site1.Afficher();
    cout << "\n=== Test de l'opérateur = ===" << endl;
    Site site2("Site copie", "Éducation");
    site2 = site1;  
    site2.Afficher();

    return 0;
}