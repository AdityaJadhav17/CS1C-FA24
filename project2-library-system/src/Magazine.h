#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "Item.h"

class Magazine : public Item
{
    string edition, mainArticleTitle;
public:
    Magazine(string name, string description, string id, string edition, string
mainArticle);
    void displayDetails(ostream &os) const override;
};

#endif
