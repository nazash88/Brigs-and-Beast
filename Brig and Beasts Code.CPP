//Brigs_and_Beasts
// 7/27/21
// This program is a RPG typing-based dungeons and dragons story-based game.
//Version 1

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  	string RPG_Class;
  	string Warrior;
  	string Mage;
  	string Assassin;
 	int r1;
  	int r2;
  	int r3;
	string go;
  	int Warrior_health = 20;
  	int Warrior_attack = 7;
  	int Warrior_stamina = 10;
  	int slash = Warrior_attack;
  	int heavy_slash = Warrior_attack + r1;

  	int Mage_health = 10;
  	int Mage_mana = 12;
  	int Mage_attack = 10;
  	int blast = Mage_attack;
  	int magic_missile = Mage_attack + r1 + r2 + r3;	
	    
  	int Assassin_health = 10;
  	int Assassin_stamina = 8;
  	int Assassin_attack = 15;
  	int stab = Assassin_attack;
  	int back_stab;
	
  	string decision;
	
  
  	cout << "Pick a class" << endl << "Warrior" << endl << "Mage" << endl << "Assassin" << endl << endl;
  	cout << "Select class: ";
  	cin >> RPG_Class;

  	if(RPG_Class == "Warrior")
  	{
    	int Warrior_health = 20;
    	int Warrior_stamina = 10;
    	int Warrior_attack = 5;
		int slash = Warrior_attack;
		int heavy_slash = Warrior_attack + r1;
    	cout << "health: " << Warrior_health << endl;
    	cout << "stamina: " << Warrior_stamina << endl;
    	cout << "attack: " << Warrior_attack << endl;
		cout << "skills:" << " slash" << " and " << "heavy_slash" << endl;
  	}
  	else if(RPG_Class == "Mage")
  	{
    	int Mage_health = 10;
    	int Mage_mana = 12;
    	int Mage_attack = 10;
    	int blast = Mage_attack;
		int magic_missile = Mage_attack + r1 + r2 + r3;
    	cout << "health: " << Mage_health << endl;
    	cout << "mana: " << Mage_mana << endl;
    	cout << "attack: " << Mage_attack << endl;
		cout << "skills:" << " blast" << " and " << "magic_missile" << endl;
  	}
  	else if(RPG_Class == "Assassin")
  	{
    	int Assassin_health = 10;
    	int Assassin_stamina = 8;
    	int Assassin_attack = 15;
		int stab = Assassin_attack;
		int back_stab;
		if(r1 <= 2)
		{
			back_stab = Assassin_attack * 1;
		}
		else if(r1 <= 4)
		{
			back_stab = Assassin_attack * 2;
		}
		else if(r1 <= 6)
		{
			back_stab = Assassin_attack * 3;
		}
    	cout << "health: " << Assassin_health << endl;
    	cout << "stamina: " << Assassin_stamina << endl;
    	cout << "attack: " << Assassin_attack << endl;
		cout << "skills:" << " stab" << " and " << "back_stab" << endl << endl;
  	}

  	cout << "Will you take the right_path, left_path, or middle_path?" << endl << endl;
	cout << "Type your choice: ";
  	cin >> decision;

  	if (decision == "right_path")
  	{

    cout << "Your path takes you down a mountainous path. ";
  	}
  	if (decision == "left_path")
  	{
    cout << "Walking down the left path.";
  	}
  	if (decision == "middle_path")
  	{
    cout << "Walking down the middle path.";
  	}
    cout << endl;



	
	if(decision == "middle_path")
  {
    cout << "The path you find is a frozen tundra, solidified by icy air that makes your body tremble, and what seems to be all encompasing snow around you which distrorts your visbility. Freezing and starving you come across a cave and something perculiar is there. " << endl << endl;
    cout << "Type go to continue forwards: ";
    cin >> go;
      srand((int)time(0));
        int r1 = 0;

        r1 = (rand() % 6) + 1; // this roles a number between 1-6 and will dicide what will happen.
    if(r1 <= 3)
    {
        cout << "you encountered a wolf prepare for battle" << endl;
        cout << "wolf stats" << endl;
        int wolf_health = 32;
        int wolf_attack = 4;
        cout << "health: " << wolf_health << endl;
            cout << "attack: " << wolf_attack << endl;
      string move;
      
      if(RPG_Class == "Warrior")
        {
          while(wolf_health > 10 && Warrior_health > 0) 
          {
            cout << "select a skill: slash or heavy_slash" << endl << endl;
            cout << "Type your choice: ";
            cin >> move;
            if(move == "slash") 
            {
              int slash = Warrior_attack;
              wolf_health = wolf_health - slash;
              cout << "wolf current heath: " << wolf_health << endl;
              cout << "wolf counter attacks" << endl;
              Warrior_health = Warrior_health - 2;
              cout << "Player current health: " << Warrior_health << endl;
            }
            else if(move == "heavy_slash" && Warrior_stamina > 0)
            {
              srand((int)time(0));
                  int r1 = 0;
                  r1 = (rand() % 6) + 1;
              cout << "dice role: " << r1 << endl;
              int heavy_slash = Warrior_attack + r1;
              wolf_health = wolf_health - heavy_slash;
              cout << "wolf current heath: " << wolf_health << endl;
              cout << "wolf counter attacks" << endl;
              Warrior_health = Warrior_health - 2;
              Warrior_stamina = Warrior_stamina -1;
              cout << "Player current health: " << Warrior_health << endl;
              cout << "Player current stamina: " << Warrior_stamina << endl;
            }
          }
          if(Warrior_health == 0)
          {
            cout << "you have been defeated" << endl;
            return 0;
          }
        }
        if(RPG_Class == "Mage")   
        {
          while(wolf_health > 10 && Mage_health > 0)  
          {
            cout << "select a skill: blast or magic_missile" << endl << endl;
            cout << "Type your choice: ";
            cin >> move;
            if(move == "blast") 
            {
              int blast = Mage_attack;
              wolf_health = wolf_health - blast;
              cout << "wolf current heath: " << wolf_health << endl;
              cout << "wolf counter attacks" << endl;
              Mage_health = Mage_health - 2;
              cout << "Player current health: " << Mage_health << endl;
            }
            else if(move == "magic_missile" && Mage_mana > 0)
            {
              srand((int)time(0));
                  int r1 = 0;
              int r2 = 0;
              int r3 = 0;
                  r1 = (rand() % 6) + 1;
              r2 = (rand() % 6) + 1;
              r3 = (rand() % 6) + 1;
              cout << "dice role: " << r1 << " " << r2 << " " << r3 << endl;
              int magic_missile = Mage_attack + r1 + r2 + r3;
              wolf_health = wolf_health - magic_missile;
              cout << "wolf current heath: " << wolf_health << endl;
              cout << "wolf counter attacks" << endl;
              Mage_health = Mage_health - 2;
              Mage_mana = Mage_mana -2;
              cout << "Player current health: " << Mage_health << endl;
              cout << "Player current mana: " << Mage_mana << endl;
            }
          }
          if(Mage_health == 0)
          {
            cout << "you have been defeated" << endl;
            return 0;           
          }   
        }
        if(RPG_Class == "Assassin")
        {
          while(wolf_health > 10 && Assassin_health > 0)  
          {
            cout << "select a skill: stab or back_stab" << endl << endl;
            cout << "Type your choice: ";
            cin >> move;
            if(move == "stab")  
            {
              int stab = Assassin_attack;
              wolf_health = wolf_health - stab;
              cout << "wolf current heath: " << wolf_health << endl;
              cout << "wolf counter attacks" << endl;
              Assassin_health = Assassin_health - 2;
              cout << "Player current health: " << Assassin_health << endl;
            }
            else if(move == "back_stab" && Assassin_stamina > 0)
            {
              srand((int)time(0));
                  int r1 = 0;
                  r1 = (rand() % 6) + 1;
              cout << "dice role: " << r1 << endl;
              int back_stab;
              if(r1 <= 2)
              {
                back_stab = Assassin_attack * 1;
                wolf_health = wolf_health - back_stab;
                cout << "wolf current heath: " << wolf_health << endl;
                cout << "wolf counter attacks" << endl;
                Assassin_health = Assassin_health - 2;
                Assassin_stamina = Assassin_stamina -2;
                cout << "Player current health: " << Assassin_health << endl;
                cout << "Player current stamina: " << Assassin_stamina << endl;
              }
              else if(r1 <= 4)
              {
                back_stab = Assassin_attack * 2;
                wolf_health = wolf_health - back_stab;
                cout << "wolf current heath: " << wolf_health << endl;
                cout << "wolf counter attacks" << endl;
                Assassin_health = Assassin_health - 2;
                Assassin_stamina = Assassin_stamina -2;
                cout << "Player current health: " << Assassin_health << endl;
                cout << "Player current stamina: " << Assassin_stamina << endl;               
              }
              else if(r1 <= 6)
              {
                back_stab = Assassin_attack * 2;
                wolf_health = wolf_health - back_stab;
                cout << "wolf current heath: " << wolf_health << endl;
                cout << "wolf counter attacks" << endl;
                Assassin_health = Assassin_health - 2;
                Assassin_stamina = Assassin_stamina -2;
                cout << "Player current health: " << Assassin_health << endl;
                cout << "Player current stamina: " << Assassin_stamina << endl;
              }
            }
          }
          if(Assassin_health == 0)
          {
            cout << "you have been defeated" << endl;
            return 0;
          }
        }
          cout << endl;
          cout << "Howling in agony the wolf plummits to the"  << endl;
          cout << "ground. You have defeated the wolf." << endl;
          cout << "The wolf was guarding her child." << endl;
          cout << "The baby wolf decides to follow you." << endl;
            if(RPG_Class == "Warrior")
            {
                Warrior_attack = Warrior_attack + 5;
            cout << "attack: " << Warrior_attack << endl;
            }
            if(RPG_Class == "Mage")
            {
                Mage_attack = Mage_attack + 5;
            cout << "attack: " << Mage_attack << endl;
            } 
          if(RPG_Class == "Assassin")
            {
                Assassin_attack = Assassin_attack + 5;
            cout << "attack: " << Assassin_attack << endl;
            } 
    }
    else if (r1 >= 4)
    {
        cout << "You come across a mystyical chest with accient engravings on it what do you do?"<< endl;
        cout << "yes or no" << endl << endl; 
      cout << "Type your choice: ";
        cin >> decision;
      cout << endl;
        if(decision == "yes")
        {
          cout << "You open the chest to your suprise a snake bites your hand." << endl;
        cout << "To your suprise your hand starts rapidly decaying out of fear you unsheethe your weapon and attack your hand or else you fear you will die." << endl;
        cout << "power."<< endl;
        
          if(RPG_Class == "Warrior")
          {
            Warrior_health = Warrior_health - 5;
                Warrior_stamina = 10;
                Warrior_attack = Warrior_attack + 1;
              int slash = Warrior_attack;
              int heavy_slash = Warrior_attack + r1;
            cout << "health: " << Warrior_health << endl;
            cout << "attack: " << Warrior_attack << endl;
          }
        if(RPG_Class == "Mage")
          {
            Mage_health = Mage_health - 3;
                Mage_mana = 10;
                Mage_attack = Mage_attack + 1;
              int blast = Mage_attack;
              int magic_missile = Mage_attack + r1 + r2 + r3;
            cout << "luckily you remember a magical spell to stop the decay" << endl;
            cout << "health: " << Mage_health << endl;
            cout << "attack: " << Mage_attack << endl;
          }
        if(RPG_Class == "Assassin")
        {
          Assassin_health = Assassin_health - 3;
          Assassin_stamina = 8;
          Assassin_attack = Assassin_attack + 1;
          int stab = Assassin_attack;
              int back_stab;
          cout << "health: " << Assassin_health << endl;
          cout << "attack: " << Assassin_attack << endl;
        }
        }
    }
    
    cout << endl;
    cout << "type go to move forawrd: ";
    cin >> go;
    if(go == "go")
    {
      cout << "you move forward towards the next section by walking across this forzen desert." << endl << endl;
    }
    string decision2;
    cout << endl;
    cout << "In front of you see an abandoned camp and you decide to rest here for a bit during your travels a wolf followed you here." << endl; 
    cout << "your currant stats:" << endl << endl;
    if(RPG_Class == "Mage")
    {
      cout << "health: " << Mage_health << endl;
      cout << "mana: " << Mage_mana << endl;
      cout << "attack: " << Mage_attack << endl;
    }
    if(RPG_Class == "Warrior")
    {
      cout << "health: " << Warrior_health << endl;
      cout << "stamina: " << Warrior_stamina << endl;
      cout << "attack: " << Warrior_attack << endl;
    }
    if(RPG_Class == "Assassin")
    {
      cout << "health: " << Assassin_health << endl;
      cout << "stamina: " << Assassin_stamina << endl;
      cout << "attack: " << Assassin_attack << endl;
    }
    cout << endl;
    cout << "type go to move forawrd: ";
    cin >> go;
    cout << "A shopkeeper after seeing your pet wolf approaches you offering to buy it" << endl;
    cout << "you have three options" << endl;
    cout << "your choices are sell, rubuke, or" << endl;
    cout << "decline" << endl << endl;
    cout << "Type your choice: ";
    cin >> decision2;
    if(decision2 == "sell")
    {
      if(RPG_Class == "Warrior")
      {
        cout << "health goes down by 1 after biting your hand and running off" << endl;
        Warrior_health = Warrior_health -1 ;
        cout << "current health: " << Warrior_health << endl;
      }
      if(RPG_Class == "Mage")
      {
        cout << "health goes down by 1 after it bit your hand and ran off" << endl;
        Mage_health = Mage_health - 1;
        cout << "current health: " << Mage_health << endl;
      }
      if(RPG_Class == "Assassin")
      {
        cout << "health goes down by 1 after it bit your hand and ran off" << endl;
        Assassin_health = Assassin_health - 1;
        cout << "current health: " << Assassin_health << endl;
      }
    }
    if(decision2 == "rebuke")
    {
      if(RPG_Class == "Warrior")
      {
        cout << "stamina goes up by 5 wolf gathers up the strength to fully trust you" << endl;
        Warrior_stamina = Warrior_stamina + 5;
        cout << "current stamina: " << Warrior_stamina << endl;
      }
      if(RPG_Class == "Mage")
      {
        cout << "mana goes up by 6 as mana shines upon you " << endl;
        Mage_mana = Mage_mana + 6;
        cout << "current mana: " << Mage_mana << endl;
      }
      if(RPG_Class == "Assassin")
      {
        cout << "stamina goes up by 4" << endl;
        Assassin_stamina = Assassin_stamina + 4;
        cout << "current stamina: " << Assassin_stamina << endl;
      }
    }
    if(decision2 == "decline")
    {
      if(RPG_Class == "Warrior")
      {
        cout << "attack goes up by 3 as the wolf as a reward for defending you him he decides to protext you ferciously" << endl;
        Warrior_attack = Warrior_attack + 3;
        cout << "current attack: " << Warrior_attack << endl;
      }
      if(RPG_Class == "Mage")
      {
        cout << "attack goes up by 3 as the wolf as a reward for defending him  he decides to protext you ferciously" << endl;
        Mage_attack = Mage_attack + 3;
        cout << "current attack: " << Mage_attack << endl;
      }
      if(RPG_Class == "Assassin")
      {
        cout << "attack goes up by 3 as the wolf as a reward for defending him  he decides to protext you ferciously" << endl;
        Assassin_attack = Assassin_attack + 3;
        cout << "current attack: " << Assassin_attack << endl;
      }
    }
    cout << endl;
    cout << "type go to move forawrd: ";
    cin >> go;
    if(go == "go")
    {
      cout << "you move forward towards the next section." << endl << endl;
    }
    cout << "As you are moving  you remembers rumours of a strange monster up ahead " << endl;
    cout << "and as you walk you hear roars." << endl;
    cout << "Now that you are right next to the creature the roaring stops as you see creature in front of you" << endl;
    cout << "The yeti smirks across his face showing his massive teeth as if you are easy prey." << endl << endl;
    cout << "You prepare for battle" << endl;
    cout << "Yeti stats: " << endl << endl;;
    int Yeti = 80;
    int evil_gate_attack = 1;
    cout << "health: " << Yeti << endl;
        cout << "attack: " << evil_gate_attack << endl << endl;
    cout << "Enter battle to beggin: ";
    string decision3;
    cin >> decision3;
    if(decision3 == "battle")
    {
      if(RPG_Class == "Warrior")
      {
        while(Yeti > 30 && Warrior_health > 0)  
        {
          cout << "select a skill: slash or heavy_slash" << endl << endl;
          cout << "Type your choice: ";
          string move2;
          cin >> move2;
          if(move2 == "slash")  
          {
            int slash = Warrior_attack;
            Yeti = Yeti - slash;
            cout << "Yeti's current heath: " << Yeti << endl;
            cout << "Yeti counter attacks" << endl;
            Warrior_health = Warrior_health - 1;
            cout << "Player current health: " << Warrior_health << endl;
          }
          else if(move2 == "heavy_slash" && Warrior_stamina > 0)
          {
            srand((int)time(0));
                int r1 = 0;
                r1 = (rand() % 6) + 1;
            cout << "dice role: " << r1 << endl;
            int heavy_slash = Warrior_attack + r1;
            Yeti = Yeti - heavy_slash;
            cout << "Yeti's current heath: " << Yeti << endl;
            cout << "Yeti counter attacks" << endl;
            Warrior_health = Warrior_health - 1;
            Warrior_stamina = Warrior_stamina -1;
            cout << "Player current health: " << Warrior_health << endl;
            cout << "Player current stamina: " << Warrior_stamina << endl;
          }
        }
        if(Warrior_health == 0)
        {
          cout << "you have been defeated" << endl;
          return 0;
        }
      }
      if(RPG_Class == "Mage")   
      {
        while(Yeti > 30 && Mage_health > 0) 
        {
          cout << "select a skill: blast or magic_missile" << endl << endl;
          cout << "Type your choice: ";
          string move2;
          cin >> move2;
          if(move2 == "blast")  
          {
            int blast = Mage_attack;
            Yeti = Yeti - blast;
            cout << "Yeti's current heath: " << Yeti << endl;
            cout << "Yeti counter attacks" << endl;
            Mage_health = Mage_health - 1;
            cout << "Player current health: " << Mage_health << endl;
          }
          else if(move2 == "magic_missile" && Mage_mana > 0)
          {
            srand((int)time(0));
                int r1 = 0;
            int r2 = 0;
            int r3 = 0;
                r1 = (rand() % 6) + 1;
            r2 = (rand() % 6) + 1;
            r3 = (rand() % 6) + 1;
            cout << "dice role: " << r1 << " " << r2 << " " << r3 << endl;
            int magic_missile = Mage_attack + r1 + r2 + r3;
            Yeti = Yeti - magic_missile;
            cout << "Yeti's current heath: " << Yeti << endl;
            cout << "Yeti counter attacks" << endl;
            Mage_health = Mage_health - 1;
            Mage_mana = Mage_mana -2;
            cout << "Player current health: " << Mage_health << endl;
            cout << "Player current mana: " << Mage_mana << endl;
          }
        }
        if(Mage_health == 0)
        {
          cout << "you have been defeated" << endl;
          return 0;           
        }   
      }
      if(RPG_Class == "Assassin")
        {
        while(Yeti > 30 && Assassin_health > 0) 
        {
          cout << "select a skill: stab or back_stab" << endl << endl;
          cout << "Type your choice: ";
          string move2;
          cin >> move2;
          if(move2 == "stab") 
          {
            int stab = Assassin_attack;
            Yeti = Yeti - stab;
            cout << "Yeti's current heath: " << Yeti << endl;
            cout << "Yeti counter attacks" << endl;
            Assassin_health = Assassin_health - 1;
            cout << "Player current health: " << Assassin_health << endl;
          }
          else if(move2 == "back_stab" && Assassin_stamina > 0)
          {
            srand((int)time(0));
                int r1 = 0;
                r1 = (rand() % 6) + 1;
            cout << "dice role: " << r1 << endl;
            int back_stab;
            if(r1 <= 2)
            {
              back_stab = Assassin_attack * 1;
              Yeti = Yeti - back_stab;
              cout << "Yeti's current heath: " << Yeti << endl;
              cout << "Yeti counter attacks" << endl;
              Assassin_health = Assassin_health - 1;
              Assassin_stamina = Assassin_stamina -2;
              cout << "Player current health: " << Assassin_health << endl;
              cout << "Player current stamina: " << Assassin_stamina << endl;
            }
            else if(r1 <= 4)
            {
              back_stab = Assassin_attack * 2;
              Yeti = Yeti - back_stab;
              cout << "Yeti's current heath: " << Yeti << endl;
              cout << "Yeti counter attacks" << endl;
              Assassin_health = Assassin_health - 2;
              Assassin_stamina = Assassin_stamina -2;
              cout << "Player current health: " << Assassin_health << endl;
              cout << "Player current stamina: " << Assassin_stamina << endl;               
            }
            else if(r1 <= 6)
            {
              back_stab = Assassin_attack * 3;
              Yeti = Yeti - back_stab;
              cout << "Yeti's current heath: " << Yeti << endl;
              cout << "Yeti counter attacks" << endl;
              Assassin_health = Assassin_health - 2;
              Assassin_stamina = Assassin_stamina -2;
              cout << "Player current health: " << Assassin_health << endl;
              cout << "Player current stamina: " << Assassin_stamina << endl;
            }
          }
        }
        if(Assassin_health == 0)
        {
          cout << "you have been defeated" << endl;
          return 0;
        }
      }
    } 
    cout << endl;
    cout << "As you strike a leathal blow to the Yeti" << endl;
    cout << "its gate's fling open and you are able to continue" << endl;
    cout << "up ahead. " << endl << endl;
    cout << "When you pass threw the gate you feel your body rejuvenated." << endl;
    
    if(RPG_Class == "Warrior")
      {
            Warrior_health = Warrior_health + 3;
      Warrior_stamina = Warrior_stamina + 4;
        cout << "health: " << Warrior_health << endl;
      cout << "stamina: " << Warrior_stamina << endl;
    }
    if(RPG_Class == "Mage")
      {
        Mage_health = Mage_health + 3;
      Mage_mana = Mage_mana + 4;
        cout << "health: " << Mage_health << endl;
      cout << "mana: " << Mage_mana << endl;
      } 
    if(RPG_Class == "Assassin")
      {
            Assassin_health = Assassin_health + 3;
      Assassin_stamina = Assassin_stamina + 4;
        cout << "health: " << Assassin_health << endl;
      cout << "stamina: " << Assassin_stamina << endl;
      }
    cout << "You move forward towards the last section" << endl;

  }


	
	
	
	if (decision == "left_path")
  {
    srand((int)time(0));
        int r1 = 0;

        r1 = (rand() % 6) + 1; // this roles a number between 1-6 and will dicide what will happen.
    if(r1 <= 3)
    {
      cout <<  "the path is a long one through a sweltering hot desert, so long that it almost seems to have no end. After a few miles you notice a large animal resembling a lizard, but at least a hundred times bigger. The animal begins to approach you. You have no choice but to battle it.\n\n ";
      cout << "Upon further inspection of the beast, its stats appear to be: \n";
      int lizard_health = 70;
      int lizard_attack = 2;
      cout << "health: " << lizard_health << endl;
      cout << "attack: " << lizard_attack << endl;
      string movePLeft;
      if(RPG_Class == "Warrior")
      {
        while(lizard_health > 20 && Warrior_health > 0) 
          {
            cout << "select a skill: slash or heavy_slash" << endl << endl;
            cout << "Type your choice: ";
            cin >> movePLeft;
            if(movePLeft == "slash")  
            {
              int slash = Warrior_attack;
              lizard_health = lizard_health - slash;
              cout << "lizard current heath: " << lizard_health << endl;
              cout << "lizard counter attacks with its razor sharp tongue" << endl;
              Warrior_health = Warrior_health - 2;
              cout << "Player current health: " << Warrior_health << endl;
            }
            else if(movePLeft == "heavy_slash" && Warrior_stamina > 0)
            {
              srand((int)time(0));
                  int r1 = 0;
                  r1 = (rand() % 6) + 1;
              cout << "dice role: " << r1 << endl;
              int heavy_slash = Warrior_attack + r1;
              lizard_health = lizard_health - heavy_slash;
              cout << "lizard current heath: " << lizard_health << endl;
              cout << "lizard counter attacks with its tail" << endl;
              Warrior_health = Warrior_health - 2;
              Warrior_stamina = Warrior_stamina -1;
              cout << "Player current health: " << Warrior_health << endl;
              cout << "Player current stamina: " << Warrior_stamina << endl;
            }
          }
          if(Warrior_health == 0)
          {
            cout << "you have been defeated" << endl;
            return 0;
          }
      }
      if(RPG_Class == "Mage")
      {
          while(lizard_health > 20 && Mage_health > 0)  
          {
            cout << "select a skill: blast or magic_missile" << endl << endl;
            cout << "Type your choice: ";
            cin >> movePLeft;
            if(movePLeft == "blast")  
            {
              int blast = Mage_attack;
              lizard_health = lizard_health - blast;
              cout << "lizard current heath: " << lizard_health << endl;
              cout << "lizard counter attacks" << endl;
              Mage_health = Mage_health - 2;
              cout << "Player current health: " << Mage_health << endl;
            }
            else if(movePLeft == "magic_missile" && Mage_mana > 0)
            {
              srand((int)time(0));
                  int r1 = 0;
              int r2 = 0;
              int r3 = 0;
                  r1 = (rand() % 6) + 1;
              r2 = (rand() % 6) + 1;
              r3 = (rand() % 6) + 1;
              cout << "dice role: " << r1 << " " << r2 << " " << r3 << endl;
              int magic_missile = Mage_attack + r1 + r2 + r3;
              lizard_health = lizard_health - magic_missile;
              cout << "lizard current heath: " << lizard_health << endl;
              cout << "lizard counter attacks" << endl;
              Mage_health = Mage_health - 2;
              Mage_mana = Mage_mana -2;
              cout << "Player current health: " << Mage_health << endl;
              cout << "Player current mana: " << Mage_mana << endl;
            }
          }
          if(Mage_health == 0)
          {
            cout << "you have been defeated" << endl;
            return 0;           
          }
      }
      if(RPG_Class == "Assassin")
      {
        while(lizard_health > 20 && Assassin_health > 0)  
          {
            cout << "select a skill: stab or back_stab" << endl << endl;
            cout << "Type your choice: ";
            cin >> movePLeft;
            if(movePLeft == "stab") 
            {
              int stab = Assassin_attack;
              lizard_health = lizard_health - stab;
              cout << "lizard current health: " << lizard_health << endl;
              cout << "lizard counter attacks" << endl;
              Assassin_health = Assassin_health - 2;
              cout << "Player current health: " << Assassin_health << endl;
            }
            else if(movePLeft == "back_stab" && Assassin_stamina > 0)
            {
              srand((int)time(0));
                  int r1 = 0;
                  r1 = (rand() % 6) + 1;
              cout << "dice role: " << r1 << endl;
              int back_stab;
              if(r1 == 1 || 2)
              {
                back_stab = Assassin_attack * 1;
                lizard_health = lizard_health - back_stab;
                cout << "lizard current health: " << lizard_health << endl;
                cout << "lizard counter attacks" << endl;
                Assassin_health = Assassin_health - 2;
                Assassin_stamina = Assassin_stamina -2;
                cout << "Player current health: " << Assassin_health << endl;
                cout << "Player current stamina: " << Assassin_stamina << endl;
              }
              else if(r1 == 3 || 4)
              {
                back_stab = Assassin_attack * 2;
                lizard_health = lizard_health - back_stab;
                cout << "lizard current health: " << lizard_health << endl;
                cout << "lizard counter attacks" << endl;
                Assassin_health = Assassin_health - 2;
                Assassin_stamina = Assassin_stamina -2;
                cout << "Player current health: " << Assassin_health << endl;
                cout << "Player current stamina: " << Assassin_stamina << endl;               
              }
              else if(r1 == 5 || 6)
              {
                back_stab = Assassin_attack * 3;
                lizard_health = lizard_health - back_stab;
                cout << "lizard current heath: " << lizard_health << endl;
                cout << "lizard counter attacks" << endl;
                Assassin_health = Assassin_health - 2;
                Assassin_stamina = Assassin_stamina -2;
                cout << "Player current health: " << Assassin_health << endl;
                cout << "Player current stamina: " << Assassin_stamina << endl;
              }
            }
          }
          if(Assassin_health == 0)
          {
            cout << "you have been defeated" << endl;
            return 0;
          }
        }
        else if(Assassin_health == 0)
        {
          cout << "you have been defeated" << endl;
          return 0;
        }
    cout << endl << "The lizard begins to stumble.\n";
    cout << "it falls over followed by a loud slam to the ground.\n";
    cout << "The monster has been defeated.\n\n";
    cout << "upon closer inspection, a golden orb seems to have come out of the corpses mouth, you grab it and you feel power coursing through you.\n\n";
        if(RPG_Class == "Warrior")
        {
          Warrior_health = Warrior_health + 5;
          Warrior_attack = Warrior_attack + 2;
          cout << "Stats increased\n";
          cout << "-------------------\n";
          cout << "health: " << Warrior_health << endl;
          cout << "attack: " << Warrior_attack << endl;
        }
        if(RPG_Class == "Mage")
         {
          Mage_health = Mage_health + 5;
          Mage_attack = Mage_attack + 2;
          cout << "Stats increased\n";
          cout << "-------------------\n";
          cout << "health: " << Mage_health << endl;
          cout << "attack: " << Mage_attack << endl;
        }
        if(RPG_Class == "Assassin")
         {
          Assassin_health = Assassin_health + 5;
          Assassin_attack = Assassin_attack + 2;
          cout << "Stats increased\n";
          cout << "-------------------\n";
          cout << "health: " << Assassin_health << endl;
          cout << "attack: " << Assassin_attack << endl;
        }
      }
      else if(r1 >= 4)
      {
        cout << "Your walk throughout the desert has made you exhausted, and you begin to feel drowsy and start to stumble." << endl <<  "you are forced to take a break under the sweltering heat.\n";
        if(RPG_Class == "Warrior")
        {
          Warrior_health = Warrior_health - 2;
          cout << "Your health is now " << Warrior_health;
        }
        if(RPG_Class == "Mage")
        {
          Mage_health = Mage_health - 2;
          cout << "Your health is now " << Mage_health;
        }
        if(RPG_Class == "Assassin")
        {
          Assassin_health = Assassin_health - 2;
          cout << "Your health is now " << Assassin_health;
        }
      }
    string go;
    cout << endl;
    cout << "type go to move forward: ";
    cin >> go;
    if(go == "go")
    {
      cout << "you move forward towards the next section." << endl << endl;
    }
    string decision2;
    cout << endl;
    cout << "In front of you see an abandoned camp and you decide to rest    here for a bit" << endl; 
    cout << "your current stats:" << endl << endl;
    if(RPG_Class == "Mage")
    {
      cout << "health: " << Mage_health << endl;
      cout << "mana: " << Mage_mana << endl;
      cout << "attack: " << Mage_attack << endl;
    }
    if(RPG_Class == "Warrior")
    {
      cout << "health: " << Warrior_health << endl;
      cout << "stamina: " << Warrior_stamina << endl;
      cout << "attack: " << Warrior_attack << endl;
    }
    if(RPG_Class == "Assassin")
    {
      cout << "health: " << Assassin_health << endl;
      cout << "stamina: " << Assassin_stamina << endl;
      cout << "attack: " << Assassin_attack << endl;
    }
    cout << endl;
    cout << "type go to move forward: ";
    cin >> go;
    cout << endl;
    cout << "You begin to reach the end of the desert and there is a small town with a traveling caravan of merchants stationed there.\n" << "One of the merchants calls you over to his cart, and you answer to his call.\n\n" << "The merchant offers you one of two seperate gifts if you are willing to give him some stats.\n\n" << "He offers...\n" << "------------------\n" << "> Dark Vitality Potion: increases your health by 2 for the cost of 2 stamina.\n\n" << "> Dark Endurance Potion: increases your stamina by 2 for the cost of 2 health.\n\n" << "(for Mage, stamina will be considered as 'Mana')\n\n";

    cout << "Which will you choose? dark_vitality or dark_endurance.\n";
    cin >> decision2;
    if(decision2 == "dark_vitality")
    {
      cout << "You take the potion and consume it, you begin to feel strange. You feel strong yet weak, the feeling is contradictory yet correct.";
      
      if(RPG_Class == "Warrior")
      {
        Warrior_health = Warrior_health + 6;
        Warrior_stamina = Warrior_stamina - 2;
        cout << "Your stats are now: \n\n";
        cout << "health: " << Warrior_health << endl;
        cout << "stamina: " << Warrior_stamina << endl;
      }
      if(RPG_Class == "Mage")
      {
        Mage_health = Mage_health + 6;
        Mage_mana = Mage_mana - 2;
        cout << "Your stats are now: \n\n";
        cout << "health: " << Mage_health << endl;
        cout << "mana: " << Mage_mana << endl;
      }
      if(RPG_Class == "Assassin")
      {
        Assassin_health = Assassin_health + 6;
        Assassin_stamina = Assassin_stamina - 2;
        cout << "Your stats are now: \n\n";
        cout << "health: " << Assassin_health << endl;
        cout << "stamina: " << Assassin_stamina << endl;
      }
    }
    if(decision2 == "dark_endurance")
    {
      cout << "You begin to feel energized, you cannot wait to continue on your journey, although you feel a bit weaker.";
    if(RPG_Class == "Warrior")
      {
        Warrior_health = Warrior_health - 2;
        Warrior_stamina = Warrior_stamina + 2;
        cout << "Your stats are now: \n\n";
        cout << "health: " << Warrior_health << endl;
        cout << "stamina: " << Warrior_stamina << endl;
      }
      if(RPG_Class == "Mage")
      {
        Mage_health = Mage_health - 2;
        Mage_mana = Mage_mana + 2;
        cout << "Your stats are now: \n\n";
        cout << "health: " << Mage_health << endl;
        cout << "mana: " << Mage_mana << endl;
      }
      if(RPG_Class == "Assassin")
      {
        Assassin_health = Assassin_health - 2;
        Assassin_stamina = Assassin_stamina + 2;
        cout << "Your stats are now: \n\n";
        cout << "health: " << Assassin_health << endl;
        cout << "stamina: " << Assassin_stamina << endl;
      }
    
    }
    cout << "you enjoy a few nights at the town and wake up early to continue on your journey. \n\n";
    cout << "Type go to continue on the path. ";
    cin >> go;
    if(go == "go")
    {
      cout << "You continue down the path."; 
    }
  } 


	
	if(decision == "right_path") 
	{
		cout << "As you move foward you see something in the distance. " << endl << endl;
		cout << "Type go to continue forwards: ";
		cin >> go;
	   	srand((int)time(0));
       	int r1 = 0;

       	r1 = (rand() % 6) + 1; // this roles a number between 1-6 and will dicide what will happen.
		if(r1 <= 3)
		{
		  	cout << "you encountered a rock golem prepare for battle" << endl;
		  	cout << "rock golem stats" << endl;
		  	int golem_health = 60;
		  	int golem_attack = 2;
		  	cout << "health: " << golem_health << endl;
          	cout << "attack: " << golem_attack << endl;
			string move;
			
			if(RPG_Class == "Warrior")
				{
					while(golem_health > 20 && Warrior_health > 0)	
					{
						cout << "select a skill: slash or heavy_slash" << endl << endl;
						cout << "Type your choice: ";
						cin >> move;
						if(move == "slash")	
						{
							int slash = Warrior_attack;
							golem_health = golem_health - slash;
							cout << "golem current heath: " << golem_health << endl;
							cout << "golem counter attacks" << endl;
							Warrior_health = Warrior_health - 2;
							cout << "Player current health: " << Warrior_health << endl;
						}
						else if(move == "heavy_slash" && Warrior_stamina > 0)
						{
							srand((int)time(0));
       						int r1 = 0;
       						r1 = (rand() % 6) + 1;
							cout << "dice role: " << r1 << endl;
							int heavy_slash = Warrior_attack + r1;
							golem_health = golem_health - heavy_slash;
							cout << "golem current heath: " << golem_health << endl;
							cout << "golem counter attacks" << endl;
							Warrior_health = Warrior_health - 2;
							Warrior_stamina = Warrior_stamina -1;
							cout << "Player current health: " << Warrior_health << endl;
							cout << "Player current stamina: " << Warrior_stamina << endl;
						}
					}
					if(Warrior_health == 0)
					{
						cout << "you have been defeated" << endl;
						return 0;
					}
				}
				if(RPG_Class == "Mage")		
				{
					while(golem_health > 20 && Mage_health > 0)	
					{
						cout << "select a skill: blast or magic_missile" << endl << endl;
						cout << "Type your choice: ";
						cin >> move;
						if(move == "blast")	
						{
							int blast = Mage_attack;
							golem_health = golem_health - blast;
							cout << "golem current heath: " << golem_health << endl;
							cout << "golem counter attacks" << endl;
							Mage_health = Mage_health - 2;
							cout << "Player current health: " << Mage_health << endl;
						}
						else if(move == "magic_missile" && Mage_mana > 0)
						{
							srand((int)time(0));
       						int r1 = 0;
							int r2 = 0;
							int r3 = 0;
       						r1 = (rand() % 6) + 1;
							r2 = (rand() % 6) + 1;
							r3 = (rand() % 6) + 1;
							cout << "dice role: " << r1 << " " << r2 << " " << r3 << endl;
							int magic_missile = Mage_attack + r1 + r2 + r3;
							golem_health = golem_health - magic_missile;
							cout << "golem current heath: " << golem_health << endl;
							cout << "golem counter attacks" << endl;
							Mage_health = Mage_health - 2;
							Mage_mana = Mage_mana -2;
							cout << "Player current health: " << Mage_health << endl;
							cout << "Player current mana: " << Mage_mana << endl;
						}
					}
					if(Mage_health == 0)
					{
						cout << "you have been defeated" << endl;
						return 0;						
					}		
				}
				if(RPG_Class == "Assassin")
				{
					while(golem_health > 20 && Assassin_health > 0)	
					{
						cout << "select a skill: stab or back_stab" << endl << endl;
						cout << "Type your choice: ";
						cin >> move;
						if(move == "stab")	
						{
							int stab = Assassin_attack;
							golem_health = golem_health - stab;
							cout << "golem current heath: " << golem_health << endl;
							cout << "golem counter attacks" << endl;
							Assassin_health = Assassin_health - 2;
							cout << "Player current health: " << Assassin_health << endl;
						}
						else if(move == "back_stab" && Assassin_stamina > 0)
						{
							srand((int)time(0));
       						int r1 = 0;
       						r1 = (rand() % 6) + 1;
							cout << "dice role: " << r1 << endl;
							int back_stab;
							if(r1 <= 2)
							{
								back_stab = Assassin_attack * 1;
								golem_health = golem_health - back_stab;
								cout << "golem current heath: " << golem_health << endl;
								cout << "golem counter attacks" << endl;
								Assassin_health = Assassin_health - 2;
								Assassin_stamina = Assassin_stamina -2;
								cout << "Player current health: " << Assassin_health << endl;
								cout << "Player current stamina: " << Assassin_stamina << endl;
							}
							else if(r1 <= 4)
							{
								back_stab = Assassin_attack * 2;
								golem_health = golem_health - back_stab;
								cout << "golem current heath: " << golem_health << endl;
								cout << "golem counter attacks" << endl;
								Assassin_health = Assassin_health - 2;
								Assassin_stamina = Assassin_stamina -2;
								cout << "Player current health: " << Assassin_health << endl;
								cout << "Player current stamina: " << Assassin_stamina << endl;								
							}
							else if(r1 <= 6)
							{
								back_stab = Assassin_attack * 3;
								golem_health = golem_health - back_stab;
								cout << "golem current heath: " << golem_health << endl;
								cout << "golem counter attacks" << endl;
								Assassin_health = Assassin_health - 2;
								Assassin_stamina = Assassin_stamina -2;
								cout << "Player current health: " << Assassin_health << endl;
								cout << "Player current stamina: " << Assassin_stamina << endl;
							}
						}
					}
					if(Assassin_health == 0)
					{
						cout << "you have been defeated" << endl;
						return 0;
					}
				}
					cout << endl;
					cout << "As you strike a leathal blow the rock golem it crumbles to the" << endl;
					cout << "ground. You have defeated the rock golem." << endl;
					cout << "Something that was glowing inside the golem has entered your" << endl;
					cout << "weapon and you feel empowered." << endl;
			  		if(RPG_Class == "Warrior")
	   				{
           			Warrior_attack = Warrior_attack + 3;
		   			cout << "attack: " << Warrior_attack << endl;
	   				}
			  		if(RPG_Class == "Mage")
	   				{
           			Mage_attack = Mage_attack + 3;
		   			cout << "attack: " << Mage_attack << endl;
	   				}	
					if(RPG_Class == "Assassin")
	   				{
           			Assassin_attack = Assassin_attack + 3;
		   			cout << "attack: " << Assassin_attack << endl;
	   				}	
		}
		else if (r1 >= 4)
		{
		  	cout << "You spot something shiny sticking in a tree do you pull it out?"<< endl;
		  	cout << "yes or no" << endl << endl; 
			cout << "Type your choice: ";
		  	cin >> decision;
			cout << endl;
		  	if(decision == "yes")
		  	{
			  	cout << "You pull out what ever is stuck in the tree landing hard on your" << endl;
				cout << "back losing one health but the you see your weapon glowing with" << endl;
				cout << "power."<< endl;
				
			  	if(RPG_Class == "Warrior")
	   			{
		   			Warrior_health = Warrior_health - 1;
           			Warrior_stamina = 10;
           			Warrior_attack = Warrior_attack + 1;
	       			int slash = Warrior_attack;
	       			int heavy_slash = Warrior_attack + r1;
		   			cout << "health: " << Warrior_health << endl;
		   			cout << "attack: " << Warrior_attack << endl;
	   			}
				if(RPG_Class == "Mage")
	    		{
		   			Mage_health = Mage_health - 1;
           			Mage_mana = 10;
           			Mage_attack = Mage_attack + 1;
	       			int blast = Mage_attack;
	       			int magic_missile = Mage_attack + r1 + r2 + r3;
		   			cout << "health: " << Mage_health << endl;
		   			cout << "attack: " << Mage_attack << endl;
	    		}
				if(RPG_Class == "Assassin")
				{
					Assassin_health = Assassin_health - 1;
					Assassin_stamina = 8;
					Assassin_attack = Assassin_attack + 1;
					int stab = Assassin_attack;
	        		int back_stab;
		    	cout << "health: " << Assassin_health << endl;
		    	cout << "attack: " << Assassin_attack << endl;
				}
		  	}
		}
		
		cout << endl;
		cout << "type go to move forawrd: ";
		cin >> go;
		if(go == "go")
		{
			cout << "you move forward towards the next section." << endl << endl;
		}
		string decision2;
		cout << endl;
		cout << "In front of you see an abandoned camp and you decide to rest    here for a bit" << endl; 
		cout << "your currant stats:" << endl << endl;
		if(RPG_Class == "Mage")
		{
    	cout << "health: " << Mage_health << endl;
    	cout << "mana: " << Mage_mana << endl;
    	cout << "attack: " << Mage_attack << endl;
		}
		if(RPG_Class == "Warrior")
		{
    	cout << "health: " << Warrior_health << endl;
    	cout << "stamina: " << Warrior_stamina << endl;
    	cout << "attack: " << Warrior_attack << endl;
		}
		if(RPG_Class == "Assassin")
		{
    	cout << "health: " << Assassin_health << endl;
    	cout << "stamina: " << Assassin_stamina << endl;
    	cout << "attack: " << Assassin_attack << endl;
		}
		cout << endl;
		cout << "type go to move forawrd: ";
		cin >> go;
		cout << "An alchemist approaches you offering you 3 differnt potions" << endl;
		cout << "but you only can have one" << endl;
		cout << "your choices are vitality_potion, energy_potion, or" << endl;
		cout << "strength_potion" << endl << endl;
		cout << "Type your choice: ";
		cin >> decision2;
		if(decision2 == "vitality_potion")
		{
			if(RPG_Class == "Warrior")
			{
				cout << "health goes up by 5" << endl;
				Warrior_health = Warrior_health + 5;
				cout << "current health: " << Warrior_health << endl;
			}
			if(RPG_Class == "Mage")
			{
				cout << "health goes up by 5" << endl;
				Mage_health = Mage_health + 5;
				cout << "current health: " << Mage_health << endl;
			}
			if(RPG_Class == "Assassin")
			{
				cout << "health goes up by 5" << endl;
				Assassin_health = Assassin_health + 5;
				cout << "current health: " << Assassin_health << endl;
			}
		}
		if(decision2 == "energy_potion")
		{
			if(RPG_Class == "Warrior")
			{
				cout << "stamina goes up by 5" << endl;
				Warrior_stamina = Warrior_stamina + 5;
				cout << "current stamina: " << Warrior_stamina << endl;
			}
			if(RPG_Class == "Mage")
			{
				cout << "mana goes up by 6" << endl;
				Mage_mana = Mage_mana + 6;
				cout << "current mana: " << Mage_mana << endl;
			}
			if(RPG_Class == "Assassin")
			{
				cout << "stamina goes up by 4" << endl;
				Assassin_stamina = Assassin_stamina + 4;
				cout << "current stamina: " << Assassin_stamina << endl;
			}
		}
		if(decision2 == "strength_potion")
		{
			if(RPG_Class == "Warrior")
			{
				cout << "attack goes up by 3" << endl;
				Warrior_attack = Warrior_attack + 3;
				cout << "current attack: " << Warrior_attack << endl;
			}
			if(RPG_Class == "Mage")
			{
				cout << "attack goes up by 3" << endl;
				Mage_attack = Mage_attack + 3;
				cout << "current attack: " << Mage_attack << endl;
			}
			if(RPG_Class == "Assassin")
			{
				cout << "attack goes up by 3" << endl;
				Assassin_attack = Assassin_attack + 3;
				cout << "current attack: " << Assassin_attack << endl;
			}
		}
		cout << endl;
		cout << "type go to move forawrd: ";
		cin >> go;
		if(go == "go")
		{
			cout << "you move forward towards the next section." << endl << endl;
		}
		cout << "As you are moving forward you spot a huge gate in the distance" << endl;
		cout << "and as you get closer you hear a rumble." << endl;
		cout << "Now that you are right next to the gate the rumbling stops" << endl;
		cout << "Then you relize the gate is alive and looking at you menacingly." << endl << endl;
		cout << "You prepare for battle" << endl;
		cout << "Evil gate stats: " << endl << endl;;
		int evil_gate_health = 80;
		int evil_gate_attack = 1;
		cout << "health: " << evil_gate_health << endl;
        cout << "attack: " << evil_gate_attack << endl << endl;
		cout << "Enter battle to beggin: ";
		string decision3;
		cin >> decision3;
		if(decision3 == "battle")
		{
			if(RPG_Class == "Warrior")
			{
				while(evil_gate_health > 30 && Warrior_health > 0)	
				{
					cout << "select a skill: slash or heavy_slash" << endl << endl;
					cout << "Type your choice: ";
					string move2;
					cin >> move2;
					if(move2 == "slash")	
					{
						int slash = Warrior_attack;
						evil_gate_health = evil_gate_health - slash;
						cout << "Evil gate's current heath: " << evil_gate_health << endl;
						cout << "Evil gate counter attacks" << endl;
						Warrior_health = Warrior_health - 1;
						cout << "Player current health: " << Warrior_health << endl;
					}
					else if(move2 == "heavy_slash" && Warrior_stamina > 0)
					{
						srand((int)time(0));
       					int r1 = 0;
       					r1 = (rand() % 6) + 1;
						cout << "dice role: " << r1 << endl;
						int heavy_slash = Warrior_attack + r1;
						evil_gate_health = evil_gate_health - heavy_slash;
						cout << "Evil gate's current heath: " << evil_gate_health << endl;
						cout << "Evil gate counter attacks" << endl;
						Warrior_health = Warrior_health - 1;
						Warrior_stamina = Warrior_stamina -1;
						cout << "Player current health: " << Warrior_health << endl;
						cout << "Player current stamina: " << Warrior_stamina << endl;
					}
				}
				if(Warrior_health == 0)
				{
					cout << "you have been defeated" << endl;
					return 0;
				}
			}
			if(RPG_Class == "Mage")		
			{
				while(evil_gate_health > 30 && Mage_health > 0)	
				{
					cout << "select a skill: blast or magic_missile" << endl << endl;
					cout << "Type your choice: ";
					string move2;
					cin >> move2;
					if(move2 == "blast")	
					{
						int blast = Mage_attack;
						evil_gate_health = evil_gate_health - blast;
						cout << "Evil gate's current heath: " << evil_gate_health << endl;
						cout << "Evil gate counter attacks" << endl;
						Mage_health = Mage_health - 1;
						cout << "Player current health: " << Mage_health << endl;
					}
					else if(move2 == "magic_missile" && Mage_mana > 0)
					{
						srand((int)time(0));
       					int r1 = 0;
						int r2 = 0;
						int r3 = 0;
       					r1 = (rand() % 6) + 1;
						r2 = (rand() % 6) + 1;
						r3 = (rand() % 6) + 1;
						cout << "dice role: " << r1 << " " << r2 << " " << r3 << endl;
						int magic_missile = Mage_attack + r1 + r2 + r3;
						evil_gate_health = evil_gate_health - magic_missile;
						cout << "Evil gate's current heath: " << evil_gate_health << endl;
						cout << "Evil gate counter attacks" << endl;
						Mage_health = Mage_health - 1;
						Mage_mana = Mage_mana -2;
						cout << "Player current health: " << Mage_health << endl;
						cout << "Player current mana: " << Mage_mana << endl;
					}
				}
				if(Mage_health == 0)
				{
					cout << "you have been defeated" << endl;
					return 0;						
				}		
			}
			if(RPG_Class == "Assassin")
				{
				while(evil_gate_health > 30 && Assassin_health > 0)	
				{
					cout << "select a skill: stab or back_stab" << endl << endl;
					cout << "Type your choice: ";
					string move2;
					cin >> move2;
					if(move2 == "stab")	
					{
						int stab = Assassin_attack;
						evil_gate_health = evil_gate_health - stab;
						cout << "Evil gate's current heath: " << evil_gate_health << endl;
						cout << "Evil gate counter attacks" << endl;
						Assassin_health = Assassin_health - 1;
						cout << "Player current health: " << Assassin_health << endl;
					}
					else if(move2 == "back_stab" && Assassin_stamina > 0)
					{
						srand((int)time(0));
       					int r1 = 0;
       					r1 = (rand() % 6) + 1;
						cout << "dice role: " << r1 << endl;
						int back_stab;
						if(r1 <= 2)
						{
							back_stab = Assassin_attack * 1;
							evil_gate_health = evil_gate_health - back_stab;
							cout << "Evil gate's current heath: " << evil_gate_health << endl;
							cout << "Evil gate counter attacks" << endl;
							Assassin_health = Assassin_health - 1;
							Assassin_stamina = Assassin_stamina -2;
							cout << "Player current health: " << Assassin_health << endl;
							cout << "Player current stamina: " << Assassin_stamina << endl;
						}
						else if(r1 <= 4)
						{
							back_stab = Assassin_attack * 2;
							evil_gate_health = evil_gate_health - back_stab;
							cout << "Evil gate's current heath: " << evil_gate_health << endl;
							cout << "Evil gate counter attacks" << endl;
							Assassin_health = Assassin_health - 1;
							Assassin_stamina = Assassin_stamina -2;
							cout << "Player current health: " << Assassin_health << endl;
							cout << "Player current stamina: " << Assassin_stamina << endl;								
						}
						else if(r1 <= 6)
						{
							back_stab = Assassin_attack * 3;
							evil_gate_health = evil_gate_health - back_stab;
							cout << "Evil gate's current heath: " << evil_gate_health << endl;
							cout << "Evil gate counter attacks" << endl;
							Assassin_health = Assassin_health - 1;
							Assassin_stamina = Assassin_stamina -2;
							cout << "Player current health: " << Assassin_health << endl;
							cout << "Player current stamina: " << Assassin_stamina << endl;
						}
					}
				}
				if(Assassin_health == 0)
				{
					cout << "you have been defeated" << endl;
					return 0;
				}
			}
		}	
		cout << endl;
		cout << "As you strike a leathal blow to the Evil gate" << endl;
		cout << "its gate's fling open and you are able to continue" << endl;
		cout << "up ahead. " << endl << endl;
		cout << "When you pass threw the gate you feel your body rejuvenated." << endl;
		
		if(RPG_Class == "Warrior")
	   	{
           	Warrior_health = Warrior_health + 3;
			Warrior_stamina = Warrior_stamina + 4;
		   	cout << "health: " << Warrior_health << endl;
			cout << "stamina: " << Warrior_stamina << endl;
		}
		if(RPG_Class == "Mage")
	   	{
    		Mage_health = Mage_health + 3;
			Mage_mana = Mage_mana + 4;
		   	cout << "health: " << Mage_health << endl;
			cout << "mana: " << Mage_mana << endl;
	   	}	
		if(RPG_Class == "Assassin")
	   	{
           	Assassin_health = Assassin_health + 3;
			Assassin_stamina = Assassin_stamina + 4;
		   	cout << "health: " << Assassin_health << endl;
			cout << "stamina: " << Assassin_stamina << endl;
	   	}
		cout << "You move forward towards the last section" << endl;

	}
	cout << endl;
	cout << "Type go to continue: ";
	string command;
	cin >> command;
	cout << "As you approach your final fight you hear" << endl;
	cout << "loud snoring. As you get closer you see it," << endl;
	cout << "an adolescent drake.";
	int adolescent_drake_health = 100;
	string adolescent_drake_attack1 = "???";	
	cout << "health: " << adolescent_drake_health << endl;
    cout << "attack: " << adolescent_drake_attack1 << endl << endl;
	cout << "Enter battle to beggin: ";
	string decision4;
	cin >> decision4;	
	if(RPG_Class == "Warrior")
			{
			while(adolescent_drake_health > 75 && Warrior_health > 0)	
			{
				cout << "select a skill: slash or heavy_slash" << endl << endl;
				cout << "Type your choice: ";
				string move3;
				cin >> move3;
				if(move3 == "slash")	
				{
					int slash = Warrior_attack;
					adolescent_drake_health = adolescent_drake_health - slash;
					cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
					cout << "adolescent drake continues sleeping" << endl;					
					cout << "Player current health: " << Warrior_health << endl;
				}
				else if(move3 == "heavy_slash" && Warrior_stamina > 0)
				{
					srand((int)time(0));
       				int r1 = 0;
       				r1 = (rand() % 6) + 1;
					cout << "dice role: " << r1 << endl;
					int heavy_slash = Warrior_attack + r1;
					adolescent_drake_health = adolescent_drake_health - heavy_slash;
					cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
					cout << "adolescent drake continues sleeping" << endl;
					Warrior_stamina = Warrior_stamina -1;
					cout << "Player current health: " << Warrior_health << endl;
					cout << "Player current stamina: " << Warrior_stamina << endl;
				}
			}
			if(Warrior_health == 0)
			{
				cout << "you have been defeated" << endl;
				return 0;
			}
		}
		if(RPG_Class == "Mage")		
			{
			while(adolescent_drake_health > 75 && Mage_health > 0)	
			{
				cout << "select a skill: blast or magic_missile" << endl << endl;
				cout << "Type your choice: ";
				string move3;
				cin >> move3;
				if(move3 == "blast")	
				{
					int blast = Mage_attack;
					adolescent_drake_health = adolescent_drake_health - blast;
					cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
					cout << "adolescent drake continues sleeping" << endl;
					cout << "Player current health: " << Mage_health << endl;
				}
				else if(move3 == "magic_missile" && Mage_mana > 0)
				{
					srand((int)time(0));
       				int r1 = 0;
					int r2 = 0;
					int r3 = 0;
       				r1 = (rand() % 6) + 1;
					r2 = (rand() % 6) + 1;
					r3 = (rand() % 6) + 1;
					cout << "dice role: " << r1 << " " << r2 << " " << r3 << endl;
					int magic_missile = Mage_attack + r1 + r2 + r3;
					adolescent_drake_health = adolescent_drake_health - magic_missile;
					cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
					cout << "adolescent drake continues sleeping" << endl;
					Mage_mana = Mage_mana -2;
					cout << "Player current health: " << Mage_health << endl;
					cout << "Player current mana: " << Mage_mana << endl;
				}
			}
			if(Mage_health == 0)
			{
				cout << "you have been defeated" << endl;
				return 0;						
			}		
		}
		if(RPG_Class == "Assassin")
			{
			while(adolescent_drake_health > 75 && Assassin_health > 0)	
			{
				cout << "select a skill: stab or back_stab" << endl << endl;
				cout << "Type your choice: ";
				string move3;
				cin >> move3;
				if(move3 == "stab")	
				{
					int stab = Assassin_attack;
					adolescent_drake_health = adolescent_drake_health - stab;
					cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
					cout << "adolescent drake continues sleeping" << endl;
					cout << "Player current health: " << Assassin_health << endl;
				}
				else if(move3 == "back_stab" && Assassin_stamina > 0)
				{
					srand((int)time(0));
       				int r1 = 0;
       				r1 = (rand() % 6) + 1;
					cout << "dice role: " << r1 << endl;
					int back_stab;
					if(r1 <= 2)
					{
						back_stab = Assassin_attack * 1;
						cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
						cout << "adolescent drake continues sleeping" << endl;
						Assassin_stamina = Assassin_stamina -2;
						cout << "Player current health: " << Assassin_health << endl;
						cout << "Player current stamina: " << Assassin_stamina << endl;
					}
					else if(r1 <= 4)
					{
						back_stab = Assassin_attack * 2;
						adolescent_drake_health = adolescent_drake_health - back_stab;
						cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
						cout << "adolescent drake continues sleeping" << endl;
						Assassin_stamina = Assassin_stamina -2;
						cout << "Player current health: " << Assassin_health << endl;
						cout << "Player current stamina: " << Assassin_stamina << endl;								
					}
					else if(r1 <= 6)
					{
						back_stab = Assassin_attack * 3;
						adolescent_drake_health = adolescent_drake_health - back_stab;
						cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
						cout << "adolescent drake continues sleeping" << endl;
						Assassin_stamina = Assassin_stamina -2;
						cout << "Player current health: " << Assassin_health << endl;
						cout << "Player current stamina: " << Assassin_stamina << endl;
					}
				}
			}
			if(Assassin_health == 0)
			{
				cout << "you have been defeated" << endl;
				return 0;
			}
		}
	cout << endl;
	cout << "The drake is now awake and is ready to attack" << endl;
	int adolescent_drake_attack2 = 2;
	cout << "attack: " << adolescent_drake_attack2 << endl << endl;

	//phase 2 of boss fight
	
	if(RPG_Class == "Warrior")
		{
		while(adolescent_drake_health > 45 && Warrior_health > 0)	
		{
			cout << "select a skill: slash or heavy_slash" << endl << endl;
			cout << "Type your choice: ";
			string move4;
			cin >> move4;
			if(move4 == "slash")	
			{
				int slash = Warrior_attack;
				adolescent_drake_health = adolescent_drake_health - slash;
				cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
				cout << "adolescent drake counter attacks" << endl;
				Warrior_health = Warrior_health - 2;
				cout << "Player current health: " << Warrior_health << endl;
			}
			else if(move4 == "heavy_slash" && Warrior_stamina > 0)
			{
				srand((int)time(0));
       			int r1 = 0;
       			r1 = (rand() % 6) + 1;
				cout << "dice role: " << r1 << endl;
				int heavy_slash = Warrior_attack + r1;
				adolescent_drake_health = adolescent_drake_health - heavy_slash;
				cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
				cout << "adolescent drake counter attacks" << endl;
				Warrior_health = Warrior_health - 2;
				Warrior_stamina = Warrior_stamina -1;
				cout << "Player current health: " << Warrior_health << endl;
				cout << "Player current stamina: " << Warrior_stamina << endl;
			}
		}
		if(Warrior_health == 0)
		{
			cout << "you have been defeated" << endl;
			return 0;
		}
	}
	if(RPG_Class == "Mage")		
		{
		while(adolescent_drake_health > 45 && Mage_health > 0)	
		{
			cout << "select a skill: blast or magic_missile" << endl << endl;
			cout << "Type your choice: ";
			string move4;
			cin >> move4;
			if(move4 == "blast")	
			{
				int blast = Mage_attack;
				adolescent_drake_health = adolescent_drake_health - blast;
				cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
				cout << "adolescent drake counter attacks" << endl;
				Mage_health = Mage_health - 2;
				cout << "Player current health: " << Mage_health << endl;
			}
			else if(move4 == "magic_missile" && Mage_mana > 0)
			{
				srand((int)time(0));
 				int r1 = 0;
				int r2 = 0;
				int r3 = 0;
       			r1 = (rand() % 6) + 1;
				r2 = (rand() % 6) + 1;
				r3 = (rand() % 6) + 1;
				cout << "dice role: " << r1 << " " << r2 << " " << r3 << endl;
				int magic_missile = Mage_attack + r1 + r2 + r3;
				adolescent_drake_health = adolescent_drake_health - magic_missile;
				cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
				cout << "adolescent drake counter attacks" << endl;
				Mage_health = Mage_health - 2;
				Mage_mana = Mage_mana -2;
				cout << "Player current health: " << Mage_health << endl;
				cout << "Player current mana: " << Mage_mana << endl;
			}
		}
		if(Mage_health == 0)
		{
			cout << "you have been defeated" << endl;
			return 0;						
		}		
	}
	if(RPG_Class == "Assassin")
		{
		while(adolescent_drake_health > 45 && Assassin_health > 0)	
		{
			cout << "select a skill: stab or back_stab" << endl << endl;
			cout << "Type your choice: ";
			string move4;
			cin >> move4;
			if(move4 == "stab")	
			{
				int stab = Assassin_attack;
				adolescent_drake_health = adolescent_drake_health - stab;
				cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
				cout << "adolescent drake counter attacks" << endl;
				Assassin_health = Assassin_health - 2;
				cout << "Player current health: " << Assassin_health << endl;
			}
			else if(move4 == "back_stab" && Assassin_stamina > 0)
			{
				srand((int)time(0));
       			int r1 = 0;
       			r1 = (rand() % 6) + 1;
				cout << "dice role: " << r1 << endl;
				int back_stab;
				if(r1 <= 2)
				{
					back_stab = Assassin_attack * 1;
					cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
					cout << "adolescent drake counter attacks" << endl;
					Assassin_health = Assassin_health - 2;
					Assassin_stamina = Assassin_stamina -2;
					cout << "Player current health: " << Assassin_health << endl;
					cout << "Player current stamina: " << Assassin_stamina << endl;
				}
				else if(r1 <= 4)
				{
					back_stab = Assassin_attack * 2;
					adolescent_drake_health = adolescent_drake_health - back_stab;
					cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
					cout << "adolescent drake counter attacks" << endl;
					Assassin_health = Assassin_health - 2;
					Assassin_stamina = Assassin_stamina -2;
					cout << "Player current health: " << Assassin_health << endl;
					cout << "Player current stamina: " << Assassin_stamina << endl;								
				}
				else if(r1 <= 6)
				{
					back_stab = Assassin_attack * 3;
					adolescent_drake_health = adolescent_drake_health - back_stab;
					cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
					cout << "adolescent drake counter attacks" << endl;
					Assassin_health = Assassin_health - 2;
					Assassin_stamina = Assassin_stamina -2;
					cout << "Player current health: " << Assassin_health << endl;
					cout << "Player current stamina: " << Assassin_stamina << endl;
				}
			}
		}
		if(Assassin_health == 0)
		{
			cout << "you have been defeated" << endl;
			return 0;
		}
	}
	cout << "The drake is almost down but you see the drake's" << endl;
	cout << "mouth filled with flames as you try to finish it" << endl;
	cout << "off." << endl;
	int adolescent_drake_attack3 = 4;
	cout << "attack: " << adolescent_drake_attack3 << endl << endl;

