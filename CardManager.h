#ifndef CARDMANAGER_H
#define CARDMANAGER_H

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class CardManager{
    public:
        string method, sorting;
        CardManager();
        void insertionSortFilter(int, int, string*, string*, string*, string*, string*, string*);
        void insertionSortFull(int, int, string*, string*, string*, string*, string*, string*);
        void mergeSort();
        void filterSort();
        void fullSort();
};

CardManager::CardManager(){
    this->method = "";
    this->sorting = "";
}

void CardManager::filterSort(){

}

void CardManager::fullSort(){

}

void CardManager::insertionSortFilter(int numOfElements, int sorted, string* names, string* classes, string* rarities, string* sets, string* types, string* costs){
    int j = 0;
    string key1 = "";
    string key2 = "";
    string key3 = "";
    string key4 = "";
    string key5 = "";
    string key6 = "";

    for(int i = 1; i < numOfElements; i++){
        key1 = names[i];
        key2 = classes[i];
        key3 = rarities[i];
        key4 = sets[i];
        key5 = types[i];
        key6 = costs[i];
        j = i - 1;

        while(j >= 0 && types[j] > key5){
            names[j+1] = names[j];
            classes[j+1] = classes[j];
            rarities[j+1] = rarities[j];
            sets[j+1] = sets[j];
            types[j+1] = types[j];
            costs[j+1] = costs[j];
            j = j - 1;
        }

        names[j+1] = key1;
        classes[j+1] = key2;
        rarities[j+1] = key3;
        sets[j+1] = key4;
        types[j+1] = key5;
        costs[j+1] = key6;
    }

    cout << "insertion sort finished." << endl;
}

void CardManager::insertionSortFull(int numOfElements, int sorted, string* names, string* classes, string* rarities, string* sets, string* types, string* costs){
    int j = 0;
    string key1 = "";
    string key2 = "";
    string key3 = "";
    string key4 = "";
    string key5 = "";
    string key6 = "";

    for(int i = 1; i < numOfElements; i++){
        key1 = names[i];
        key2 = classes[i];
        key3 = rarities[i];
        key4 = sets[i];
        key5 = types[i];
        key6 = costs[i];
        j = i - 1;

        while( (j >= 0) && ((classes[j] > key2) || ((classes[j] == key2) && (costs[j] > key6)) || ((classes[j] == key2) && (costs[j] == key6) && (names[j] > key1)))){

            names[j+1] = names[j];
            classes[j+1] = classes[j];
            rarities[j+1] = rarities[j];
            sets[j+1] = sets[j];
            types[j+1] = types[j];
            costs[j+1] = costs[j];
            j = j - 1;
        }

        names[j+1] = key1;
        classes[j+1] = key2;
        rarities[j+1] = key3;
        sets[j+1] = key4;
        types[j+1] = key5;
        costs[j+1] = key6;
    }
}

void CardManager::mergeSort(){
    cout << "merge sort" << endl;
}

#endif // CARDMANAGER_H
