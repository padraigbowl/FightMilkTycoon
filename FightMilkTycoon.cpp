#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;
    /*
    Ingredients: Crow Eggs, Milk, Vodka,  Cups, Ice Cubes

// double EGGCOST = 0.09, MILKCOST = 0.80, CREAMCOST = 2.20, VODKACOST = 20.30, BOTTLECOST = 0.23;     *

     *16 Crow Eggs          $1.44
     *1 litre milk          $0.80
     *0.5 litre cream       $1.10
     *18 ounces vodka       $10.15 1 Bottle = 36 ounces
     *10 bottles            $2.30
     *total/per bottle      $15.80/1.58

    */

void inventory(int crowEggs,int milk,int vodka,int cream,int emptyBottles,int fullBottles);



int main(){

int crowEggs = 32, milk = 2, emptyBottles = 20, fullBottles = 0, vodka = 36, cream = 1000;

inventory(crowEggs, milk, vodka, cream, emptyBottles, fullBottles);

	cout << "Press any key to make Some fight milk\n";
cin.ignore();

	crowEggs = crowEggs - 16;
	milk = milk - 1;
	emptyBottles = emptyBottles - 10;
	fullBottles = fullBottles + 10;
	vodka = vodka - 18;
	cream = cream - 500;

inventory(crowEggs, milk, vodka, cream, emptyBottles, fullBottles);
system("pause");


return 0;
}

void inventory(int crowEggs,int milk,int vodka,int cream,int emptyBottles,int fullBottles)
{

	cout << "Inventory:\n";
	cout << "Crow Eggs: \t" << crowEggs << "\n";
	cout << "Milk: \t\t" << milk << "L\n";
	cout << "Vodka: \t\t" << vodka << "oz\n";
	cout << "Cream: \t\t" << cream << "ml.\n\n";
	cout << "Empty Bottles: " << emptyBottles << "\n";
	cout << "Full Bottles:  " << fullBottles << "\n";
}
/*This needs to be a class method
void makeFightMilk(int crowEggs,int milk,int vodka,int cream,int emptyBottles,int fullBottles)
{
void makeFightMilk(int crowEggs,int milk,int vodka,int cream,int emptyBottles,int fullBottles);
if(crowEggs >= 16, milk >= 1, vodka >= 18, cream >= 500, emptyBottles >= 10)
{
	crowEggs = crowEggs - 16;
	milk = milk - 1;
	emptyBottles = emptyBottles - 10;
	fullBottles = fullBottles + 10;
	vodka = vodka - 18;
	cream = cream - 500;
}else{
	cout << "You do not have enough ingredients to make a full batch of Fight Milk\n";
}
}
*/






