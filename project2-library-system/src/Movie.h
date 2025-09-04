#ifndef MOVIE_H
#define MOVIE_H

#include "Item.h"
#include <vector>

class Movie : public Item
{
    string title, director;
    vector<string> mainActors;
public:
        Movie(string name, string description, string id, string title, string
    director, vector<string> actors);
        void displayDetails(ostream &os) const override;
};  

#endif
