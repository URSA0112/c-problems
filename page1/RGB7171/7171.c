#include <stdio.h>

int try1()
{
    int orts, davhar, dugaar, toot;
    int myOrts, myDavhar, myDugaar;
    scanf("%d %d %d %d", &davhar, &orts, &dugaar, &toot);

    myOrts = (toot - 1) / (davhar * dugaar) + 1;
    myDavhar = (((toot - 1) - ((myOrts - 1) * (davhar * dugaar))) / dugaar) + 1;
    if (toot % dugaar == 0)
        myDugaar = dugaar;
    else
        myDugaar = toot % dugaar;
    printf("%d toot -> %d -r ortsni %d -r davhariin %d dugaar haalgand baina", toot, myOrts, myDavhar, myDugaar);
}

int main()
{
    try1();
}
