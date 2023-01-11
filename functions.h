
void HowToPlay()
{
    system("cls");
    std::cout << "\n\t\t\t\t\t\t\t\tUse 'W' , 'S' , 'A' , 'D' (CAPSLOCK On) To Move Up Down Left Right ";
    std::cout << "\n\t\t\t\t\t\t\t\tPress Escape Button To Save The Game or Exit The Game ";
    Sleep(5000);
    Display();
}

void GameOverOrNot()
{
    std::vector<int> Empty = findempty();
    if (Empty.size() == 0)
    {
        if (NoMorePossiblities())
        {
            std::cout << "GAME OVER!";
            exit(0);
        }
    }
    Numbers[Empty[random()]] = 2;
    Board();
}

// Functions

void Board()
{

    system("cls");
    printf("\t\t\t\t\t\t\t            _______________________________ \n");
    printf("\t\t\t\t\t\t\t           |       |       |       |       |\n");
    printf("\t\t\t\t\t\t\t           |  %d    |  %d    |  %d    |  %d    |\n", Numbers[0], Numbers[1], Numbers[2], Numbers[3]);
    printf("\t\t\t\t\t\t\t           |_______|_______|_______|_______|\n");
    printf("\t\t\t\t\t\t\t           |       |       |       |       |\n");
    printf("\t\t\t\t\t\t\t           |  %d    |  %d    |  %d    |  %d    |\n", Numbers[4], Numbers[5], Numbers[6], Numbers[7]);
    printf("\t\t\t\t\t\t\t           |_______|_______|_______|_______|\n");
    printf("\t\t\t\t\t\t\t           |       |       |       |       |\n");
    printf("\t\t\t\t\t\t\t           |  %d    |  %d    |  %d    |  %d    |\n", Numbers[8], Numbers[9], Numbers[10], Numbers[11]);
    printf("\t\t\t\t\t\t\t           |_______|_______|_______|_______|\n");
    printf("\t\t\t\t\t\t\t           |       |       |       |       |\n");
    printf("\t\t\t\t\t\t\t           |  %d    |  %d    |  %d    |  %d    |\n", Numbers[12], Numbers[13], Numbers[14], Numbers[15]);
    printf("\t\t\t\t\t\t\t           |_______|_______|_______|_______|\n");
}

// Moves all Element To up ----> Abhi tak Jodne ka kaam nhi kiya hai
void Up()
{
    // All The vriables
    int count = 0;
    int count2 = 0;
    int count3 = 0;

    // moves The element of rows

    for (int i = 0; i < 4; i++)
    {
        if (Numbers[i] == 0)
        {
            while (Numbers[i] == 0 && count != 3)
            {
                Numbers[i] = Numbers[i + 4];
                Numbers[i + 4] = Numbers[i + 8];
                Numbers[i + 8] = Numbers[i + 12];
                Numbers[i + 12] = 0;
                count++;
            }
        }
        if (Numbers[i + 4] == 0)
        {
            while (Numbers[i + 4] == 0 && count2 != 2)
            {
                Numbers[i + 4] = Numbers[i + 8];
                Numbers[i + 8] = Numbers[i + 12];
                Numbers[i + 12] = 0;
                count2++;
            }
        }
        if (Numbers[i + 8] == 0)
        {
            while (Numbers[i + 8] == 0 && count3 != 1)
            {
                Numbers[i + 8] = Numbers[i + 12];
                Numbers[i + 12] = 0;
                count3++;
            }
        }
        count = 0;
        count2 = 0;
        count3 = 0;
    }
}

void Down()
{
    int count = 0;
    int count2 = 0;
    int count3 = 0;

    // moves The element of rows

    for (int i = 0; i < 4; i++)
    {
        if (Numbers[i + 12] == 0)
        {
            while (Numbers[i + 12] == 0 && count != 3)
            {
                Numbers[i + 12] = Numbers[i + 8];
                Numbers[i + 8] = Numbers[i + 4];
                Numbers[i + 4] = Numbers[i];
                Numbers[i] = 0;
                count++;
            }
        }
        if (Numbers[i + 8] == 0)
        {
            while (Numbers[i + 8] == 0 && count2 != 2)
            {
                Numbers[i + 8] = Numbers[i + 4];
                Numbers[i + 4] = Numbers[i];
                Numbers[i] = 0;
                count2++;
            }
        }
        if (Numbers[i + 4] == 0)
        {
            while (Numbers[i + 4] == 0 && count3 != 1)
            {
                Numbers[i + 4] = Numbers[i];
                Numbers[i] = 0;
                count3++;
            }
        }
        count = 0;
        count2 = 0;
        count3 = 0;
    }
}

