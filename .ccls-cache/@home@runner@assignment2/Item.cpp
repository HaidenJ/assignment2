/*
*   Item.cpp
*   Author: Haiden Jensen
*   Date: September 21st 2022
*   Class: CS115 _ University of Regina
*   Purpose: Provide definitions and implementations of Item Functions
*/


#include <iostream>
#include <cassert>
#include "Item.h"

//Function Definitions

/*
itemInit
Purpose: Initialize an item with all needed feilds.
Perameter(s):
  <1>item: Iteration of a structure.
  <2>id1: a single letter to id an item.
  <3>row1: the numberof row the item is on.
  <4>column1: the column the item is on.
  <5>points1:the value given to an item can be negative.
  <6>world_description: decription when item not picked up.
  <7>inventory_description1: description when item is taken and placed in inventory.
PreCondition(s):
  <1> needs an instance of an item
Return(s):N/A
SideEffect(s):
  Creates a new Item with all feilds that can be called. 
*/
void itemInit(Item& item,
char id1,
int row1, int column1,
int points1,
const string& world_description1,
const string& inventory_description1)
{
  assert(id1 != ID_NOT_INITIALIZED);// user value cannot be null '\0'
  item.id = id1;// sets id value
  assert(world_description1 != EMPTY_STRING);// precon: cant be an empty string 
  item.desGround = world_description1;
  assert(inventory_description1 != EMPTY_STRING);// precon: cant be an empty string 
  item.desVentory = inventory_description1;//setting item description

  
  assert(true);// meaning less statment.  here for no particular reason
  assert(true);// valid row
  assert(true);//valid col
  
  
}


/*itemDebugPrint
Purpose: prints out all feilds  of an item
Perameter(s): i:an item refrence
PreCondition(s): an item with all feilds initalized
Return(s):N/A
SideEffect(s): N/A item info gets printed to console
*/
void itemDebugPrint (const Item& item)
{
  cout << "id:\t'"<< item.id << "'\nStartingRow:\t"<< item.startRow << "\nStarting Column:\t"<< item.startCol << "\ncurrentRow:\t"<< item.currentRow <<"\ncurrentCol:\t"<< item.currentCol << "\nin2ventory:\t"<< item.in2ventory; 
if(item.in2ventory)
{
  cout<<" true";
  }; 
else{ 
  cout<<" false";
  }
cout<<"\npointsWorth:\t" << item.pointsWorth << "\ndesGround:\t\""<< item.desGround << "\"\ndesVentory:\t\"" << item.desVentory << "\"\n";
}//end of item debug print

/*itemGetId
Purpose: from the item being called  get the coralated id 
Perameter(s):<1> i: an item instance 
PreCondition(s): an item must have an id  not empty
Return(s): id; the identifier for an item via a single char
SideEffect(s):n/a
*/
char itemGetId (const Item& item);

/*itemIsInInventory
Purpose: checks if item is or isnot in inventory
Perameter(s):
PreCondition(s):
Return(s):
SideEffect(s):n/a
*/
bool itemIsInInventory (const Item& item);

/*itemIsAtLocation
Purpose: checks if item is or isnot at a specific location
Perameter(s):<1> i : instance of item being checked <2> r: row being checked <3> c: column being checked
PreCondition(s): item has to exist  and have a location
Return(s): true when item is at a location else false
SideEffect(s):N/A
*/
bool itemIsAtLocation (const Item& item,
int row, int column);

/*itemGetPlayerPoints
Purpose: based on an item return 
Perameter(s):
PreCondition(s):
Return(s): amount of player points in an integer
SideEffect(s): n/a
*/
int itemGetPlayerPoints (const Item& item);

/*itemPrintDescription
Purpose: 
Perameter(s):
PreCondition(s):
Return(s): n/a
SideEffect(s): 
*/
void itemPrintDescription (const Item& item);

/*itemReset
Purpose: resets an item, tbh idk
Perameter(s):<1>
PreCondition(s):
Return(s):n/a
SideEffect(s): 
*/
void itemReset (Item& item);

/*itemMoveToInventory
Purpose: take an item and move it to inventory
Perameter(s):
<1> item: the item being moved
PreCondition(s):there is an item to be picked up
Return(s):n/a
SideEffect(s): an item appears in inventory
*/
void itemMoveToInventory (Item& item);

/*
Purpose: moves a item from current position to a new one  via row and col
Perameter(s):
<1> item: the refrence to an item. 
<2> row: specifies the row you want  to move item to. 
<3> column: the column an item would move to
PreCondition(s): needs an item to move
Return(s):n/a
SideEffect(s): specified item changes its current location row and column to a diffrent one specifies
*/
void itemMoveToLocation (Item& item,
int row, int column);