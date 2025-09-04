#include "Movie.h"

Movie::Movie(string name, string description, string id, string title, string
director, vector<string> actors)
    : Item(name, description, id), title(title), director(director),
mainActors(actors) {}

void Movie::displayDetails(ostream &os) const
{
    os << "Movie: " << title << ", Director: " << director
       << ", Main Actors: ";
    for (const auto &actor : mainActors)
        os << actor << " ";
    os << ", Name: " << name << ", Description: " << description
<< ", ID: " << id;
}