void Right()
{
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < 16; i = i + 4)
    {
        if (Numbers[i + 3] == 0)
        {
            while (Numbers[i + 3] == 0 && count1 != 3)
            {
                Numbers[i + 3] = Numbers[i + 2];
                Numbers[i + 2] = Numbers[i + 1];
                Numbers[i + 1] = Numbers[i];
                Numbers[i] = 0;
                count1++;
            }
        }
        if (Numbers[i + 2] == 0)
        {
            while (Numbers[i + 2] == 0 && count2 != 2)
            {
                Numbers[i + 2] = Numbers[i + 1];
                Numbers[i + 1] = Numbers[i];
                Numbers[i] = 0;
                count2++;
            }
        }
        if (Numbers[i + 1] == 0)
        {
            while (Numbers[i + 1] == 0 && count3 != 1)
            {
                Numbers[i + 1] = Numbers[i];
                Numbers[i] = 0;
                count3++;
            }
        }
        count1 = 0, count2 = 0, count3 = 0;
    }
}

void Left()
{
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < 16; i = i + 4)
    {
        if (Numbers[i] == 0)
        {
            while (Numbers[i] == 0 && count1 != 3)
            {
                Numbers[i] = Numbers[i + 1];
                Numbers[i + 1] = Numbers[i + 2];
                Numbers[i + 2] = Numbers[i + 3];
                Numbers[i + 3] = 0;
                count1++;
            }
        }
        if (Numbers[i + 1] == 0)
        {
            while (Numbers[i + 1] == 0 && count2 != 2)
            {
                Numbers[i + 1] = Numbers[i + 2];
                Numbers[i + 2] = Numbers[i + 3];
                Numbers[i + 3] = 0;
                count2++;
            }
        }
        if (Numbers[i + 2] == 0)
        {
            while (Numbers[i + 2] == 0 && count3 != 1)
            {
                Numbers[i + 2] = Numbers[i + 3];
                Numbers[i + 3] = 0;
                count3++;
            }
        }
        count1 = 0, count2 = 0, count3 = 0;
    }
}

std::vector<int> findempty()
{
    std::vector<int> Empty;
    for (int i = 0; i < 16; i++)
    {
        if (Numbers[i] == 0)
        {
            Empty.push_back(i);
        }
    }
    return Empty;
}

int random()
{
    srand(time(0));
    std::vector<int> v = findempty();
    return (rand() % v.size());
}

void CheckSum(int id)
{
    if (id == 1)
    {

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 16; j = j + 4)
            {
                if (Numbers[i + j] == Numbers[i + j + 4] != 0)
                {
                    Numbers[i + j] *= 2;
                    Numbers[i + j + 4] = 0;
                }
            }
        }
    }
    if (id == 2)
    {

        // Another Way of Doing The same Thing

        for (int i = 0; i < 4; i++)
        {
            for (int j = 12; j > 0; j = j - 4)
            {
                if (Numbers[i + j] == Numbers[i + j - 4] != 0)
                {
                    Numbers[i + j] *= 2;
                    Numbers[i + j - 4] = 0;
                }
            }
        }
    }
    if (id == 3)
    {
        for (int i = 0; i < 16; i += 4)
        {
            for (int j = 3; j > 0; j -= 1)
            {
                if (Numbers[i + j] == Numbers[i + j - 1] != 0)
                {
                    Numbers[i + j] *= 2;
                    Numbers[i + j - 1] = 0;
                }
            }
        }
    }
    if (id == 4)
    {
        for (int i = 0; i < 16; i += 4)
        {
            for (int j = 0; j < 3; j++)
            {
                if (Numbers[i + j] == Numbers[i + j + 1] != 0)
                {
                    Numbers[i + j] *= 2;
                    Numbers[i + j + 1] = 0;
                }
            }
        }
    }
}

