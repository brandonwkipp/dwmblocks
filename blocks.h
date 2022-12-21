//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "cpu", 1, 2},
  {"", "fan", 1, 3},
  {"", "nettraf",  1,  16}, 
  {"", "volume", 1,  10},
  {"", "battery", 10,  4},
  {"", "clock",  1, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
