#include <stdio.h>
#include <string.h>

int info(char *, char *, char *, char *);
int battle(char *, char *, char *, char*);

int main()
{

  char starter[10];
  char name[20];
  char rival[20];
  char rivalstarter[10];

  printf("\n\nProfessor Oak: Hello there! Welcome to the world of POKeMON! My name is Oak! People call me the POKeMON Prof! This world is inhabited by creatures called POKeMON!\nFor some people, POKeMON are pets. Others use them for fi\
ghts.\nMyself...I study POKeMON as a profession.");

  getchar();

  printf("\nProfessor Oak: First, what is your name?\n");

  scanf("%s", name);

  printf("\nProfessor Oak: Right! So your name is %s!\n", name);

  getchar();

  printf("\nProfessor Oak: This is my grandson. He's been your rival since you were a baby.");

  getchar();

  printf("\nProfessor Oak: He's always been such a Bidoofus ...Erm, what is his name again?\n");

  scanf("%s", rival);

  printf("\nProfessor Oak: That's right! I remember now! His name is %s!\n", rival);

  getchar();

  printf("\nProfessor Oak: %s!\n", name);

  getchar();

  printf("Your very own POKeMON legend is about to unfold! A world of dreams and adventures with POKeMON awaits! Let's go!\n");

  getchar();

  printf("------------------------------LOCATION: OAK'S LAB------------------------------");

  getchar();

  printf("\nProfessor Oak: You may choose one from the following starter POKeMON:\n\n Generation 1: \n\nCharmander (the fire type) \n\nSquirtle (the water type) \n\nBulbasaur (the grass type)\n\n");

  getchar();

  printf(" Generation 2: \n\nCyndaquil (the fire type) \n\nTotodile (the water type) \n\nChikorita (the grass type)\n\n");

  getchar();

  printf(" Generation 3: \n\nTorchic (the fire type) \n\nMudkip (the water type) \n\nTreeko (the grass type)\n\n");
  getchar();

  printf(" Generation 4: \n\nChimchar (the fire type) \n\nPiplup (the water type) \n\nTurtwig (the grass type)\n\n");
  getchar();

  printf(" Generation 5: \n\nTepig (the fire type) \n\nOshawott (the water type) \n\nSnivy (the grass type) \n\n\nProfessor Oak: Which one do you pick?\n\n");

  scanf("%s", starter);

  info(starter, rival, rivalstarter, name);
  
  getchar();

  return 0;
  
}


int info(char * starter, char * rival, char * rivalstarter, char * name)
{

  char charmander[] = "Charmander";
  char squirtle[] = "Squirtle";
  char bulbasaur[] = "Bulbasaur";
  char totodile[] = "Totodile";
  char chikorita[] = "Chikorita";
  char cyndaquil[] = "Cyndaquil";
  char treeko[] = "Treeko";
  char torchic[] = "Torchic";
  char mudkip[] = "Mudkip";
  char turtwig[] = "Turtwig";
  char chimchar[] = "Chimchar";
  char piplup[] = "Piplup";
  char snivy[] = "Snivy";
  char tepig[] = "Tepig";
  char oshawott[] = "Oshawott";
 
 
  if (strcmp(starter, charmander) == 0)
    {
      printf("\nPOKeDEX: The flame that burns at the tip of its tail is an indication of its emotions. \nThe flame wavers when CHARMANDER is enjoying itself. \nIf the POKeMON becomes enraged, the flame burns fiercely.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Squirtle!", rival, rival);
      rivalstarter = squirtle;
      getchar();
    }

  else if (strcmp(starter, squirtle) == 0)
    {
      printf("\nPOKeDEX: Squirtle's shell is not merely used for protection. \nThe shell's rounded shape and the grooves on its \nsurface help minimize resistance in water, \nenabling this POKeMON to swim at high speeds.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Bulbasaur!", rival, rival);
      rivalstarter = bulbasaur;
      getchar();
    }

  else if (strcmp(starter, bulbasaur) == 0)
    {
      printf("\nPOKeDEX: Bulbasaur can be seen napping in bright sunlight. \nThere is a seed on its back. \nBy soaking up the sun's rays, the seed grows progressively larger.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Charmander!", rival, rival);
      rivalstarter = charmander;
      getchar();
    }
   
  else if (strcmp(starter, totodile) == 0)
    {
      printf("\nPOKeDEX:It is small but rough and tough. It won't hesitate to take a bite out of anything that moves.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Chikorita!", rival, rival);
      getchar();
    }
   
  else if (strcmp(starter, chikorita) == 0)
    {
      printf("\nPOKeDEX:It uses the leaf on its head to determine the temperature and humidity. It loves to sunbathe.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Cyndaquil!", rival, rival);
      getchar();
    }
   
  else if (strcmp(starter, cyndaquil) == 0)
    {
      printf("\nPOKeDEX:It has a timid nature. If it is startled, the flames on its back burn more vigorously.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Totodile!", rival, rival);
      getchar();
    }
   
  else if (strcmp(starter, treeko) == 0)
    {
      printf("\nPOKeDEX:The soles of its feet are covered by countless tiny spikes, enabling it to walk on walls and ceilings.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Torchic!", rival, rival);
      getchar();
    }
   
  else if (strcmp(starter, torchic) == 0)
    {
      printf("\nPOKeDEX:A fire burns inside, so it feels very warm to hug. It launches fireballs of 1,800 degrees F.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Mudkip!", rival, rival);
      getchar();
    }
   
  else if (strcmp(starter, mudkip) == 0)
    {
      printf("\nPOKeDEX:To alert it, the fin on its head senses the flow of water. It has the strength to heft boulders.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Treeko!", rival, rival);
      getchar();
    }
   
  else if (strcmp(starter, turtwig) == 0)
    {
      printf("\nPOKeDEX:The shell on its back is made of soil. On a very healthy Turtwig, the shell should feel moist.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Chimchar!", rival, rival);
      getchar();
    }
   
  else if (strcmp(starter, chimchar) == 0)
    {
      printf("\nPOKeDEX:It is very agile. Before going to sleep, it extinguishes the flame on its tail to prevent fires.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Piplup!", rival, rival);
      getchar();
    }
   
  else if (strcmp(starter, piplup) == 0)
    {
      printf("\nPOKeDEX:A poor walker, it often falls down. However, its strong pride makes it puff up its chest without a care.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Turtwig!", rival, rival);
      getchar();
    }
   
  else if (strcmp(starter, snivy) == 0)
    {
      printf("\nPOKeDEX:Being exposed to sunlight makes its movements swifter. It uses vines more adeptly than its hands.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Tepig!", rival, rival);
      getchar();
    }
   
  else if (strcmp(starter, tepig) == 0)
    {
      printf("\nPOKeDEX:It loves to eat roasted berries, but sometimes it gets too excited and burns them to a crisp.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Oshawott!", rival, rival);
      getchar();
    }
   
  else if (strcmp(starter, oshawott) == 0)
    {
      printf("\nPOKeDEX:The scalchop on its stomach isn't just used for battle--it can be used to break open hard berries as well.\n\n");
      getchar();

      printf("\n%s: Then I'll pick this one!\n\n%s picked Snivy!", rival, rival);
      getchar();
    }
  else

    {
      printf("\nProfessor Oak: *Slaps you* Your adventure ends here.\n");
     
      getchar();
    }
   
  battle(rival, name, starter, rivalstarter);

  return 0;
 
}

