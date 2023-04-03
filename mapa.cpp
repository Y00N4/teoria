#include<iostream>
#include<map>
#include<vector>

using namespace std;

struct ble {
    int a;
    int b;
    string blee;
    friend ostream& operator<<(ostream& os, const ble& ble);
};

ostream& operator<<(ostream& os, const ble& ble)
{
    os << ble.a << "-" << ble.b << "-" << ble.blee;
    return os;
}



void mapsIntroduction()
{
    map<char, string> nameMap{ {'Z', "Zuzia"}, { 'D', "Damian" } };

    nameMap.insert(pair<char, string> {'A', "Agnieszka"});
    nameMap.insert(make_pair('A', "Agnieszka"));
    nameMap['K'] = "Krzysztof";
    nameMap.insert({ 'R', "Rekin" });

    for (pair<char, string> el : nameMap)
    {
        cout << el.first << ": " << el.second << endl;
    }

    for (auto el : nameMap)
    {
        cout << el.first << ": " << el.second << endl;
    }

    cout << "\n\n";

    nameMap.insert(pair<char, string> {'A', "Aga"});
    nameMap.insert({ 'R', "Rekinek" });

    for (pair<char, string> el : nameMap)
    {
        cout << el.first << ": " << el.second << endl;
    }

    cout << "\n\n";

    nameMap.insert_or_assign('A', "Aga");
    nameMap.insert_or_assign('R', "Rekinek");//podmienianie

    for (pair<char, string> el : nameMap)
    {
        cout << el.first << ": " << el.second << endl;
    }

    cout << "\n\n";

    cout << nameMap.size() << endl; //zwraca ilość el.
    cout << nameMap.empty() << endl; //0 - false 1 - true - bool czy mapa pusta

    //nameMap.emplace('I', "Ifif");//innyb sposob na dodawanie
    //nameMap.try_emplace('M', "Mis");// tu proba zamiany nie dziala 


    nameMap.erase('R');

    if (nameMap.find('P') != nameMap.end()) {
        cout << "Jest";
    }
    else
        cout << "Nie ma";

    cout << "\n";

    nameMap.clear();

    cout << "MAPA:\n";


    for (pair<char, string> el : nameMap)
    {
        cout << el.first << ": " << el.second << endl;
    }


    cout << endl << endl;
}
void advancedMaps() {
    map<int, pair<string, pair<ble, ble>>> mapka;

    ble ble1{ 1,1,"ble" }, ble2{ 2,2,"blee" }, ble3{ 3,3,"bleee" };



    mapka.insert({ 1, {"Zuzia",{ble1, ble2}} });
    mapka.insert({ 2, {"Zuzia",{ble3, ble2}} });
    mapka.insert({ 3, {"Zuzia",{ble1, ble3}} });

    for (auto el : mapka) {
        cout << el.first << ": " << el.second.first << " " << el.second.second.first << " " << el.second.second.second << endl;
    }
}


int main() {

    string slowo = "indywidualizacja";
    map<char, int> licznik;

    for (char lit : slowo) {
        if (licznik.find(lit) != licznik.end()) {
            licznik[lit]++;
        }
        else
            licznik.insert({lit, 1});
    }
    


    for (auto el : licznik) {
        cout << el.first << ": " << el.second << endl;
    }

// VECTOR

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // definicja wektora liczb całkowitych
    vector<int> v;

    // dodanie elementów do wektora
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // wyświetlenie elementów wektora
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}

