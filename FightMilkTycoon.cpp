#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;
    /*
    Ingredients: Crow Eggs, Milk, Vodka,  Cups, Ice Cubes

     *
    Costs:  , 0.03 ice cube, 0.23 cup,
     *
     *int 16 Crow Eggs     $1.44
     *int 1 litre milk     $0.80
     *double 0.5 litre cream  $1.10
     *double 8 ounces vodka   $5.25 1 Bottle = 16 ounces
     *int 10 bottles          $2.30
                        $10.89

    */

void inventory(int crowEggs,int milk,int vodka,int cream,int emptyBottles,int fullBottles);


// double EGGCOST = 0.09, MILKCOST = 0.80, CREAMCOST = 2.20, VODKACOST = 15.75, BOTTLECOST = 0.23;
int main(){

int crowEggs = 32, milk = 2, emptyBottles = 20, fullBottles = 0, vodka = 36, cream = 1000;

inventory(crowEggs, milk, vodka, cream, emptyBottles, fullBottles);

Sleep(2000);

	cout << "Press any key to make Some fight milk\n";
cin.ignore();

	crowEggs = crowEggs - 16;
	milk = milk - 1;
	emptyBottles = emptyBottles - 10;
	fullBottles = fullBottles + 10;
	vodka = vodka - 18;
	cream = cream - 500;

Sleep(2000);

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
/*
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