int battle(char * rival, char * name, char * starter, char * rivalstarter)
{

  char select[8];
  char move[10];
  char fight[] = "Fight";
  char pokemon[] = "POKeMON";
  char bag[] = "Bag";
  char run[] = "Run";
  char tackle[] = "Tackle";
  char tailwhip[] = "Tail Whip";
  char sleep[] = "Sleep";
  char moonwalk[] = "Moonwalk";
  int starter_level = 5;
  int starter_hp = 100;
  int rival_level = 5;
  int rival_hp = 100;

  printf("%s: Hey %s, I got a POKeMOn too! Let's have a battle to try them out!", rival, name);

  getchar();

  printf("\n\n------------------------------%s challenged %s to a battle!------------------------------", rival, name);

  getchar();

  printf("\n\n%s: %s, I choose you!", name, starter);

  getchar();

  printf("\n\n%s: Go %s!\n\n", rival, rivalstarter);

  getchar();

  printf("Foe %s Level: %d HP: %d", rivalstarter, rival_level, rival_hp);

  printf("\n\n%s Level: %d HP: %d \nFight  Bag\nPOKeMON  Run \n\nWhat do you want to do?\n\n", starter, starter_level, starter_hp);

  scanf("%s", select);

  if (strcmp(select, fight) == 0)
    {
      printf("\n\n%s Level: 5 HP: 100 \nTackle  Tail Whip\nSleep  Moonwalk \n\nWhat should %s do?\n\n", starter, starter);
     
      scanf("%s", move);

      if (strcmp(move, tackle) == 0)
	{
	  printf("\n%s used Tackle!\n\n", starter);
	  getchar();
	  printf("Foe %s Level: 5 HP: 80", rivalstarter);
	  getchar();
	  printf("\n\nFoe %s used Tackle!", rivalstarter);
	  getchar();
	  printf("\n\n%s Level: 5 HP: 85 \nFight  Bag\nPOKeMON  Run \n\nWhat do you want to do?\n\n", starter);
	}

      else if (strcmp(move, moonwalk) == 0)
	{
	  printf("\n%s used Moonwalk!\n\n", starter);
	  getchar();
	  printf("Foe %s got served!", rivalstarter);
	  getchar();
	  printf("\nFoe %s Level: 5 HP: -200", rivalstarter);
	  getchar();
	  printf("\nFoe %s died!", rivalstarter);
	  getchar();
	  printf("\n%s: %s! Noooo! You were no match for that %s's Moonwalk!", rival, rivalstarter, starter);
	  getchar();
	}
    }
 
  else if (strcmp(select, pokemon) == 0)
    {
      printf("\n\nYou have no other POKeMON!\n\n");
    }

  else if (strcmp(select, bag) == 0)
    {
      printf("\n\nYour bag is empty!\n\n");
    }

  else if (strcmp(select, run) == 0)
    {
      printf("\n\nNo! There's no running from battles!\n\n");
    }

  else
    {
      printf("\n\nProfessor Oak: *Slaps you* Your adventure ends here.\n\n");
    }

  return 0;
}












































     
