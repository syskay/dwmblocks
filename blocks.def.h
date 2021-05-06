//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	
	{"",			"weather-sb",			60,				1},
	{"",			"kernel-sb",			3600,			2},
	{"",			"memory-sb",			1,				3},
	{"",			"system-sb",			60,				4},
	{"",			"disk-sb",				60,				5},
	{"",			"battery-sb",			60,				6},
	{"",			"clock-sb",				30,				7},
	{"", 	  	"user-sb",				60,				8},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
