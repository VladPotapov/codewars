#include <iostream>
using namespace std;

/*
std::string get_planet_name(int id)
{
  return "";
}
*/

// my code
string get_planet_name(int id) {
	if (id == 1) {
		return "Mercury";
	}
	else if (id == 2) {
		return "Venus";
	}
	else if (id == 3) {
		return "Earth";
	}
	else if (id == 4) {
		return "Mars";
	}
	else if (id == 5) {
		return "Jupiter";
	}
	else if (id == 6) {
		return "Saturn";
	}
	else if (id == 7) {
		return "Uranus";
	}
	else if (id == 8) {
		return "Neptune";
	}
	else {
		return "there is no such planet";
	}
}

//codewars
string get_planet_name2(int id) {
	string planets[] = { "","Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune" };
	return planets[id];
}

string get_planet_name3(int id) {
	switch (id) {
	case 1:
		return "Mercury";
	case 2:
		return "Venus";
	case 3:
		return "Earth";
	case 4:
		return "Mars";
	case 5:
		return "Jupiter";
	case 6:
		return "Saturn";
	case 7:
		return "Uranus";
	case 8:
		return "Neptune";
	default:
		return "Invalid planet number";
	}
}


string get_planet_name4(int id) {
	return (id == 1) ? "Mercury" : (id == 2) ? "Venus" : (id == 3) ? "Earth" : (id == 4) ? "Mars" : (id == 5) ? "Jupiter" : (id == 6) ? "Saturn" : (id == 7) ? "Uranus" : (id == 8) ? "Neptune" : "invalid planet number";
}

const char* planets5[8] = { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune" };

string get_planet_name5(int id) {
	return planets5[id - 1];
}


int main() {
	cout << get_planet_name5(3) << endl;
	system("pause");
}
