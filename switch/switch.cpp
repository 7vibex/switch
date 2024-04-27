// switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int destinatie;
		std::cout<<"Introdu o destinatie de la 1 pana la 5   : " << std::endl;
		std::cin >> destinatie;
	switch (destinatie)
	{
	case 1:
			std::cout << "Destinatia 1\n";
			break;
	case 2:
		std::cout << "Destinatia 2\n";
		break;
	case 3:
		std::cout << "Destinatia 3\n";
		break;
	case 4:
		std::cout << "Destinatia 4\n";
		break;
	case 5:
		std::cout << "Destinatia 5\n";
		break;
	default:
		std::cout << "Destinatie incorecta\n";
		break;




	}


        cout << "Alegeți între:\n1. Piatra\n2. Foarfeca\n3. Hartie" << endl;
        int user_choice;
        cin >> user_choice;

        // Alegerea utilizatorului
        string user_choice_str;
        switch (user_choice) {
        case 1:
            user_choice_str = "Piatra";
            break;
        case 2:
            user_choice_str = "Foarfeca";
            break;
        case 3:
            user_choice_str = "Hartie";
            break;
        default:
            cout << "Opțiune invalidă. Vă rugăm să introduceți 1, 2 sau 3." << endl;
            return 0;
        }

        // Alegerea computerului
        srand(time(0)); // Inițializare a generatorului de numere aleatorii
        string computer_choices[3] = { "Piatra", "Foarfeca", "Hartie" };
        int computer_choice_index = rand() % 3;
        string computer_choice_str = computer_choices[computer_choice_index];

        // Determinarea câștigătorului
        string winner;
        switch (user_choice_str[0]) {
        case 'P':
            switch (computer_choice_str[0]) {
            case 'P':
                winner = "Remiza";
                break;
            case 'F':
                winner = "Ai pierdut!";
                break;
            case 'H':
                winner = "Ai câștigat!";
                break;
            }
            break;
        case 'F':
            switch (computer_choice_str[0]) {
            case 'P':
                winner = "Ai câștigat!";
                break;
            case 'F':
                winner = "Remiza";
                break;
            case 'H':
                winner = "Ai pierdut!";
                break;
            }
            break;
        case 'H':
            switch (computer_choice_str[0]) {
            case 'P':
                winner = "Ai pierdut!";
                break;
            case 'F':
                winner = "Ai câștigat!";
                break;
            case 'H':
                winner = "Remiza";
                break;
            }
            break;
        }

        // Afisarea rezultatului
        cout << "Ai ales " << user_choice_str << ". Computerul a ales " << computer_choice_str << "." << endl;
        cout << winner << endl;

        return 0;
    }





















// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
