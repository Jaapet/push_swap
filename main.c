#include "push.c"
#include "swap.c"
#include "push_swap.h"
#include <stdio.h>
int main(void)
{
	int *a;

	a = malloc(sizeof(int) * 5);

	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;

	pile pile_a;
	pile pile_b;

	pile_a.pile = a;
	pile_a.size = 5;
	pile_b.size = 0;

	printf("a : {%d, %d, %d, %d, %d}\n", pile_a.pile[0], pile_a.pile[1], pile_a.pile[2], pile_a.pile[3], pile_a.pile[4]);
	int **ret;
	ret = push(pile_a, pile_b);
	pile_a.pile = ret[0];
	pile_b.pile = ret[1];
	printf("a : {%d, %d, %d, %d, %d} / size : %d\n", pile_a.pile[0], pile_a.pile[1], pile_a.pile[2], pile_a.pile[3], pile_a.pile[4], pile_a.size);
	printf("b : {%d, %d, %d, %d, %d} / size : %d\n", pile_b.pile[0], pile_b.pile[1], pile_b.pile[2], pile_b.pile[3], pile_b.pile[4], pile_b.size);
	swap(pile_a);
	printf("a : {%d, %d, %d, %d, %d} / size : %d\n", pile_a.pile[0], pile_a.pile[1], pile_a.pile[2], pile_a.pile[3], pile_a.pile[4], pile_a.size);
	ret = push(pile_a, pile_b);
	pile_a.pile = ret[0];
	pile_b.pile = ret[1];
	printf("a : {%d, %d, %d, %d, %d} / size : %d\n", pile_a.pile[0], pile_a.pile[1], pile_a.pile[2], pile_a.pile[3], pile_a.pile[4], pile_a.size);
	printf("b : {%d, %d, %d, %d, %d} / size : %d\n", pile_b.pile[0], pile_b.pile[1], pile_b.pile[2], pile_b.pile[3], pile_b.pile[4], pile_b.size);
}