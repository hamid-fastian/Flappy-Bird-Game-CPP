#include"Classes.h"

int main()
{
	int choice;
	Game g;
	cout << "\n==================================\n";
	cout << "===\n";
	cout << "            Flappy Bird\n";
	cout << "==================================\n";
	cout << "===\n";
	while (true)
	{
		cout << "1. Start Game\n";
		cout << "2. Instructions\n";
		cout << "3. View High Score\n";
		cout << "4. About Game\n";
		cout << "5. Exit\n";
		cout << "Enter your choice :";
		cin >> choice;
		if (choice == 1)
		{
			system("cls");
			g.StartGame();
			cout << "\n==================================\n";
		}
		else if (choice == 2)
		{
			system("cls");
			cout << "\n==================================\n";
			cout << "===\n";
			cout << "            Instructions\n";
			cout << "==================================\n";
			cout << "===\n";
			g.FetchInstructions();
			cout << "\n";
			cout << "\n==================================\n";
		}
		else if (choice == 3)
		{
			system("cls");
			cout << "\n==================================\n";
			cout << "===\n";
			cout << "            High Score\n";
			cout << "==================================\n";
			cout << "===\n";
			g.ViewHighScore();
			cout << "\n";
			cout << "\n==================================\n";
		}
		else if (choice == 4)
		{
			system("cls");
			cout << "\n==================================\n";
			cout << "===\n";
			cout << "            About Game\n";
			cout << "==================================\n";
			cout << "===\n";
			g.About();
			cout << "\n";
			cout << "\n==================================\n";
		}
		else if (choice == 5)
		{
			system("cls");
			g.ExitScreen();
			break;
		}
		else
		{
			
			cout << "\n======> Invalid Choice <======\n\n";
		}
	}
	system("pause");
	return 0;
}