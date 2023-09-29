// ConsoleApplication1.cpp
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

class Creature {
public:
    Creature(const std::string& nom, int niveau)
        : nomCreature(nom), niveauCreature(niveau) {}

    virtual void Attaquer() = 0;

    void AfficherInfos() {
        std::cout << "Nom de la créature : " << nomCreature << std::endl;
        std::cout << "Niveau de la créature : " << niveauCreature << std::endl;
    }

    int GetNiveau() const {
        return niveauCreature;
    }

    void SetNiveau(int niveau) {
        niveauCreature = niveau;
    }

private:
    std::string nomCreature;
    int niveauCreature;
};

class Personnage : public Creature {
public:
    Personnage(const std::string& nom, int niveau, int pointsDeVie, const std::string& classe)
        : Creature(nom, niveau), pointsDeViePersonnage(pointsDeVie), classePersonnage(classe) {}

    void Attaquer() override {
        std::cout << "Le personnage attaque !" << std::endl;
    }

    // Méthodes getter et setter pour les points de vie
    int GetPointsDeVie() const {
        return pointsDeViePersonnage;
    }

    void SetPointsDeVie(int pointsDeVie) {
        pointsDeViePersonnage = pointsDeVie;
    }

private:
    int pointsDeViePersonnage;
    std::string classePersonnage;
};

class Arme {
public:
    Arme(const std::string& nom, int degats, const std::string& type)
        : nomArme(nom), degatsArme(degats), typeArme(type) {}

    void AfficherInfos() {
        std::cout << "Nom de l'arme : " << nomArme << std::endl;
        std::cout << "Dégâts de l'arme : " << degatsArme << std::endl;
        std::cout << "Type de l'arme : " << typeArme << std::endl;
    }

private:
    std::string nomArme;
    int degatsArme;
    std::string typeArme;
};

class Monstre : public Creature {
public:
    Monstre(const std::string& nom, int niveau, const std::vector<std::string>& capacites)
        : Creature(nom, niveau), capacitesMonstre(capacites) {}

    void Attaquer() override {
        std::cout << "Le monstre attaque !" << std::endl;
    }

    // Méthode pour afficher les capacités du monstre
    void AfficherCapacites() {
        std::cout << "Capacités du monstre : ";
        for (const std::string& capacite : capacitesMonstre) {
            std::cout << capacite << ", ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<std::string> capacitesMonstre;
};

int GenererNombreAleatoire(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    // Création de personnages, d'armes et de monstres
    Personnage heros("Givin", GenererNombreAleatoire(1, 10), GenererNombreAleatoire(50, 100), "Guerrier");
    Arme epee("Épée damoclesse", GenererNombreAleatoire(10, 20), "Mêlée");
    std::vector<std::string> capacitesLion = { "Mord", "Griffe tranchante", "Marche" };
    Monstre lion("Lion griffe", GenererNombreAleatoire(5, 15), capacitesLion);

    // Utilisation des méthodes
    heros.AfficherInfos();
    epee.AfficherInfos();
    lion.AfficherInfos();
    lion.AfficherCapacites();

    // Utilisation de conditions et de boucles
    if (heros.GetNiveau() > lion.GetNiveau()) {
        std::cout << "Le héros est plus fort que le lion !" << std::endl;
    }
    else if (heros.GetNiveau() < lion.GetNiveau()) {
        std::cout << "Le lion est plus fort que le héros !" << std::endl;
    }
    else {
        std::cout << "Le héros et le lion ont le même niveau." << std::endl;
    }

    int nombreIterations = 3;
    std::cout << "Attaque du héros " << nombreIterations << " fois : " << std::endl;
    for (int i = 0; i < nombreIterations; ++i) {
        heros.Attaquer();
    }

    int pointsDeVieMonstre = 100;