void start()
{
    int cnt = 0;
    char c;
    std::cout << "\n\t\t\t\t\t\t\t\tUse 'W' , 'S' , 'A' , 'D' (CAPSLOCK On) To Move Up Down Left Right ";
    std::cout << "\n\t\t\t\t\t\t\t\tPress Escape Button To Save The Game or Exit The Game ";
    std::cout << "\n\t\t\t\t\t\t\t\tCaps Lock Must Be Turned On!!!!";
    getch();
    Numbers[random()] = 2;
    Board();
    while (1)
    {
        c = getch();
        if (c == KEY_UP)
        {
            Up();
            CheckSum(1);
            Up();
            GameOverOrNot();
        }
        else if (c == KEY_DOWN)
        {
            Down();
            CheckSum(2);
            Down();
            GameOverOrNot();
        }
        else if (c == KEY_RIGHT)
        {
            Right();
            CheckSum(3);
            Right();
            GameOverOrNot();
        }
        else if (c == KEY_LEFT)
        {
            Left();
            CheckSum(4);
            Left();
            GameOverOrNot();
        }
        else if (c == ESC_KEY)
        {
            SaveGame();
        }
    }
}

void Display()
{
    system("cls");
    std::cout << "\t\t\t\t\t\t\t\t";
    for (int i = 0; i < 40; i++)
    {
        std::cout << char(177);
    }
    std::cout << "\n\n\n\t\t\t\t\t\t\t"
              << "\t\tWelcome To The '2048' Game!";
    std::cout << "\n\n\n\t\t\t\t\t\t\t\t";

    for (int i = 0; i < 40; i++)
    {
        std::cout << char(177);
    }

    std::cout << "\n\n\n\t\t\t\t\t\t\t\t"
              << "1. Start\n";
    std::cout << "\n\t\t\t\t\t\t\t\t"
              << "2. Controls\n";
    std::cout << "\n\t\t\t\t\t\t\t\t"
              << "3. Load Saved Game\n";
    std::cout << "\n\t\t\t\t\t\t\t\t"
              << "4. About\n";
    std::cout << "\n\t\t\t\t\t\t\t\t"
              << "5. Exit\n";
    char want = getch();
    switch (want)
    {
    case '1':
    {
        start();
        break;
    }
    case '2':
    {
        HowToPlay();
        break;
    }
    case '3':
    {
        std::vector<std::string> NUM = LoadSavedGame();
        if (NUM.empty())
        {
            std::cout << "Sorry But We are Unable To Find Any Saved Games Be Sure That You Have Played Atleast One Game";
            Sleep(2000);
            Display();
            exit(0);
        }
        for (int i = 0; i < 16; i++)
        {
            Numbers[i] = std::stoi(NUM[i]);
        }
        start();
        break;
    }
    case '4':
    {
        About();
        break;
    }
    case '5':
    {
        Exit();
        break;
    }
    }
}
void SaveGame()
{
    _mkdir("C:/SavedGame");
    std::ofstream Save("C:/SavedGame/SavedGame.bin");
    for (int i = 0; i < 16; i++)
    {
        Save << "\n"
             << Numbers[i];
    }
    std::cout << "\n\t\t\t\t\t\t\t\tGame Saved Successfully!";
    std::cout << "\n\t\t\t\t\t\t\t\tThis Program Will Automatically Exit after 10 Seconds ";
    Sleep(10000);
    system("cls");
    Save.close();
    exit(0);
}

std::vector<std::string> LoadSavedGame()
{
    std::ifstream file("C:/SavedGame/SavedGame.bin");
    std::string data;
    std::vector<std::string> Nums;
    if (file.is_open())
    {
        while (!file.eof())
        {
            std::getline(file, data);
            std::cout << std::endl
                      << data;
            Nums.push_back(data);
        }
    }
    else
    {
        std::cout << "oops Error Encountered while Opening File";
        Sleep(2000);
        Display();
    }
    std::cout << "\n\t\t\t\t\t\t\t\tPlease Wait While We are Loading The Last Saved Game";
    file.close();
    return Nums;
}

void About()
{
    system("cls");
    std::cout << "\n\n\nThis Game Is Made By A Coder\nAny Type of Claiming This as Your Program Might result in Court!!!!!! \n\t\t\t\t All Rights reserved";
}

void Exit()
{
    system("cls");
    exit(0);
}

bool NoMorePossiblities()
{
    int cnt = 1;
    for (int i = 0; i < 16; i++) // up checking
    {
        if (Numbers[i] != Numbers[i + 4])
        {
            cnt = 0;
        }
        else
        {
            cnt = 1;
        }
    }
    for (int i = 0; i < 16; i++)
    {
        if ((i+1)%4 == 0)
        {
            goto last;
        }

        if (Numbers[i] != Numbers[i + 1])
        {
            cnt = 0;
        }
        else
        {
            cnt = 1;
        }
    last:;
    }
    return cnt == 0;
}