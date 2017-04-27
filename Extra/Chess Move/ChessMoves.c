//#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include "ChessMoves.h"

int canMove(char c, Move M) // own defined function 
{
	if (M.color == WHITE && (c >= 'a' && c <= 'z'))
	{
		return 0;
	}
	else if (M.color == BLACK && (c >= 'A' && c <= 'Z'))
	{
		return 0;
	}
	else if (M.color == WHITE && (c >= 'A' && c <= 'Z') && M.isCapture == 0)
	{
		return 0;
	}
	else if (M.color == BLACK && (c >= 'a' && c <= 'z') && M.isCapture == 0)
	{
		return 0;
	}

	return 1;
}

char **createChessBoard(void)
{
	char **board;

	board = (char**)malloc(8 * sizeof(char*));

	for (int i = 0; i < 8; i++)
	{
		board[i] = (char*)malloc(8 * sizeof(char));
	}

	if (board)
	{
		char B[] = { 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R' };
		char W[] = { 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' };

		for (int i = 0; i < 8; i++)
		{
			board[0][i] = B[i];
			board[1][i] = 'P';
			board[6][i] = 'p';
			board[7][i] = W[i];
		}

		for (int i = 2; i < 6; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				board[i][j] = ' ';
			}
		}
		return board;
	}

	return NULL;
}

char **destroyChessBoard(char **board)
{
	free(board);
	return NULL;
}

void printChessBoard(char **board)
{
	for (int i = 0; i < 8; i++)
	{
		printf("=");
	}

	printf("\n");

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%c", board[i][j]);
		}

		printf("\n");
	}

	for (int i = 0; i < 8; i++)
	{
		printf("=");
	}

	printf("\n\n");
}

void parseNotationString(char *str, Move *whiteMove, Move *blackMove)
{
	char *nm, *wm, *bm;
	int wl, bl;

	nm = strtok(str," ");
	wm = strtok(NULL, " ");
	bm = strtok(NULL, " ");

	if (wm != NULL)
	{
		wl = strlen(wm);

		whiteMove->to_loc.row = wm[wl - 1] - '0';
		whiteMove->to_loc.col = wm[wl - 2];
		whiteMove->piece = 'P';
		whiteMove->from_loc.col = 'x';
		whiteMove->from_loc.row = -1;
		whiteMove->isCapture = 0;

		for (int i = 0; i < wl - 2; i++)
		{
			if (wm[i] >= 'A' && wm[i] <= 'Z')
			{
				whiteMove->piece = wm[i];
			}
			else if (wm[i] >= 'a' && wm[i] <= 'h')
			{
				whiteMove->from_loc.col = wm[i];
			}
			else if (wm[i] >= '1' && wm[i] <= '8')
			{
				whiteMove->from_loc.row = wm[i] - '0';
			}
			else if (wm[i] == 'x')
			{
				whiteMove->isCapture = 1;
			}
		}
		whiteMove->color = WHITE;
	}
	
	if (bm != NULL)
	{
		bl = strlen(bm);

		blackMove->to_loc.row = bm[bl - 1] - '0';
		blackMove->to_loc.col = bm[bl - 2];
		blackMove->piece = 'P';
		blackMove->from_loc.col = 'x';
		blackMove->from_loc.row = -1;
		blackMove->isCapture = 0;

		for (int i = 0; i < bl - 2; i++)
		{
			if (bm[i] >= 'A' && bm[i] <= 'Z')
			{
				blackMove->piece = bm[i];
			}
			else if (bm[i] >= 'a' && bm[i] <= 'h')
			{
				blackMove->from_loc.col = bm[i];
			}
			else if (bm[i] >= '1' && bm[i] <= '8')
			{
				blackMove->from_loc.row = bm[i] - '0';
			}
			else if (bm[i] == 'x')
			{
				blackMove->isCapture = 1;
			}
		}
		blackMove->color = BLACK;
	}
}

