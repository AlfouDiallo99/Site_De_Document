# 📚 Site_De_Document

## 🚀 Description
Ce projet en **C++** implémente un système de gestion de documents et de sites.  
Chaque **Document** contient un titre, un auteur et une liste de mots.  
Chaque **Site** peut contenir plusieurs documents, et permet de :

- Ajouter des documents  
- Supprimer des documents par titre  
- Afficher les documents et leurs mots  
- Copier un site avec l’opérateur `=`  

---

## 🛠 Fonctionnalités principales
- **Ajouter un document** à un site  
- **Supprimer un document** par titre  
- **Afficher** un site et tous ses documents  
- **Ajouter des mots** dans un document  
- **Copie de site** via opérateur d’affectation  

---

## 📂 Structure des fichiers
- `Document.h` / `Document.cpp` : définition et implémentation de la classe `Document`  
- `Site.h` / `Site.cpp` : définition et implémentation de la classe `Site`  
- `Main.cpp` : programme principal pour tester les fonctionnalités  

---

## ⚡ Exemple d’utilisation

```cpp
Document doc1("Programmation C++", "Bjarne Stroustrup");
doc1.ajouter("C++");
doc1.ajouter("Programmation");

Site site1("UGB Bibliothèque", "Éducation");
site1.Ajouter_Document(&doc1);Nom du site: UGB Bibliothèque
site de : Éducation
Liste de documents du site:
Titre: Programmation C++
Auteur: Bjarne Stroustrup
Liste de mots:
C++
Programmation

site1.Afficher();

