#include <iostream>

std::string to_uppercase(std::string s)
{
	for (int i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEREABLE FEEDBACK NOISE *" << std::endl, 0);
	for (int i = 1; i < argc; i++)
		std::cout << to_uppercase(argv[i]);
	std::cout << std::endl;
	return (0);
}
