#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <string>
#include <vector>
#include <fstream>
#include <direct.h>
#include <Lmcons.h>

#define KEY_UP 87
#define KEY_DOWN 83
#define KEY_LEFT 65
#define KEY_RIGHT 68
#define ESC_KEY 27

void Board();
void Up();
void Down();
void Left();
void Right();
void CheckSum(int id);
void GameOverOrNot();
std::vector<int> findempty();
int random();
int Numbers[]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
void start();
void HowToPlay();
void Display();
void SaveGame();
std::vector<std::string> LoadSavedGame();
void About();
void Exit();
bool NoMorePossiblities();
