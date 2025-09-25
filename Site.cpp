#include<iostream>
#include"Site.h"
#include<string>
using namespace std;
Site::Site(const string&n,const string&t):
Nom(n),Type_site(t)
{ cout<<"Appel du constructeur de la classe site"<<endl;
     
}
Site::~Site()
{ cout<<"Appel du destructeur de la classe site"<<endl;

}
void Site::Afficher()const
{   cout<<"Nom du site:"<<this->Nom<<endl;
    cout<<"site de :"<<this->Type_site<<endl;
    cout<<"Liste de document du site:"<<endl;
    for(auto e:Doc)
    {
      e->Afficher();
    }

}
ostream& operator<<(ostream&s,const Site&p)
{  s<<"Nom:"<<p.Nom<<endl;
    s<<"Site de :"<<p.Type_site<<endl;
    for(auto e:p.Doc)
    {e->Afficher();
        
    }
    return s;

}
void Site::Ajouter_Document( Document*d)
{  
  Doc.push_back(d);
}
void Site::Supprimer_Document(const string&t){
   for (auto it = Doc.begin(); it != Doc.end(); ++it) {
      if ((*it)->getTitle() == t) 
      {
          Doc.erase(it);  
          break;          
     }
}
}
Site& Site::operator=(const Site& s)
{
    if (this == &s) {
        cout << "C'est le même objet" << endl;
        return *this;
    }

    this->Doc.clear();          
    this->Nom = s.Nom;
    this->Type_site = s.Type_site;

    for (const auto& e : s.Doc) {  
        this->Doc.push_back(e);    
    }

    return *this;
}

