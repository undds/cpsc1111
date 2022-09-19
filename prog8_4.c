// Program to determine tomorrow's date

#include <stdio.h>
#include <stdbool.h>

struct  date {
    int  month;
    int  day;
    int  year;
};

// 1.  three prototypes here:





int main (void) {
	  // 2.  declare two struct objects called thisDay and nextDay



     printf ("Enter today's date (mm dd yyyy): ");
     scanf ("%i%i%i", &thisDay.month, &thisDay.day,
&thisDay.year);

	  // 3.  call dateUpdate() function sending to it thisDay and 
	  //     saving the return value into nextDay



     printf ("Tomorrow's date is %i/%i/%.2i.\n",nextDay.month,
                nextDay.day, nextDay.year % 100);

     return 0;
}


// Function to calculate tomorrow's date
/*
	name of function   dateUpdate
	inputs:  a date structure, parameter name  today
	output:  returns a date structure
*/
// 4.  function signature on next line:   


	 // 5.  declare a date structure called tomorrow



    if ( today.day != numberOfDays(today) ) {  // calls function
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if ( today.month == 12 )  {   // end of year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {                             // end of month
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    return tomorrow;
}


// Function to find the number of days in a month
/*  
	name of function   numberOfDays
	inputs:  a date structure, name of parameter   d
	output:  returns an integer
*/
// 6.  function signature on next line:


     int  days;
     const int  daysPerMonth[12] =
       { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

     if ( isLeapYear(d)   &&  d.month == 2 )   // calls function
         days = 29;
     else
         days = daysPerMonth[d.month - 1];

     return days;
}


// Function to determine if it's a leap year
/*
	name of function   isLeapYear
	inputs:  a date structure, name of parameter   d
	output:  returns a boolean  (bool)
*/
// 7.  function signature on next line:


	 // 8.  declare a bool variable called   leapYearFlag
   


    if ( (d.year % 4 == 0  &&  d.year % 100 != 0)  ||
                  d.year % 400 == 0 )
        leapYearFlag = true;   // It's a leap year
    else
        leapYearFlag = false;  // Not a leap year

    return leapYearFlag;
}

