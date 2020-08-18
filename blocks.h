//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"📝", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"Wifi:", "iwconfig wlp0s20f3 | awk -F\\\" '{print $2}' | head -n 1",	60,		0},
	{"⌚", "date +'%H:%M %Y-%h-%d'",					60,		0},
	{"Bat:", "upower -i /org/freedesktop/UPower/devices/battery_BAT0 | awk '/percentage/ {print $2}'", 60, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
