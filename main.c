#include <stdio.h>
#include <unistd.h>
#include "lib/raylib/include/raylib.h"
#include "include/gameplay.h"
#include "include/gui.h"
#include "include/main.h"
#include "include/shapes.h"

int block = SCR_WIDTH / 3;
Rectangle game[9];
int game_grid[9] = {
	0, 0, 0,
	0, 0, 0,
	0, 0, 0};
int is_game_over = 0;
bool turn = true;
int winsP1 = 0;
int winsP2 = 0;

int main()
{
	InitWindow(SCR_WIDTH, SCR_HEIGHT, PROGRAM_NAME);
	SetTargetFPS(GetMonitorRefreshRate(0));

	initHitBox();
	// --- MAIN GAME LOOP ---
	while (!WindowShouldClose())
	{
		checkwinner();
		if (turn)
		{
			cross(game);
		}
		else
		{
			circle(game);
		}
		BeginDrawing();
		ClearBackground(RAYWHITE);
		grid();
		for (int i = 0; i < 9; i++)
		{
			shape(game, &i, &game_grid[i]);
		}
		if (is_game_over)
		{
			endGame(checkwinner());
		}
		matchInfo();
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