// Final faze of boss fight

	if(RPG_Class == "Warrior")
		{
		while(adolescent_drake_health > 30 && Warrior_health > 0)	
		{
			cout << "select a skill: slash or heavy_slash" << endl << endl;
			cout << "Type your choice: ";
			string move5;
			cin >> move5;
			if(move5 == "slash")	
			{
				int slash = Warrior_attack;
				adolescent_drake_health = adolescent_drake_health - slash;
				cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
				cout << "adolescent drake spews fire" << endl;
				Warrior_health = Warrior_health - 4;
				cout << "Player current health: " << Warrior_health << endl;
			}
			else if(move5 == "heavy_slash" && Warrior_stamina > 0)
			{
				srand((int)time(0));
       			int r1 = 0;
       			r1 = (rand() % 6) + 1;
				cout << "dice role: " << r1 << endl;
				int heavy_slash = Warrior_attack + r1;
				adolescent_drake_health = adolescent_drake_health - heavy_slash;
				cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
				cout << "adolescent drake spews fire" << endl;
				Warrior_health = Warrior_health - 4;
				Warrior_stamina = Warrior_stamina -1;
				cout << "Player current health: " << Warrior_health << endl;
				cout << "Player current stamina: " << Warrior_stamina << endl;
			}
		}
		if(Warrior_health == 0)
		{
			cout << "you have been defeated" << endl;
			return 0;
		}
	}
	if(RPG_Class == "Mage")		
		{
		while(adolescent_drake_health > 30 && Mage_health > 0)	
		{
			cout << "select a skill: blast or magic_missile" << endl << endl;
			cout << "Type your choice: ";
			string move5;
			cin >> move5;
			if(move5 == "blast")	
			{
				int blast = Mage_attack;
				adolescent_drake_health = adolescent_drake_health - blast;
				cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
				cout << "adolescent drake spews fire" << endl;
				Mage_health = Mage_health - 4;
				cout << "Player current health: " << Mage_health << endl;
			}
			else if(move5 == "magic_missile" && Mage_mana > 0)
			{
				srand((int)time(0));
 				int r1 = 0;
				int r2 = 0;
				int r3 = 0;
       			r1 = (rand() % 6) + 1;
				r2 = (rand() % 6) + 1;
				r3 = (rand() % 6) + 1;
				cout << "dice role: " << r1 << " " << r2 << " " << r3 << endl;
				int magic_missile = Mage_attack + r1 + r2 + r3;
				adolescent_drake_health = adolescent_drake_health - magic_missile;
				cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
				cout << "adolescent drake spews fire" << endl;
				Mage_health = Mage_health - 4;
				Mage_mana = Mage_mana -2;
				cout << "Player current health: " << Mage_health << endl;
				cout << "Player current mana: " << Mage_mana << endl;
			}
		}
		if(Mage_health == 0)
		{
			cout << "you have been defeated" << endl;
			return 0;						
		}		
	}
	if(RPG_Class == "Assassin")
		{
		while(adolescent_drake_health > 30 && Assassin_health > 0)	
		{
			cout << "select a skill: stab or back_stab" << endl << endl;
			cout << "Type your choice: ";
			string move5;
			cin >> move5;
			if(move5 == "stab")	
			{
				int stab = Assassin_attack;
				adolescent_drake_health = adolescent_drake_health - stab;
				cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
				cout << "adolescent drake spews fire" << endl;
				Assassin_health = Assassin_health - 4;
				cout << "Player current health: " << Assassin_health << endl;
			}
			else if(move5 == "back_stab" && Assassin_stamina > 0)
			{
				srand((int)time(0));
       			int r1 = 0;
       			r1 = (rand() % 6) + 1;
				cout << "dice role: " << r1 << endl;
				int back_stab;
				if(r1 <= 2)
				{
					back_stab = Assassin_attack * 1;
					cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
					cout << "adolescent drake spews fire" << endl;
					Assassin_health = Assassin_health - 4;
					Assassin_stamina = Assassin_stamina -2;
					cout << "Player current health: " << Assassin_health << endl;
					cout << "Player current stamina: " << Assassin_stamina << endl;
				}
				else if(r1 <= 4)
				{
					back_stab = Assassin_attack * 2;
					adolescent_drake_health = adolescent_drake_health - back_stab;
					cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
					cout << "adolescent drake spews fire" << endl;
					Assassin_health = Assassin_health - 4;
					Assassin_stamina = Assassin_stamina -2;
					cout << "Player current health: " << Assassin_health << endl;
					cout << "Player current stamina: " << Assassin_stamina << endl;								
				}
				else if(r1 <= 6)
				{
					back_stab = Assassin_attack * 2;
					adolescent_drake_health = adolescent_drake_health - back_stab;
					cout << "adolescent drake's current heath: " << adolescent_drake_health << endl;
					cout << "adolescent drake spews fire" << endl;
					Assassin_health = Assassin_health - 4;
					Assassin_stamina = Assassin_stamina -2;
					cout << "Player current health: " << Assassin_health << endl;
					cout << "Player current stamina: " << Assassin_stamina << endl;
				}
			}
		}
		if(Assassin_health == 0)
		{
			cout << "you have been defeated" << endl;
			return 0;
		}
	}
	if(adolescent_drake_health > 0)
	{
		cout << "You have claimed Victory. congratulations" << endl;
	}
	else if(Warrior_health <= 0)
	{
		cout << "You have been defeated";
	}
		else if(Mage_health <= 0)
	{
		cout << "You have been defeated";
	}
		else if(Assassin_health <= 0)
	{
		cout << "You have been defeated";
	}
	
return 0;
}
