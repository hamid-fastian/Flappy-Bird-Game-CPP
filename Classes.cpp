#include "Classes.h"

void gotoxy(int x, int y)
{
    COORD position;
    position.X = (SHORT)x;
    position.Y = (SHORT)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void HideCursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

Bird::Bird()
{
    Reset();
}

void Bird::Reset()
{
    x = 10;
    y = 10;
    movement = 1;
    jump = 3;
    symbol = '@';
}

void Bird::DisplayBird()
{
    gotoxy(x, y);
    std::cout << symbol;
}

void Bird::jumpBird()
{
    y -= jump;
}

void Bird::MoveBird()
{
    y += movement;
}

int Bird::getX() const
{
    return x;
}

int Bird::getY() const
{
    return y;
}

Pipe::Pipe()
{
    x = 80;
    topHeight = 5;
    bottomHeight = 8;
    gap = 6;
    width = 3;
    symbol = '|';
}

void Pipe::DisplayPipe()
{
    if (x < 0 || x > 110) 
        return;
    for (int row = 0; row < topHeight; row++)
    {
        gotoxy(x, row);
        for (int i = 0; i < width; i++)
        {
            cout << symbol;
        }
    }
    for (int row = topHeight + gap; row < topHeight + gap + bottomHeight; row++)
    {
        gotoxy(x, row);
        for (int i = 0; i < width; i++)
        {
            cout << symbol;
        }
    }
}

void Pipe::MovePipe()
{
    x--;
}

int Pipe::getX() const
{
    return x;
}

int Pipe::getGap() const
{
    return gap;
}

int Pipe::getTopHeight() const
{
    return topHeight;
}

int Pipe::getWidth() const
{
    return width;
}

void Pipe::setX(int newX)
{
    x = newX;
}

Score::Score()
{
    ResetScore();
}

void Score::IncreaseScore()
{
    score++;
}

void Score::DisplayScore()
{
    gotoxy(50, 0);
    cout << "Total Score = " << score;
}

int Score::getScore() const
{
    return score;
}

void Score::ResetScore()
{
    score = 0;
}

Game::Game()
{
    gameover = false;
    for (int i = 0; i < 100; i++)
    {
        p[i].setX(40 + i * 25); 
    }
}

void Game::StartGame()
{
    HideCursor();

    while (!gameover)
    {
        system("cls"); 

        HandleInput();
        Update();
        CheckCollision();
        CheckScore();
        Display();

        Sleep(10); 
    }
    gotoxy(35, 12);
    ShowScore();
    gotoxy(35, 14);
}

void Game::Update()
{
    b.MoveBird();
    for (int i = 0; i < 100; i++)
    {
        p[i].MovePipe();
    }
}

void Game::Display()
{
    b.DisplayBird();
    for (int i = 0; i < 100; i++)
    {
        p[i].DisplayPipe();
    }
    s.DisplayScore();
}

void Game::CheckCollision()
{
    if (b.getY() <= 0 || b.getY() >= 24)
    {
        gameover = true;
        return;
    }
    for (int i = 0; i < 100; i++)
    {
        int pipeX = p[i].getX();
        int pipeWidth = p[i].getWidth();
        if (b.getX() >= pipeX && b.getX() < pipeX + pipeWidth)
        {
            int topH = p[i].getTopHeight();
            int gap = p[i].getGap();
            if (b.getY() < topH || b.getY() >= topH + gap)
            {
                gameover = true;
            }
        }
    }
}

void Game::CheckScore()
{
    for (int i = 0; i < 100; i++)
    {
        if (b.getX() == p[i].getX() + p[i].getWidth())
        {
            s.IncreaseScore();
        }
    }
}

void Game::HandleInput()
{
    if (_kbhit())
    {
        char key = _getch();
        if (key == ' ')
        {
            b.jumpBird();
        }
    }
}

void Game::ShowScore()
{
    ifstream file;
    string i, e;
    int score;
    file.open("HighScore.txt", ios::in);
    if (!file.is_open())
    {
        cout << "HighScore.txt isn't open\n";
    }
    while (file >> i >> e >> score)
    {
    }
    system("cls");
    cout << "\n==================================\n";
    cout << "===\n";
    cout << "            Game Over\n";
    cout << "==================================\n";
    cout << "===\n";
    cout << "   TOTAL SCORE:" << s.getScore() << endl<<endl;
    cout << "   HIGHEST SCORE:"<<score<<endl;
    if (score < s.getScore())
    {
        ofstream file;
        string i, e;
        int score;
        file.open("HighScore.txt", ios::out);
        if (!file.is_open())
        {
            cout << "HighScore.txt isn't open\n";
        }
        file << "HighScore = " << s.getScore()<<endl;
    }
}

void Game::FetchInstructions()
{
    ifstream file;
    string line;
    file.open("Instructions.txt", ios::in);
    if (!file.is_open())
    {
        cout << "Instructions.txt isn't open\n";
    }
    while (getline(file, line))
    {
        cout << line << endl;
    }   
}

void Game::ViewHighScore()
{
    ifstream file;
    string i,e;
    int score;
    file.open("HighScore.txt", ios::in);
    if (!file.is_open())
    {
        cout << "HighScore.txt isn't open\n";
    }
    while (file>>i>>e>>score)
    {
        cout << "HighScore = " << score << endl;
    }
}

void Game::About()
{
    ifstream file;
    string line;
    file.open("About.txt", ios::in);
    if (!file.is_open())
    {
        cout << "About.txt isn't open\n";
    }
    while (getline(file, line))
    {
        cout << line << endl;
    }
    
}

void Game::ExitScreen()
{
    system("cls");
    cout << "==================================================\n";
    cout << "              THANK YOU FOR PLAYING!\n";
    cout << "==================================================\n\n";
    cout << "          We hope you enjoyed the game.\n\n";
    cout << "            Final Score : " << s.getScore() << "\n\n";
    cout << "        Developed By:\n";
    cout << "        Malik Hamid Raza\n\n";
    cout << "==================================================\n";
}