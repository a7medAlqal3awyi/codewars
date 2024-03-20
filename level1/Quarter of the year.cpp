// Given a month as an integer from 1 to 12, return to which quarter of the year it belongs as an integer number.

// For example: month 2 (February), is part of the first quarter; month 6 (June), is part of the second quarter; and month 11 (November), is part of the fourth quarter.

// My solution

int quarter_of(int month)
{
    if (month == 1 || month == 2 || month == 3)
    {
        return 1;
    }
    else if (month == 4 || month == 5 || month == 6)
    {

        return 2;
    }
    else if (month == 7 || month == 8 || month == 9)
    {

        return 3;
    }
    else
        return 4;

    return 0;
}

// Other solution
int quarter_of(int month)
{
    return month <= 3 ? 1 : month <= 6 ? 2
                        : month <= 9   ? 3
                                       : 4;
}

int quarter_of(int month)
{

    switch (month)
    {
    case 1:
    case 2:
    case 3:

        return 1;
        break;

    case 4:
    case 5:
    case 6:

        return 2;
        break;

    case 7:
    case 8:
    case 9:

        return 3;
        break;

    default:
        return 4;
    }

    return 0;
}

int quarter_of(int m)
{
    if (m < 4)
        return 1;
    if (m < 7)
        return 2;
    if (m < 10)
        return 3;
    else
        return 4;
}