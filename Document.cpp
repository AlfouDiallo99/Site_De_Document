#include<iostream>
#include<string>
#include"Document.h"
using namespace std;
Document::Document(const string&t,const string& A):
Titre(t),Auteur(A)
{ cout<<"Appel du constructeur de la classe Document"<<endl;

}
Document::~Document()
{ cout<<"Appel du destructeur de la classe Document"<<endl;

}
void Document::Afficher()const
{ cout<<"Titre:"<<this->Titre<<endl;
    cout<<"Auteur:"<<this->Auteur<<endl;
    cout<<"Liste de mots:"<<endl;
    for(auto e:liste)
    { cout<<e<<" "<<endl;

    }

}
const string& Document::getAuteur()const
{
    return this->Auteur;
}
const string& Document::getTitle()const
{
    return this->Titre;
}
void Document::ajouter(const std::string& mot)
{
    liste.push_back(mot);
}
