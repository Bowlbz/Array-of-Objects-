/*This class has overload constructors, but will become an array of 
objects*/

#ifndef INVENTORYITEMS_H
#define INVENTORYITEMS_H
#include <string>

using namespace std;


class InventoryItem
{
  private:
    string description;
    double cost;
    int units;

  public:
    InventoryItem() // Default Constructor#1 ****** Initial Values to all items
    {
      description = "";
      cost = 0.0;
      units = 0;
    }

    InventoryItem(string desc) //Parameterized Constructor#2 **** Overloaded
    {
      description = desc;
      cost = 0.0;
      units = 0;
    }

    InventoryItem(string desc, double c, int u) //Parameterized Constructor#3 **
    {
      description = desc;
      cost = c;
      units = u;
    }

    //Mutator Functions
    void setDescription(string desc) { description = desc;}
    void setCost(double c) { cost = c;}
    void setUnits(int u) { units = u; }

    //Accessor Functions
    string getDescription() const { return description; }
    double getCost() const { return cost; }
    int getUnits() const { return units; }

};
#endif