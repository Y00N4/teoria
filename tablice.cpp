void ArraysIntroduction() {
        //Struktura danych - sposób przechowywania danych przez komputer np. tablica, lista, stos, kolejna, drzewo, graf... 
        //Tablica - struktuta danych przechowująca wiele wartości tego samego typu. Poszczególne elementy tablicy dostępne są za pomocą indeksu, czyli numeru danego elementu. Numerowanie rozpoczyna się od zera. 
        //Deklaracja tablicy wymaga: typu danych dla elementów któte będzie zawierać, nazwy tablicy, liczby elementów.
        int DniMiesiaca[12]; //<- Deklaracja - tworzymy tablicę typu int(przechowuje liczby typu int) o nazwie DniTygodnia oraz o wielkości 12 emlementów(od 0 do 11)
        //Przypisywanie wartości:
        DniMiesiaca[0] = 31;
        DniMiesiaca[1] = 28;
        //W ten sposób do danego indeksy przypisujemy odpowiednią wartość (typy muszą się zgadzać)
        //Aby wyświetlić dany element tablicy:
        cout << DniMiesiaca[1] << endl;
        cout << endl;
        //Innym sposobem jest przypisanie elementów od razu przy deklaracji tablicy
        float LosoweLiczby[5] = { 1.35, 17, 2.55, 2.77, 0.95}; //<- jak widać po symbolu przypisania (=) po kolei wypisujemy elementy tablicy wewnątrz nawiasów klamrowych. Separatorem jest przecinek.

        //Każdy wpisany element będzie po kolei przyjmował kolejne numery indeksów zaczynając od 0
        cout << LosoweLiczby[0] << endl;
        cout << LosoweLiczby[3] << endl;

        //Co się stanie jeśli będziemy chcieli wyświetlić element POZA tablicą, tzn. o indeksie większym niż wyznaczona maksymalna ilość elementów?
        //To:
        cout << LosoweLiczby[6] << endl;

        //A co się stanie jeśli będziemy chcieli wyświetlić element któremu nie przypisaliśmy wartości?
        cout << DniMiesiaca[8] << endl;
        cout << DniMiesiaca[9] << endl;
        cout << DniMiesiaca[10] << endl;
    }
