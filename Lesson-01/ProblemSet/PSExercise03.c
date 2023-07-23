// Write a C program that calculates the quantity of
// tiles needed to cover a wall surface. The program
// should prompt the user to enter the height and width
// of the wall in meters, as well as the height and
// width of the tile in centimeters. Calculate the area
// of the wall and the area of a single tile. Then,
// calculate the number of tiles required to cover the
// entire wall surface and display the result.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float wall_height, wall_width, tile_height, tile_width, wall_area, tile_area, tile_area_in_m2;

	int required_tiles;

	printf("Enter the height of the wall (m): ");
	scanf("%f", &wall_height);

	printf("Enter the width of the wall (m): ");
	scanf("%f", &wall_width);

	printf("Enter the height of the tile (cm): ");
	scanf("%f", &tile_height);

	printf("Enter the width of the tile (cm): ");
	scanf("%f", &tile_width);

	wall_area = wall_height * wall_width;
	tile_area = tile_height * tile_width;
	tile_area_in_m2 = tile_area / 10000;
	required_tiles = ceil(wall_area / tile_area_in_m2);

	printf("The quantity of tiles needed is: %i\n", required_tiles);
	getch();
	return 0;
}
