#ifndef DOCUMENT_H_INCLUDE
#define DOCUMENT_H_INCLUDE
#include<vector>
#include<iostream>
#include<string>
using namespace std;
class Document
{ private:
    string Titre;
    string Auteur;
    vector<string>liste;
    public:
    Document(const string&,const string&);
    virtual ~Document();
    void ajouter(const std::string& mot);
    virtual void Afficher()const;
    const string& getTitle()const;
    const string& getAuteur()const;

};

#endif // DOCUMENT_H_INCLUDE