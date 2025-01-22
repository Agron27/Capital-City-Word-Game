# Capital-City-Word-Game

This mini-project serves as the first assignment for my C++ module.

The game operates as follows:
  A random letter is generated (a-z)
  The user enters a capital city beginning with that letter
  The computer responds with a capital city beginning with the last character of the user’s city
  The user and computer continue to alternate cities, with each city beginning with the last letter of the previous.
  The game ends when the user enters an invalid city, or when the computer runs out of options.
  An example game might be: Paris -> Santiago -> Ouagadougou -> Ulaanbaatar -> Riga -> Astana -> Addis Ababa -> Athens -> Stockholm -> Mogadishu -> game_over

As a part of the task I was to create:
  A constructor, which accepts a string as a parameter. This string holds the name of a file containing a list of capital cities on separate lines. The constructor should read the file and populate any internal data structures with the city names. Note that all        strings in the file are lower case, with no conversions between lower and upper case being necessary anywhere in your prototype code.
	A method called getCity, accepting a character as a parameter and returning a string containing a capital city beginning with that character. It should not return cities which have already been marked as used (see below).
  A method called checkCity, accepting a string as a parameter and returning a boolean. The return value should be true if the string contains a valid, unused capital city and false otherwise.
  A method called markUsed, which accepts a string as a parameter and returns void. If the string contains a valid capital city, the city should be marked as used and must no longer be returned by getCity or evaluated true by checkCity.
  A method called restart, which accepts no parameters and returns void. It should mark all cities unused.

