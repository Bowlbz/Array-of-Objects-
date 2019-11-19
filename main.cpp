//C++ Array of Class Objects *******
//Bowlby, Dr_T COSC 1438-58001 Nov 19, 2019


#include <iostream>
#include <iomanip>
#include <vector>
#include "InventoryItem.h"

using namespace std;

int main() 
{
 //Constructor EXAMPLES ****************
 //Instantiate an inventory item, item1 using the default constructor
 InventoryItem item1; //default constructor is call no arguments passed
 
 //Instantiate an inventory item desc Hammer with one parameter constructor
 InventoryItem item2("Hammer"); //put value into the string ******

 item1.setDescription("Saw"); //Instantiate Values seperatly**
 item1.setCost(25.99);
 item1.setUnits(8);

 InventoryItem item3("FlatHead Screwdriver", 5.33, 63);//Instantiate Values 1 line **

 //************ Array of Objects ***********

 //Goal store and effeciently display the items in the list (array)

const int NUM_ITEMS = 3; //Initial DATA SIZE of the array * Must SET FIRST *
InventoryItem inventoryArray[NUM_ITEMS]; //Setting the size to the Array

inventoryArray[0] = item1; //places item 1 
inventoryArray[1] = item2; //places item 2
inventoryArray[2] = item3; //places item 3

cout << "\nItem in the Inventory list: " << endl;
cout << setw(14) << "Inventory Item " 
     << setw(8) << "Cost"
     << setw(16) << "Units on Hand\n";
cout << "************************************\n" ;

//Access the individual elements of the Array *****
for(int i = 0; i < NUM_ITEMS; i++) //FOR LOOP to go through the Array
{
  cout << setw(20) << inventoryArray[i].getDescription();
  cout << setw(8) << inventoryArray[i].getCost();
  cout << setw(7) << inventoryArray[i].getUnits();
  cout << endl;
}

//Output this data using a vector ***********************************************
//vector inventoryVector

//Instantiate the Vector "vector< class name > vector name" *****
vector<InventoryItem> inventoryVector; // equal to lines #22 & #23 DOES NOT SIZE

inventoryVector.push_back(item1); //equal to line 24
inventoryVector.push_back(item2); //equal to line 25
inventoryVector.push_back(item3); //equal to line 26

cout << "\nItem in the Inventory list: " << endl;
cout << setw(14) << "Inventory Item " 
     << setw(8) << "Cost"
     << setw(16) << "Units on Hand\n";
cout << "************************************\n" ;
for(InventoryItem x : inventoryVector)
{
  cout << setw(20) << x.getDescription(); // equal to line 47
  cout << setw(8) << x.getCost(); // equal to line 48
  cout << setw(7) << x.getUnits(); // equal to line 49
  cout << endl;
}




















 
 return 0; 
}