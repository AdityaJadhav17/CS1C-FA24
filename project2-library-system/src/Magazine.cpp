#include "Magazine.h"

Magazine::Magazine(string name, string description, string id, string edition,
string mainArticle)
    : Item(name, description, id), edition(edition), mainArticleTitle(mainArticle)
{}

void Magazine::displayDetails(ostream &os) const
{
    os << "Magazine: " << edition << ", Main Article: " << mainArticleTitle
    << ", Name: " << name << ", Description: " << description
    << ", ID: " << id;
}