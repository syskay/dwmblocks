//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	
	{"",		"weather",		60,			0},
	{"",		"kernel",		3600,			0},
	{"",		"system",		60,			0},
	{"",		"disk",			60,			0},
	{"",		"battery",		60,			0},
	{"",		"clock",		30,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
