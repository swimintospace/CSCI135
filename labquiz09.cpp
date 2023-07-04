#include <iostream>
using namespace std;

class Date {
    public:
        int year;
        int month;
        int day;
        string day_of_week;
};

void printDate(Date *input){
    cout << input->day_of_week << ", " << input->month << "/" << input-> day << "/" << input->year << " " << endl;
}

int main(){
    int uYear;
    int uMonth;
    int uDay;
    string uDay_of_week;
    cout << "Enter the Year, Month, and Day. Followed by the Day of the Week: ";
    cin >> uYear >> uMonth >> uDay >> uDay_of_week;

    Date uDate = {uYear, uMonth, uDay, uDay_of_week};
    printDate(&uDate);
}