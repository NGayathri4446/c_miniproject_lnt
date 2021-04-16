#include "prototypes.h"

int isValidDate(Date *validDate)
{
    int validate=1;
    //check range of year,month and day
    if (validDate->yyyy > MAX_YR ||
            validDate->yyyy < MIN_YR)
            {
                validate=0;
            }
        return validate;
    if (validDate->mm < 1 || validDate->mm > 12)
    {
        validate=0;
    }
        return validate ;
    if (validDate->dd < 1 || validDate->dd > 31)
    {
        validate=0;
    }
        return validate;
    //Handle feb days in leap year
    if (validDate->mm == 2)
    {
        if (IsLeapYear(validDate->yyyy))
            return (validDate->dd <= 29);
        else
            return (validDate->dd <= 28);
    }
    //handle months which has only 30 days
    if (validDate->mm == 4 || validDate->mm == 6 ||
            validDate->mm == 9 || validDate->mm == 11)
        return (validDate->dd <= 30);
    return validate;
}