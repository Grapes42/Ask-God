#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	std::string question;
	std::string exit;
	int answer;
	string outputs[20] = {"It is certain", "It is decidedly so", "Without a doubt", "Yes definitely", "You may rely on it", "As I see it, yes", "Most likely", "Outlook good", "Yes", "Signs point to yes", "Reply hazy, try again", "Ask again later", "Better not tell you now", "Cannot predict now", "Concentrate and ask again", "Don't count on it", "My reply is no", "My sources say no", "Outlook not so good", "Very doubtful"};
	do{
		cout << "ask god a question: ";
		std::getline(std::cin, question);

		answer = rand() % 19 + 0;
		cout << outputs[answer] << endl;

		cout << "ask another question? (y/n): ";
		std::getline(std::cin, exit);
		cout << endl;

	}while(exit == "y");

	return 0;
}
