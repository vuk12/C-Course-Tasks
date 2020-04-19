#include<iostream>
#include<conio.h>   //for keyboard input
#include<Windows.h>  // for Sleep

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;

//head cordinates
int x, y;
//Mouse cordinates
int mouseX, mouseY;
//Bonus cordinates
int bonusX, bonusY;

int score;
//Enumeration for direction
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection direction;

//Body cordinates
int BodyX[400], BodyY[400];
int bodySize;

int scoreIncrease;

//Make geme faster if snake is growing
int timeout = 100;



void Initialization()
{
	gameOver = false;
	x = 8;
	y = 12;
	mouseX = rand() % width;
	mouseY = rand() % height;
	bonusX = (rand()+10) % width;
	bonusY = (rand()+10) % height;
	score = 0;
	direction = STOP;
	bodySize = 0;
	scoreIncrease = 0;
}

void Draw()
{
	system("cls");

	for (int i = 0; i < width + 2; i++)
	{
		cout << "*";
	}
	cout << endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				cout << "*";

			if (i == y && j == x)  //Drawing snake head
			{
				cout << "O";
			}
			else if (i == mouseY && j == mouseX) // Drawing mouse
			{
				cout << "M";
			}
			else if (i == bonusY && j == bonusX && bodySize>5 && ((bodySize%6)==0) && scoreIncrease!=10) // Drawing mouse
			{
				cout << "B";
			}
			else
			{
				//Drawing the body of snake
				bool hasTail = false;
				for (int z = 0; z < bodySize; z++)
				{
					if (BodyX[z] == j && BodyY[z] == i)
					{
						cout << "o";
						hasTail = true;
					}

				}
				if (hasTail == false)
				{
					cout << " ";
				}

			}


			if (j == width - 1)
				cout << "*";

		}
		cout << endl;
	}

	for (int i = 0; i < width + 2; i++)
	{
		cout << "*";
	}
	cout << endl;

	cout << "Points: " << score<<endl;

	if (direction == STOP)
		cout << "The game is paused!" << endl;

}

void KeyboardInput()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case '8':
			direction = UP;
			break;
		case '2':
			direction = DOWN;
			break;
		case '4':
			direction = LEFT;
			break;
		case '6':
			direction = RIGHT;
			break;
		case 'p':
			direction = STOP;
			break;
		}
	}
}

void SnakeMovement()
{
	if(direction!=STOP)
	{ 
	int previousX = BodyX[0];
	int previousY = BodyY[0];
	int prevX, prevY;

	//seting body array's first element on head cordinate
	BodyX[0] = x;
	BodyY[0] = y;

	//Moving the body part
	for (int i = 1; i < bodySize; i++)
	{
		prevX = BodyX[i];
		prevY = BodyY[i];
		BodyX[i] = previousX;
		BodyY[i] = previousY;
		previousX = prevX;
		previousY = prevY;
	}
	}

	switch (direction)
	{
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	}

	//If head hit wall it is game over
	if (x > width || x < 0 || y<0 || y>height)
	{
		gameOver = true;
	}

	//If head hit the body it is game over
	for (int i = 0; i < bodySize; i++)
	{
		if (x == BodyX[i] && y == BodyY[i])
		{
			gameOver = true;
		}
	}

	//Eat mouse
	if (x == mouseX && y == mouseY)
	{
		score = score + 3;
		bodySize++;
		if(timeout>=10)
			timeout = timeout - 5;
		mouseX = rand() % width;
		mouseY = rand() % height;
		scoreIncrease = 3;
	}
	
	//Colect bonus field
	if (x == bonusX && y == bonusY && bodySize > 5 && ((bodySize % 6) == 0) && scoreIncrease!=10)
	{
		score = score + 10;
		bonusX = rand() % width;
		bonusY = rand() % height;
		scoreIncrease = 10;
	}
}

int main()
{
	Initialization();

	while (gameOver == false)  // !gameOver
	{
		Draw();
		KeyboardInput();
		SnakeMovement();
		Sleep(timeout);
	}
}

// Dodatno da mozes da pritisnes Pauzu odnosno slovo P
// Drugo je da se igrica ubrzava sa svakim pojedinm misom
// da se uradio dio u kome ce se dozvoliti prolazak kroz zid


//1. Prvo definises sve globalne promjenjljive koje ti trebaju i inicijalizujes im vrijednosti
//2. Zatim nacrtas pravougaonik i glavu i misa
// 3. Dodas dio u kome kupis unos sa tast<ture
//4. Dodas dio koji mjenja kordinate na osnovu unosa sa tastature
// 5. Dodas nizove koji ce da predstavljaju tijelo zmije, u Move metodu, ali i u draw metodu