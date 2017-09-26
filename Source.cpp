#include <iostream>
#include <string>
#include "Entity.h"
#include "Assassin.h"
#include "Robot.h"
#include "Spartan.h"
#include "Witcher.h"
#include "Nord.h"
#include "Ninja.h"
#include "Soldier.h"
#include <time.h>



int main()
{
	srand(time(NULL));
	Entity* ezio = new Assassin();
	Entity* masterChief = new Spartan();
	Entity* zero = new Robot();
	Entity* geralt = new Witcher();
	Entity* ulfric = new Nord();
	Entity* scorpion = new Ninja();
	Entity* shepard = new Soldier();
	Entity** participants = new Entity*[7];
	
	participants[0] = ezio;
	participants[1] = masterChief;
	participants[2] = zero;
	participants[3] = geralt;
	participants[4] = ulfric;
	participants[5] = scorpion;
	participants[6] = shepard;
	for (int i = 0; i < 20; i++)
	{
		int opponentOne = rand() % 7;
		int opponentTwo = rand() % 7;
		if (opponentTwo == opponentOne)
		{
			opponentTwo += 1;
		}
		
		participants[opponentOne]->Attack(*participants[opponentTwo]);
		
	}


	

	system("pause");
}