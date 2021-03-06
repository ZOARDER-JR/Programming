#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <string.h>
#include "ChessMoves.h"


// This is a hacky-horrible way of hard-coding a test case.
Game *testcase20(void)
{
	int i;
	char *moves[10];
	Game *g = NULL;

	i = 0;
	moves[i++] = "1. Nf3 a5";
	moves[i++] = "2. b3 h5";
	moves[i++] = "3. a4 Ra6";
	moves[i++] = "4. h3 Rhh6";
	moves[i++] = "5. Na3 Rad6";
	moves[i++] = "6. Rb1 Rhg6";
	moves[i++] = "7. Ra1 Rg3";
	moves[i++] = "8. Nd4 Rd3";

	g = malloc(sizeof(Game));
	g->numMoves = i;

	g->moves = malloc(sizeof(char *) * g->numMoves);

	for (i = 0; i < g->numMoves; i++)
	{
		g->moves[i] = malloc(sizeof(char) * (strlen(moves[i]) + 1));
		strcpy(g->moves[i], moves[i]);
	}

	return g;
}

Game *destroyGame(Game *g)
{
	int i;

	if (g == NULL)
		return NULL;

	for (i = 0; i < g->numMoves; i++)
		free(g->moves[i]);

	free(g->moves);
	free(g);

	return NULL;
}

int main(void)
{
	// Create a Game struct for this test case.
	Game *g = testcase20();

	// Play the game.
	char **finalBoardState = playTheGame(g);

	// Destroy the chess board returned by playTheGame().
	finalBoardState = destroyChessBoard(finalBoardState);

	// Destroy the Game struct with all the chess moves.
	g = destroyGame(g);

	return 0;
}
