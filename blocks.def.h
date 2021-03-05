//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	
	{"",		"weather",		60,			1},
	{"",		"kernel",		3600,			2},
	{"",		"system",		60,			3},
	{"",		"disk",			60,			4},
	{"",		"battery",		60,			5},
	{"",		"clock",		30,			6},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
