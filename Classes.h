#pragma once
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

void gotoxy(int x, int y);
void HideCursor();

class Bird {
private:
    int x;
    int y;
    int movement;
    int jump;
    char symbol;

public:
    Bird();
    void DisplayBird();
    void jumpBird();
    void MoveBird();
    int getX() const;
    int getY() const;
    void Reset();
};

class Pipe {
private:
    int x;
    int topHeight;
    int bottomHeight;
    int gap;
    int width;
    char symbol;

public:
    Pipe();
    void DisplayPipe();
    void MovePipe();
    int getX() const;
    int getGap() const;
    int getTopHeight() const;
    int getWidth() const;
    void setX(int newX);
};

class Score {
private:
    int score;

public:
    Score();
    void IncreaseScore();
    void DisplayScore();
    int getScore() const;
    void ResetScore();
};

class Game {
private:
    Bird b;
    Pipe p[100];
    Score s;
    bool gameover;

public:
    Game();
    void StartGame();
    void Update();
    void Display();
    void CheckCollision();
    void CheckScore();
    void HandleInput();
    void ShowScore();
    void FetchInstructions();
    void ViewHighScore();
    void About();
    void ExitScreen();
};