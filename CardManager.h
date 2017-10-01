#ifndef CARDMANAGER_H
#define CARDMANAGER_H

using namespace std;

class CardManager{
    public:
        string method, sorting;
        CardManager();
        void insertionSort();
        void mergeSort();
};

CardManager::CardManager(){
    this->method = "";
    this->sorting = "";
}

void CardManager::insertionSort(){
    cout << "insertion sort" << endl;
}

void CardManager::mergeSort(){
    cout << "merge sort" << endl;
}

#endif // CARDMANAGER_H
