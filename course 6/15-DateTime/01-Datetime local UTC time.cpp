// I learned how to work with system time in C++ using the '<ctime>' library, capturing current calendar time via 'time(0)' and formatting it into readable strings as either local time using 'ctime()' or universal time using 'gmtime()' combined with 'asctime()'.
#pragma warning(disable : 4996)

#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	time_t t = time(0); //returns the current time (epoch time)
	char* times = ctime(&t); // converts time_t (seconds) into a readable string format 
	cout << "Local date and time is : " << times << endl;

	
	tm* gmtm = gmtime(&t); //converts time_t into a tm struct with UTC time (Greenwich Mean Time)
	times = asctime(gmtm); //converts a tm struct into a readable string format
	cout << "UTC date adn time is : " << times << endl;



	/*✨ The Summary ✨

		📌 This program shows how to work with system time in C++ using <ctime>.
		It displays the local time and the UTC(Coordinated Universal Time).


		📘 Step by Step Explanation :

	1️⃣ #pragma warning(disable : 4996)

		This line disables a compiler warning about using older C functions like ctime().

		4996 = the warning code in Visual Studio.

		It’s just to make the compiler “silent” for those functions.


		1️) time_t localtime = time(0);

	time_t → a data type for storing calendar time(number of seconds since 01 Jan 1970).

		time(0) → returns the current time(epoch time).

		Here we store it in localtime.





		2) char* dt = ctime(&localtime);

	ctime() = converts time_t(seconds) into a readable string format(like "Mon Oct 1 12:00:00 2025").

		Returns char* → pointer to a C - string.

		Example output : "Local date and time is: Wed Oct 01 10:30:12 2025"




		3️) tm * gmtm = gmtime(&localtime);

	gmtime() = converts time_t into a tm struct with UTC time(Greenwich Mean Time).

		tm = time structure(breaks time into year, month, day, hours, minutes, seconds, etc.).




		4️) dt = asctime(gmtm);

	asctime() = converts a tm struct into a readable string format.

		Here it prints the UTC(not the local time).






		🔑 Key Abbreviations Explained :

		tm → time structure(contains broken - down time parts).

		gmtime() → Greenwich Mean Time(UTC time).

		ctime() → Calendar Time to string.

		asctime() → ASCII Time(struct tm → string).

		time_t → time type(integer holding seconds since 1970).





		👉 باختصار :

		time() → gives current time in seconds.

		ctime() → convert it to local readable string.

		gmtime() + asctime() → convert it to UTC readable string.*/

}