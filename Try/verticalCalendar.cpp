#include <iostream>
using namespace std;

int main() {
    int start_day = 1;

    for (int m = 1; m <= 12; m++) {
        int day = 1;
        int count_full_rows = 0;

        cout << endl;

        switch(m) { 
            case 1: cout << "     January      "; break;
            case 2: cout << "     February      "; break;
            case 3: cout << "     March      "; break;
            case 4: cout << "     April      "; break;
            case 5: cout << "     May      "; break;
            case 6: cout << "     June      "; break;
            case 7: cout << "     July      "; break;
            case 8: cout << "     August      "; break;
            case 9: cout << "     September      "; break;
            case 10: cout << "    October      "; break;
            case 11: cout << "    November      "; break;
            case 12: cout << "    December      "; break;
        }
        cout << endl;
        cout << "----------------";
        cout << endl;

        for (int i = 1; i <= 7; i++) {
            int day_of_week = day;
            int remaining_days = 8 - start_day + 1;
            if (start_day == 1) { // if the calendar starts from Monday itself, then print it normally.
                int count = 0;
                while (day_of_week < 31) {
                    if (day_of_week < 10) {
                        cout << " " << day_of_week << " ";
                        day_of_week += 7;
                        count++;
                    } else {
                        cout << day_of_week << " ";
                        day_of_week += 7;
                        count++;
                    }

                }

                if (count == 5) {
                    count_full_rows++;
                } 

                cout << endl;
            } else {
                int count = 0;
                int remain = remaining_days;
                for (int j = 1; j <= 5; j++) {

                    if (remaining_days > 31) {
                        break;
                    }

                    if (i < start_day) {
                        if (j == 1) {
                            cout << " " << " " << " ";
                            count++;
                        } else {
                            if (remain < 10) {
                                cout << " " << remain << " ";
                                remain += 7;
                                count++;
                            } else {
                                cout << remain << " ";
                                remain += 7;
                                count++;
                            }

                            count++;
                        }
                    } else {
                        if (day_of_week > 31) {
                            break;
                        }
                        if (day_of_week < 10) {
                            cout << " " << day_of_week << " ";
                            day_of_week += 7;
                            count++;
                        } else {
                            cout << day_of_week << " ";
                            day_of_week += 7;
                            count++;
                        }
                    }
                }

                cout << endl;
            }

            if (i >= start_day) {
                day++;
            } else {
                remaining_days++;
            }
        }

        if (count_full_rows < 7)
            start_day = count_full_rows + 1;
        else
            start_day = 1;
    }

}