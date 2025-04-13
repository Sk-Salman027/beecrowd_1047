#include <stdio.h>

int main()
{
    // variable declaration
    int initialHours, initialMinutes, finalHours, finalMinutes;
    int gameStartMinutes, gameEndMinutes, oneDayMinutes, duration;
    // take input
    scanf("%d %d %d %d", &initialHours, &initialMinutes, &finalHours, &finalMinutes);
    // convert time into minutes
    gameStartMinutes = (initialHours * 60) + initialMinutes;
    gameEndMinutes = (finalHours * 60) + finalMinutes;
    oneDayMinutes = (24 * 60);
    // check condition
    if (gameStartMinutes < gameEndMinutes)
    {
        duration = gameEndMinutes - gameStartMinutes;
    }
    else
    {
        duration = (oneDayMinutes - gameStartMinutes) + gameEndMinutes;
    }
    // pirnt the result
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration / 60, duration % 60);
    return 0;
}