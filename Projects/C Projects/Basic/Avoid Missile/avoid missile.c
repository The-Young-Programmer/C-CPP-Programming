//Arcade Spaceship Game
 /*
 * © 2021 Junwoo Yeom 
 * © 2022 Nemonet TYP
 */
 #define MAX_COL 120
 #define MAX_ROW 30
 #include <Windows.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include <math.h>
 #include <conio.h>
 struct Ship_Location {//player
 int health; // current health
 int x;
 int y;
 }ship;

 const int max_health = 3;
 int score = 0; // current score
 int max_score = 0;//highest score
 int** background; // save object position obstacle item
 int bottom_size = 5;//Size occupied by the bottom display window
 int level = 1; // level

 int bottom_explain = 0; //temp variable

 void init(); //initialization function
 void gotoxy(int x, int y); // function to move coordinates
 void color(int code);//color change function

 void ship_move(); // make the player ship move
 void obstacle(int difficulty); //Function to save the missile's position
 void cure(int dif); // Function to store the health recovery item position
 void object_down(); //Function to move missiles and items
 void print_game(); // Function to print the game screen
 void bottom(); // Function to display bottom health, score, and highest score

 void clearbottom();
 void reset_arr_1(int* arr, int size, int value);//1 dimensional array initialization function
 void reset_arr_2(int** arr, int row, int column, int value); // 2D array initialization function
 void print_arr(); // function for debug
 int gameover(); // screen when game is over
 void load(); //Load the all-time high score
 void save(); // Save the highest score
 void mainmenu(); // main menu function

 int main(void) {
 int delay = 20;
 mainmenu();
 do {//do ~ while statement to confirm whether to continue the game
 init(); // initial setting
 delay = 20;
 while (ship.health >= 1) {

 ship_move(); // move the ship

 obstacle(level);//assign and move
 cure(2);
 object_down();

 print_game();
 score++;
 level = score / 100 + 1; // Level related expressions so that every 100 points rise by one level

 {
 if (score >= max_score) {//specify max score
 max_score = score;
 }
 if (20 - score / 100 > 0) { // Decrease the delay
 delay = 20 - score / 100;
 }
 else { // If less than 0, change to delay 1
 delay = 1;
 }
 Sleep(delay); // speed control
 }
 }
 save();
 system("cls");
 } while (gameover() == 1);

 return 0;
 }

 void mainmenu() {
 system("mode con:cols=100 lines=20");
 system("title main menu");
 gotoxy(50 - 13, 15);
 color(7);
 printf("Press any key to start the game");
 while (1) {
 gotoxy(50 - 10, MAX_ROW / 2 - 9);
 color(14);
 printf("★Dodge Missile★\n");

 Sleep(100);
 color(3);
 gotoxy(50 - 10, MAX_ROW / 2 - 9);
 printf("★Dodge Missile★\n");
 Sleep(100);
 if (_kbhit()) break; //check if key is pressed
 }
 }

 void init() {
 load(); //Load the highest score
 score = 0; // Initialize score
 srand(time(NULL)); // set random seed according to time
 background = (int**)malloc(sizeof(int*) * MAX_ROW);//background row (save objects in the background except player spaceship)
 for (int i = 0; i < MAX_ROW; i++) {
 background[i] = (int*)malloc(sizeof(int) * MAX_COL); // background column
 }

 ship.health = max_health;//set the ship's initial health
 reset_arr_2(background, MAX_ROW, MAX_COL, 0); // reset to 0
 ship.x = (MAX_COL - bottom_size) / 2; // Initial x-coordinate of the ship
 ship.y = MAX_ROW / 2;//Set the initial y-coordinate of the ship

 char* temp[30];
 sprintf_s(temp, sizeof(temp), "mode con:cols=%d lines=%d", MAX_COL, MAX_ROW); // Function to print string format
 system(temp);//Set window size
 system("title avoid missile");


 gotoxy(0, MAX_ROW - 5);//underscore
 color(7);
 for (int i = 0; i < MAX_COL; i++) {
 printf("─");
 }
 bottom();
 clearbottom();
 }
 void ship_move() {
 if (GetAsyncKeyState(VK_LEFT) || GetAsyncKeyState(0x41)) { // left or a key
 if (ship.x > 0) {
 gotoxy(ship.x, ship.y);
 printf(" ");//Delete the previous afterimage
 ship.x--;//move to the left

 }
 }
 if (GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState(0x44)) { // right or d key
 if (ship.x < MAX_COL - 1) {
 gotoxy(ship.x, ship.y);
 printf(" ");
 ship.x++;
 }
 }
 if (GetAsyncKeyState(VK_UP) || GetAsyncKeyState(0x57)) { // up or w key
 if (ship.y > 1) {
 gotoxy(ship.x, ship.y);
 printf(" ");
 ship.y--;
 }
 }
 if (GetAsyncKeyState(VK_DOWN) || GetAsyncKeyState(0x53)) { // up or s-key
 if (ship.y < MAX_ROW - bottom_size - 1) {
 gotoxy(ship.x, ship.y);
 printf(" ");//Clear previous afterimage
 ship.y++;
 }
 }
 gotoxy(ship.x, ship.y);
 color(11);
 printf("A");
 color(7);
 }

 void obstacle(int dif) {
 if (100 / dif > 0) { // Since it is not divisible by 0
 if (score % (100 / dif) == 0) { // more and more obstacles
 background[0][ship.x] = -1; // an obstacle that reduces health by -1
 }
 }
 else {
 background[0][ship.x] = -1;
 }
 }
 void cure(int dif) {
 static int prv_dif = 0; // keep the original shape even when the function is off
 int random = 0; // obstacle location
 if (level != prv_dif) {//every time the level changes
 for (int i = 0; i < dif; i++) {
 random = rand() % MAX_COL;
 if (background[0][random] == 0) {
 background[0][random] = 1; // cure
 }
 else i--;
 }
 }
 prv_dif = level;
 }
 void object_down() {

 /* Problem occurs when moving from row to column
 If you read one line and go down, the object will be on the next line as well.
 By the time the for statement is finished, it will eventually go down all at once.
 */

 // So, use the method of descending one row at a time
 int* temp;
 for (int i = MAX_ROW - 1; i >= 1; i--) { // all background objects down
 reset_arr_1(background[MAX_ROW - 1], MAX_COL, 0); // Initialize the last line to 0
 temp = background[i ​​- 1];
 background[i ​​- 1] = background[i];
 background[i] = temp;
 }

 if (background[ship.y][ship.x] != 0) {//if missile and ship collide or eat health recovery item
 gotoxy(ship.x, ship.y - 1);//Go to the y-coordinate one space above and delete the missile
 printf(" ");

 ship.health += background[ship.y][ship.x];//Recover health or take damage.
 background[ship.y][ship.x] = 0;//Delete the object at that location from the array.
 }

 }

 void print_game() {
 gotoxy(0, 0); // move to position 0, 0
 for (int i = 0; i < MAX_ROW - bottom_size; i++) {
 for (int j = 0; j < MAX_COL; j++) {
 if (background[i][j] < 0) {/missile if less than 0 heal if greater than 0
 if (i - 1 >= 0 && background[i ​​- 1][j] == 0) {
 gotoxy(j, i - 1);
 printf(" ");//Delete the previous position of the missile
 }
 gotoxy(j, i);
 printf("M");//missile
 if (i == MAX_ROW - bottom_size - 1) { // also clear from the bottom
 gotoxy(j, i);
 printf(" ");//delete previous position of missile
 }

 }
 else if (background[i][j] > 0) {
 if (i - 1 >= 0 && background[i ​​- 1][j] == 0) {
 gotoxy(j, i - 1);
 printf(" "); // delete previous position
 }
 gotoxy(j, i);
 color(12);
 printf("+");//HealPack
 color(7);
 if (i == MAX_ROW - bottom_size - 1) { // also clear from the bottom
 gotoxy(j, i);
 printf(" ");//Delete previous missile position
 }
 }
 }
 }

 bottom();
 }
 void bottom() {
 static int prev_health = 0; // place to store previous health
 static int prev_level = 0;

 if (prev_health != ship.health) {// Only when health information is updated, delete the display at the bottom and update
 clearbottom();
 }prev_health = ship.health;

 if (prev_level != level) {//only when the level information is updated
 gotoxy(0, MAX_ROW - 4);
 printf("level %d", level);
 }

 if (bottom_explain <= 1) {
 printf(" (Move with the arrow keys, avoid the white color. Red is the healing potion.)");
 }bottom_explain++;


 gotoxy(0, MAX_ROW - 2);
 printf("Health: ");
 color(4); // dark red
 for (int i = 0; i < ship.health; i++) {
 printf("♥");
 }
 for (int i = 0; i < max_health - ship.health; i++) {
 printf("♡");
 }


 color(7); // white
 int a = 0;
 if (ship.health - max_health > 0) {
 a = ship.health - max_health;
 }
 else a = 0;
 gotoxy(20 + a * 2, MAX_ROW - 2);
 printf("Score: ");
 color(14); // light yellow
 printf("%d", score);

 gotoxy(40 + a * 2, MAX_ROW - 2);
 color(7); // white
 printf("Highest score: ");
 color(14); // light yellow

 printf("%d", max_score);
 color(7); // white


 }

 int gameover() {
 int i = 0;
 while (1) {
 color(12);
 printf(" _____ _____ _\n");
 printf("| __ \\ | _ | | |\n");
 printf("| | \\/ __ _ _ __ ___ ___ | | |__ __ ___ _ __ | |\n");
 printf("| | __ / _` || '_ ` _ \\ / _ \\ | | |\\ \\ / / / _ \\| '__| | |\n");
 printf("| |_\\ \\| (_| || | | | | | __/ \\ \\_/ / \\ V / | __/| | |_|\n");
 printf(" \\____/ \\__,_||_| |_| |_| \\___| \\___/ \\_/ \\___||_| (_)\n");
 printf("\n");
 color(7);
 printf("Current score: ");
 color(14);
 printf("%d\n", score);
 color(7);
 printf("Highest score: ");
 color(14);
 printf("%d\n", max_score);
 color(7);

 printf("\nDo you want to do this again?\n");
 printf("1. Yes\n");
 printf("2. no\n");
 system("pause");
 printf("\nInput:");

 if (scanf_s("%d", &i) == 0) {
 rewind(stdin);
 i = 0;
 printf("Character input is not allowed.\n");
 Sleep(1000);
 }
 else if (!(i >= 1 && i <= 2)) { // If any number other than 1 and 2
 i = 0;
 printf("Please enter a number between 1 and 2.\n");
 Sleep(1000);
 }
 else {
 break;
 }
 system("cls");
 }
 return i;
 }


 void color(int code) {
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), code); // Function defined in windows.h, standard output handle, set color to number
 }
 void gotoxy(int x, int y) {
 COORD Pos; // Coordinate structure
 Pos.X = x;
 Pos.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos); // Function defined in windows.h, standard output handle, coordinates as a structure
 }

 void clearbottom() {
 gotoxy(0, MAX_ROW - 4);
 for (int i = 0; i < MAX_COL; i++) {
 printf(" ");
 }
 gotoxy(0, MAX_ROW - 2);
 for (int i = 0; i < MAX_COL; i++) {
 printf(" ");
 }
 }
 void reset_arr_2(int** arr, int row, int column, int value) {
 for (int i = 0; i < row; i++) {
 for (int j = 0; j < column; j++) {
 arr[i][j] = value;
 }
 }
 }
 void reset_arr_1(int* arr, int size, int value) {
 for (int i = 0; i < size; i++) {
 arr[i] = value;
 }
 }
 void load() {
 FILE* fp;
 fopen_s(&fp, ".Game_Info.txt", "a+");//read and append mode
 if (fp != NULL) {
 fscanf_s(fp, "%d", &max_score);
 fclose(fp);
 }
 else printf("\nFailed to read file\n");
 }
 void save() {
 FILE* fp;
 fopen_s(&fp, ".Game_Info.txt", "w");
 if (fp != NULL) {
 fprintf(fp, "%d\n", max_score); // Save the highest score
 fclose(fp);
 }
 else printf("\nFailed to write file\n");
 }
 void print_arr() {//for debug
 printf("--------------------------------------");
 for (int i = 0; i < MAX_ROW; i++) {
 for (int j = 0; j < MAX_COL; j++) {
 if (background[i][j] != 0) {
 printf("%d", background[i][j]);
 }
 else {
 printf(" ");
 }
 }
 printf("\n");
 }
 }
