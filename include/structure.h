#ifndef STRUCTURE_H
#define STRUCTURE_H

struct Meeple{
    int position;
    char couleur;
};

struct Tuile{
    char * elements;
    struct Meeple * meeple;
};


struct Joueur{
    int score;
    int meeple;
    char couleur;
};

struct Coordonnees{
    int j1, j2;
    int j, i1, i2;
};

struct ListeChainee{
    struct Tuiile * tuile;
    struct ListeChainee* suivant;
};

#endif