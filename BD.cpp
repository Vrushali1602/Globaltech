#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct Birthday {
    string name;
    int month;
    int day;
};


class BirthdayList {
private:
    vector<Birthday> birthdays;
public:
   
    void addBirthday(string name, int month, int day) {
        Birthday newBirthday;
        newBirthday.name = name;
        newBirthday.month = month;
        newBirthday.day = day;
        birthdays.push_back(newBirthday);
    }

    void displayBirthdays() {
        cout << "Birthday List:" << endl;
        for (int i = 0; i < birthdays.size(); i++) {
            cout << birthdays[i].name << " - " << birthdays[i].month << "/" << birthdays[i].day << endl;
        }
    }

    
    void searchBirthdays(int month) {
        cout << "Birthdays in month " << month << ":" << endl;
        for (int i = 0; i < birthdays.size(); i++) {
            if (birthdays[i].month == month) {
                cout << birthdays[i].name << " - " << birthdays[i].month << "/" << birthdays[i].day << endl;
            }
        }
    }
};

int main() {
   
    BirthdayList birthdayList;

    birthdayList.addBirthday("Vrushali", 16, 02);
    birthdayList.addBirthday("Rupali", 24, 8);
    birthdayList.addBirthday("Mohini", 02, 04);
    birthdayList.addBirthday("Vaishnavi", 30, 04);
    birthdayList.addBirthday("Khushi", 21,8);

    birthdayList.displayBirthdays();

    
    birthdayList.searchBirthdays(9);

    return 0;
}
