/*
Chef has recently started playing chess.
He completes a game of chess in 30 minutes.
Chef has a total of
�
N minutes of available time

He will utilise the maximum possible time to play
He will not plan incomplete games - if there is insufficient time remaining to play a game, he will not play the game
How many complete games will Chef be able to play and how much spare time will remain?
Go ahead and code out the solution in the IDE.

Input Format
The first line of input will contain a single integer
�
T, denoting the number of test cases.
Each test case consists of the integer
�
N
Output Format
For each test case, output on a new line
2
2 space separated integers

Total games played by Chef
Total spare time in minutes
*/

#include <stdio.h>

int main() {
    int  N, total_games, remaining_time;

        scanf("%d", &N);
        total_games = N/30;
        remaining_time = N % 30;
        printf("%d %d\n", total_games, remaining_time);

    return 0;
}
