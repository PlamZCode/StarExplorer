SCOPE - 10 to 15 hours of development.

Practice data structure and algorytms, use bottom-up type of development


StarExplorer : 

--GOAL--
Navigate from star to star, completing simple events, and get as far as possible from the starting point

--WHAT AND HOW--
Stars are tree-like linked chains, with 2 to 3 "next" stars each time (up forward and down). The player gets to choose between the 3, which are randomly generated

--GAMEPLAY--
The player can earn fuel, and has a ship hull. Those are obtained thru simple events with pseudo-random outcome.

Ex : You meet a stranded alien ship that needs fuel, do you want to share one fuel? 

25% lose 1 fuel (alien leaves and doesnt come back)
25% lose 2 fuel + 1 hull (Alien attacks when he see we trust them)
50% gain 2 hull point and do not lose fuel (alien came back to pay fuel back)

--MAP--

Example of a map

  o
 / \
o   o - o - o
             \
              o - o
			  
			  
 --MISC NOTES--
The fuel and hull is printed each cycle

The planet names are auto generated using dictionaries

Everything is encapsulated in a class, especially the "game" itself which will be made of a cycle manager. But the info on the player will be in a player class.

--CLASS DESIGN--

Classes : 

Game
Player - Done
Ship - Done
Stars
 \_ Sub types : RedDwarf, SunLike, BlueSuperGiants, Nebulea
StarSystem
Event

RNJesus (A random number generator with static QoL func) (Static class)
PlanetGenerator (Static class)


Additional notes :

Star class -

Stars are an abstract class. Subtypes will be defined properly, however the first draft only has basic stars.

Stars have a difficulty level that is proper to each type, which affects dicerolls and rewards of events. They have a name that will in time be randomly generated, they will also have a style, which will be displayed with their print function ( like o, (o), O, -0-) to distinguish them on the map.



