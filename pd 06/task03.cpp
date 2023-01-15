#include <iostream>

using namespace std;

int main()
{
    int date;
    string month;
    
    cout << "Enter your day of birth and month of birth: ";
    cin >> date >> month;

    if((month == "march" && (date >= 21 || date <= 31)) || (month == "april" && (date >= 1 || date <= 19)) )
    {
        cout << "Zodiac sign: Aries" << endl << "Symbol: The Ram";
    }
    else if((month == "april" && (date >= 20 || date <= 30)) || (month == "may" && (date >= 1 || date <= 20)) )
    {
        cout << "Zodiac sign: Tuarus" << endl << "Symbol: The Bull";
    }
    else if((month == "may" && (date >= 21 || date <= 31)) || (month == "june" && (date >= 1 || date <= 20)) )
    {
        cout << "Zodiac sign: Gemini" << endl << "Symbol: The Twins";
    }
    else if((month == "june" && (date >= 21 || date <= 30)) || (month == "july" && (date >= 1 || date <= 22)) )
    {
        cout << "Zodiac sign: Cancer" << endl << "Symbol: The Crab";
    }
    else if((month == "july" && (date >= 23 || date <= 31)) || (month == "august" && (date >= 1 || date <= 22)))
    {
        cout << "Zodiac sign: Leo" << endl << "Symbol: The Lion";
    }
    else if((month == "august" && (date >= 23 || date <= 31)) || (month == "september" && (date >= 1 || date <= 22)) )
    {
        cout << "Zodiac sign: Virgo" << endl << "Symbol: The Virgin";
    }
    else if((month == "september" && (date >= 23 || date <= 30)) || (month == "october" && (date >= 1 || date <= 22)) )
    {
        cout << "Zodiac sign: Libra" << endl << "Symbol: The scales ";
    }
    else if((month == "october" && (date >= 23 || date <= 31)) || (month == "november" && (date >= 1 || date <= 21)) )
    {
        cout << "Zodiac sign: scorpio" << endl << "Symbol: The Scorpian";
    }
    else if((month == "november" && (date >= 22 || date <= 30)) || (month == "december" && (date >= 1 || date <= 21)) )
    {
        cout << "Zodiac sign: Saggittarius" << endl << "Symbol: The Archer";
    }
    else if((month == "december" && (date >= 22 || date <= 31)) || (month == "january" && (date >= 1 || date <= 19)) )
    {
        cout << "Zodiac sign: Capricon" << endl << "Symbol: The Goat";
    }
    else if((month == "january" && (date >= 20 || date <= 31)) || (month == "february" && (date >= 1 || date <= 18)) )
    {
        cout << "Zodiac sign: Aquarius" << endl << "Symbol: The Water Bearer";
    }
    else if((month == "february" && (date >= 19 || date <= 29)) || (month == "march" && (date >= 1 || date <= 22)) )
    {
        cout << "Zodiac sign: Pisces" << endl << "Symbol: The Fishes";
    }
}    

