#ifndef SITE_H_INCLUDE
#define SITE_H_INCLUDE
#include<iostream>
#include<string>
#include<vector>
#include"Document.h"
using namespace std;
class Site
{  private:
    string Nom;
    string Type_site;
    vector<Document*>Doc;
    public:
    Site(const string&,const string&);
    ~Site();
    void Afficher()const;
    void Ajouter_Document( Document*);
    void Supprimer_Document(const string&);
    Site &operator=(const Site&);
    friend ostream& operator<<(ostream&,const Site &);
  

}
;
#endif // SITE_H_INCLUDE