void findFromLoc(char **board, Move *move)
{
	int cc, cr, tc, tr;
	char temp;

	tc = move->to_loc.col - 'a';
	tr = 8 - move->to_loc.row;

	if (move->color == WHITE)
	{
		temp = tolower(move->piece);
	}
	else
	{
		temp = move->piece;
	}


	if (move->from_loc.col == 'x' && move->from_loc.row == -1) // When both the from_loc.row and from_loc.col are nknown
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (board[i][j] == temp)
				{
					if (temp == 'p' || temp == 'P') // Calculating the possible moves for Pawn
					{
						if (move->color == BLACK)
						{
							if (move->isCapture == 1)
							{
								if (i + 1 == tr && j + 1 == tc && canMove(board[i+1][j+1],*move) == 1)
								{
									move->from_loc.row = 8 - i;
									move->from_loc.col = 'a' + j;

									return;
								}
								else if (i + 1 == tr && j - 1 == tc && canMove(board[i + 1][j - 1], *move) == 1)
								{
									move->from_loc.row = 8 - i;
									move->from_loc.col = 'a' + j;

									return;
								}
							}
							else
							{
								if (i + 1 == tr && j == tc && canMove(board[i + 1][j], *move) == 1)
								{
									move->from_loc.row = 8 - i;
									move->from_loc.col = 'a' + j;

									return;
								}
								else if (i + 2 == tr && j == tc && canMove(board[i + 2][j], *move) == 1)
								{
									move->from_loc.row = 8 - i;
									move->from_loc.col = 'a' + j;

									return;
								}
							}
						}
						else
						{
							if (move->isCapture == 1)
							{
								if (i - 1 == tr && j + 1 == tc && canMove(board[i - 1][j + 1], *move) == 1)
								{
									move->from_loc.row = 8 - i;
									move->from_loc.col = 'a' + j;

									return;
								}
								else if (i - 1 == tr && j - 1 == tc && canMove(board[i - 1][j - 1], *move) == 1)
								{
									move->from_loc.row = 8 - i;
									move->from_loc.col = 'a' + j;

									return;
								}
							}
							else
							{
								if (i - 1 == tr && j == tc && canMove(board[i - 1][j], *move) == 1)
								{
									move->from_loc.row = 8 - i;
									move->from_loc.col = 'a' + j;

									return;
								}
								else if (i - 2 == tr && j == tc && canMove(board[i - 2][j], *move) == 1)
								{
									move->from_loc.row = 8 - i;
									move->from_loc.col = 'a' + j;

									return;
								}
							}
						}
					}
					else if (temp == 'k' || temp == 'K') // Calculating possible moves for King
					{
						if ((i + 1 == tr && j + 1 == tc && canMove(board[i + 1][j + 1], *move) == 1) || (i + 1 == tr && j == tc && canMove(board[i + 1][j], *move) == 1) || (i + 1 == tr && j - 1 == tc && canMove(board[i + 1][j - 1], *move) == 1) || (i == tr && j + 1 == tc && canMove(board[i][j + 1], *move) == 1) || (i == tr && j - 1 == tc && canMove(board[i][j - 1], *move) == 1) || (i - 1 == tr && j + 1 == tc && canMove(board[i - 1][j + 1], *move) == 1) || (i - 1 == tr && j == tc && canMove(board[i - 1][j], *move) == 1) || (i - 1 == tr && j - 1 == tc && canMove(board[i - 1][j - 1], *move) == 1))
						{
							move->from_loc.row = 8 - i;
							move->from_loc.col = 'a' + j;

							return;
						}
					}
					else if (temp == 'n' || temp == 'N') // Calculating possible moves for Knights
					{
						if ((i + 2 == tr && j + 1 == tc && canMove(board[i + 2][j + 1], *move) == 1) || (i + 2 == tr && j - 1 == tc && canMove(board[i + 2][j - 1], *move) == 1) || (i + 1 == tr && j + 2 == tc && canMove(board[i + 1][j + 2], *move) == 1) || (i + 1 == tr && j - 2 == tc && canMove(board[i + 1][j - 2], *move) == 1) || (i - 1 == tr && j + 2 == tc && canMove(board[i - 1][j + 2], *move) == 1) || (i - 1 == tr && j - 2 == tc && canMove(board[i - 1][j - 2], *move) == 1) || (i - 2 == tr && j + 1 == tc && canMove(board[i - 2][j + 1], *move) == 1) || (i - 2 == tr && j - 1 == tc && canMove(board[i - 2][j - 1], *move) == 1))
						{
							move->from_loc.row = 8 - i;
							move->from_loc.col = 'a' + j;

							return;
						}
					}
					else if (temp == 'r' || temp == 'R') // Calculating possible moves for Rooks
					{
						for (int k = i + 1; k < 8; k++)
						{
							if (k == tr && j == tc && canMove(board[k][j], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[k][j], *move) == 0)
							{
								break;
							}
						}
						for (int k = i - 1; k >= 0; k--)
						{
							if (k == tr && j == tc && canMove(board[k][j], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[k][j], *move) == 0)
							{
								break;
							}
						}
						for (int k = j + 1; k < 8; k++)
						{
							if (i == tr && k == tc && canMove(board[i][k], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[i][k], *move) == 0)
							{
								break;
							}
						}
						for (int k = j - 1; k >= 0; k--)
						{
							if (i == tr && k == tc && canMove(board[i][k], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[i][k], *move) == 0)
							{
								break;
							}
						}
					}
					else if (temp == 'b' || temp == 'B') // Calculating possible moves for Bishops
					{
						for (int k = i + 1, l = j + 1; k < 8, l < 8; k++, l++)
						{
							if (k == tr && l == tc && canMove(board[k][l], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[k][l], *move) == 0)
							{
								break;
							}
						}
						for (int k = i + 1, l = j - 1; k < 8, l >= 0; k++, l--)
						{
							if (k == tr && l == tc && canMove(board[k][l], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[k][l], *move) == 0)
							{
								break;
							}
						}
						for (int k = i - 1, l = j + 1; k >= 0, l < 8; k--, l++)
						{
							if (k == tr && l == tc && canMove(board[k][l], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[k][l], *move) == 0)
							{
								break;
							}
						}
						for (int k = i - 1, l = j - 1; k >= 0, l >= 0; k--, l--)
						{
							if (k == tr && l == tc && canMove(board[k][l], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[k][l], *move) == 0)
							{
								break;
							}
						}
					}
					else if (temp == 'q' || temp == 'Q') // Calculating possible moves for Queen
					{
						for (int k = i + 1; k < 8; k++)
						{
							if (k == tr && j == tc && canMove(board[k][j], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[k][j], *move) == 0)
							{
								break;
							}
						}
						for (int k = i - 1; k >= 0; k--)
						{
							if (k == tr && j == tc && canMove(board[k][j], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[k][j], *move) == 0)
							{
								break;
							}
						}
						for (int k = j + 1; k < 8; k++)
						{
							if (i == tr && k == tc && canMove(board[i][k], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[i][k], *move) == 0)
							{
								break;
							}
						}
						for (int k = j - 1; k >= 0; k--)
						{
							if (i == tr && k == tc && canMove(board[i][k], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[i][k], *move) == 0)
							{
								break;
							}
						}
						for (int k = i + 1, l = j + 1; k < 8, l < 8; k++, l++)
						{
							if (k == tr && l == tc && canMove(board[k][l], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[k][l], *move) == 0)
							{
								break;
							}
						}
						for (int k = i + 1, l = j - 1; k < 8, l >= 0; k++, l--)
						{
							if (k == tr && l == tc && canMove(board[k][l], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[k][l], *move) == 0)
							{
								break;
							}
						}
						for (int k = i - 1, l = j + 1; k >= 0, l < 8; k--, l++)
						{
							if (k == tr && l == tc && canMove(board[k][l], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[k][l], *move) == 0)
							{
								break;
							}
						}
						for (int k = i - 1, l = j - 1; k >= 0, l >= 0; k--, l--)
						{
							if (k == tr && l == tc && canMove(board[k][l], *move) == 1)
							{
								move->from_loc.row = 8 - i;
								move->from_loc.col = 'a' + j;

								return;
							}
							else if (canMove(board[k][l], *move) == 0)
							{
								break;
							}
						}
					}
				}
			}
		}
	}
	else if (move->from_loc.col == 'x') // When only the from_loc.col is unknown
	{
		cr = 8 - move->from_loc.row;

		for (int j = 0; j < 8; j++)
		{
			if (board[cr][j] == temp)
			{
				if (temp == 'p' || temp == 'P') // Calculating possible moves for Pawns
				{
					if (move->isCapture == 1)
					{
						if (j + 1 == tc && canMove(board[tr][j + 1], *move) == 1)
						{
							move->from_loc.col = 'a' + j;
							return;
						}
						else if (j - 1 == tc && canMove(board[tr][j - 1], *move) == 1)
						{
							move->from_loc.col = 'a' + j;
							return;
						}
					}
					else
					{
						if (j == tc && canMove(board[tr][j], *move) == 1)
						{
							move->from_loc.col = 'a' + j;
							return;
						}
					}
				}
				else if (temp == 'k' || temp == 'K') // Calculating possible moves for King
				{
					if ((j + 1 == tc && canMove(board[tr][j + 1], *move) == 1) || (j == tc && canMove(board[tr][j], *move) == 1) || (j - 1 == tc && canMove(board[tr][j - 1], *move) == 1))
					{
						move->from_loc.col = 'a' + j;
						return;
					}
				}
				else if (temp == 'n' || temp == 'N') // Calculating possible moves for Knights
				{
					if ((j + 1 == tc && canMove(board[tr][j + 1], *move) == 1) || (j - 1 == tc && canMove(board[tr][j + 1], *move) == 1) || (j + 2 == tc && canMove(board[tr][j + 1], *move) == 1) || (j - 2 == tc && canMove(board[tr][j + 1], *move) == 1))
					{
						move->from_loc.col = 'a' + j;
						return;
					}
				}
				else if (temp == 'r' || temp == 'R') // Calculating possible moves for Rooks
				{
					for (int k = j; k < 8; k++)
					{
						if (k == tc && canMove(board[tr][k], *move) == 1)
						{
							move->from_loc.col = 'a' + j;
							return;
						}
						else if (canMove(board[tr][k], *move) == 0 && k != j)
						{
							break;
						}
					}
					for (int k = j - 1; k >= 0; k--)
					{
						if (k == tc && canMove(board[tr][k], *move) == 1)
						{
							move->from_loc.col = 'a' + j;
							return;
						}
						else if (canMove(board[tr][k], *move) == 0)
						{
							break;
						}
					}
				}
				else if (temp == 'b' || temp == 'B') // Calculating possible moves for Bishops
				{
					for (int l = j; l < 8; l++)
					{
						if (l == tc && canMove(board[tr][l], *move) == 1)
						{
							move->from_loc.col = 'a' + j;
							return;
						}
						else if (canMove(board[tr][l], *move) == 0 && l != j)
						{
							break;
						}
					}
					for (int l = j - 1; l >= 0; l--)
					{
						if (l == tc && canMove(board[tr][l], *move) == 1)
						{
							move->from_loc.col = 'a' + l;
							return;
						}
						else if (canMove(board[tr][l], *move) == 0)
						{
							break;
						}
					}
				}
				else if (temp == 'q' || temp == 'Q') // Calculating possible moves for Queen
				{
					for (int k = j; k < 8; k++)
					{
						if (k == tc && canMove(board[tr][k], *move) == 1)
						{
							move->from_loc.col = 'a' + j;
							return;
						}
						else if (canMove(board[tr][k], *move) == 0 && k != j)
						{
							break;
						}
					}
					for (int k = j - 1; k >= 0; k--)
					{
						if (k == tc && canMove(board[tr][k], *move) == 1)
						{
							move->from_loc.col = 'a' + j;
							return;
						}
						else if (canMove(board[tr][k], *move) == 0)
						{
							break;
						}
					}
				}
			}
		}
	}
	else if (move->from_loc.row == -1) // When only from_loc.row is unknowm
	{
		cc = move->from_loc.col - 'a';

		for (int i = 0; i < 8; i++)
		{
			if (board[i][cc] == temp)
			{
				if (temp == 'p' || temp == 'P') // Calculating possible moves for Pawns
				{
					if (move->color == BLACK)
					{
						if (i + 1 == tr && canMove(board[i+1][tc], *move) == 1)
						{
							move->from_loc.row = 8 - i;
							return;
						}
						else if (i + 2 == tr && canMove(board[i + 2][tc], *move) == 1)
						{
							move->from_loc.row = 8 - i;
							return;
						}
					}
					else
					{
						if (i - 1 == tr && canMove(board[i - 1][tc], *move) == 1)
						{
							move->from_loc.row = 8 - i;
							return;
						}
						else if (i - 2 == tr && canMove(board[i - 2][tc], *move) == 1)
						{
							move->from_loc.row = 8 - i;
							return;
						}
					}
				}
				else if (temp == 'k' || temp == 'K') // Calculating possible moves for King
				{
					if ((i + 1 == tr && canMove(board[i + 1][tc], *move) == 1) || (i == tr && canMove(board[i][tc], *move) == 1) || (i - 1 == tr && canMove(board[i - 1][tc], *move) == 1))
					{
						move->from_loc.row = 8 - i;
						return;
					}
				}
				else if (temp == 'n' || temp == 'N') // Calculating possible moves for Knights
				{
					if ((i + 2 == tr && canMove(board[i + 2][tc], *move) == 1) || (i + 1 == tr && canMove(board[i + 1][tc], *move) == 1) || (i - 1 == tr && canMove(board[i - 1][tc], *move) == 1) || (i - 2 == tr && canMove(board[i - 2][tc], *move) == 1))
					{
						move->from_loc.row = 8 - i;
						return;
					}
				}
				else if (temp == 'r' || temp == 'R') // Calculating possible moves for Rooks
				{
					for (int k = i; k < 8; k++)
					{
						if (k == tr && canMove(board[k][tc], *move) == 1)
						{
							move->from_loc.row = 8 - i;
							return;
						}
						else if (canMove(board[k][tc], *move) == 0 && k != i)
						{
							break;
						}
					}
					for (int k = i - 1; k >= 0; k--)
					{
						if (k == tr && canMove(board[k][tc], *move) == 1)
						{
							move->from_loc.row = 8 - i;
							return;
						}
						else if (canMove(board[k][tc], *move) == 0)
						{
							break;
						}
					}
				}
				else if (temp == 'b' || temp == 'B') // Calculating possible moves for Bishops
				{
					for (int k = i; k < 8; k++)
					{
						if (k == tr && canMove(board[k][tc], *move) == 1)
						{
							move->from_loc.row = 8 - i;
							return;
						}
						else if (canMove(board[k][tc], *move) == 0 && k != i)
						{
							break;
						}
					}
					for (int k = i - 1; k >= 0; k--)
					{
						if (k == tr && canMove(board[k][tc], *move) == 1)
						{
							move->from_loc.row = 8 - i;
							return;
						}
						else if (canMove(board[k][tc], *move) == 0)
						{
							break;
						}
					}
				}
				else if (temp == 'q' || temp == 'Q')
				{
					for (int k = i; k < 8; k++)
					{
						if (k == tr && canMove(board[k][tc], *move) == 1)
						{
							move->from_loc.row = 8 - i;
							return;
						}
						else if (canMove(board[k][tc], *move) == 0 && k != i)
						{
							break;
						}
					}
					for (int k = i - 1; k >= 0; k--)
					{
						if (k == tr && canMove(board[k][tc], *move) == 1)
						{
							move->from_loc.row = 8 - i;
							return;
						}
						else if (canMove(board[k][tc], *move) == 0)
						{
							break;
						}
					}
				}
			}
		}
	}
}

void movePiece(char **board, Move *move)
{
	if (move->from_loc.col == 'x' || move->from_loc.row == -1)
	{
		findFromLoc(board, move);
	}

	int cc, cr, tc, tr;

	cc = move->from_loc.col - 'a';
	cr = 8 - move->from_loc.row;
	tc = move->to_loc.col - 'a';
	tr = 8 - move->to_loc.row;

	board[cr][cc] = ' ';

	if (move->color == WHITE)
	{
		board[tr][tc] = tolower(move->piece);
	}
	else
	{
		board[tr][tc] = move->piece;
	}
}

char **playTheGame(Game *g)
{
	char **board = createChessBoard();

	printChessBoard(board);

	Move wMove, bMove;

	for (int i = 0; i < g->numMoves; i++)
	{
		parseNotationString(g->moves[i], &wMove, &bMove);

		movePiece(board, &wMove);
		printChessBoard(board);

		movePiece(board, &bMove);
		printChessBoard(board);
	}

	return board;
}

double difficultyRating(void)
{
	return 4.0;
}

double hoursSpent(void)
{
	return 96.0;
}
