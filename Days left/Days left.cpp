#include <bits/stdc++.h>
using namespace std;

int main() {

	time_t now, target;
	struct tm tm_now, tm_target;
	time(&now);

	cout << "Enter the target date (YYYY-MM-DD): ";
	string target_date;
	cin >> target_date;

	tm_target.tm_year = stoi(target_date.substr(0, 4)) - 1900;
	tm_target.tm_mon = stoi(target_date.substr(5, 2)) - 1;
	tm_target.tm_mday = stoi(target_date.substr(8, 2));
	tm_target.tm_hour = 0;
	tm_target.tm_min = 0;
	tm_target.tm_sec = 0;

	target = mktime(&tm_target);

	int days = (target - now) / (24 * 60 * 60);
	int hours = (target - now) % (24 * 60 * 60) / (60 * 60);

	cout << "Number of days remaining: " << days << " days left ya  " << endl;
	cout << "Number of hours remaining: " << hours << " Hour left ya " << endl;

}
