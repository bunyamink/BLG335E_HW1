#ifndef CARDMANAGER_H
#define CARDMANAGER_H

#include <iostream>
#include <string>

using namespace std;

class CardManager{
    public:
        string method, sorting;
        CardManager();
        void insertionSort(int, int, string*, string*, string*, string*, string*, string*);
        void mergeSort();
};

CardManager::CardManager(){
    this->method = "";
    this->sorting = "";
}

void CardManager::insertionSort(int numOfElements, int sorted, string* names, string* classes, string* rarities, string* sets, string* types, string* costs){
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

        if(sorted == 1){
            while(j >= 0 && names[j] > key1){
                names[j+1] = names[j];
                classes[j+1] = classes[j];
                rarities[j+1] = rarities[j];
                sets[j+1] = sets[j];
                types[j+1] = types[j];
                costs[j+1] = costs[j];
                j = j - 1;
            }

        }else if(sorted == 2){
            while(j >= 0 && classes[j] > key2){
                names[j+1] = names[j];
                classes[j+1] = classes[j];
                rarities[j+1] = rarities[j];
                sets[j+1] = sets[j];
                types[j+1] = types[j];
                costs[j+1] = costs[j];
                j = j - 1;
            }
        }else if(sorted == 3){
            while(j >= 0 && rarities[j] > key3){
                names[j+1] = names[j];
                classes[j+1] = classes[j];
                rarities[j+1] = rarities[j];
                sets[j+1] = sets[j];
                types[j+1] = types[j];
                costs[j+1] = costs[j];
                j = j - 1;
            }
        }else if(sorted == 4){
            while(j >= 0 && sets[j] > key4){
                names[j+1] = names[j];
                classes[j+1] = classes[j];
                rarities[j+1] = rarities[j];
                sets[j+1] = sets[j];
                types[j+1] = types[j];
                costs[j+1] = costs[j];
                j = j - 1;
            }
        }else if(sorted == 5){
            while(j >= 0 && types[j] > key5){
                names[j+1] = names[j];
                classes[j+1] = classes[j];
                rarities[j+1] = rarities[j];
                sets[j+1] = sets[j];
                types[j+1] = types[j];
                costs[j+1] = costs[j];
                j = j - 1;
            }
        }else{
            while(j >= 0 && costs[j] > key6){
                names[j+1] = names[j];
                classes[j+1] = classes[j];
                rarities[j+1] = rarities[j];
                sets[j+1] = sets[j];
                types[j+1] = types[j];
                costs[j+1] = costs[j];
                j = j - 1;
            }
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

void CardManager::mergeSort(){
    cout << "merge sort" << endl;
}

#endif // CARDMANAGER_H
