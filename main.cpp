#include <iostream>
#include <string>
#include <fstream>

#include "CardManager.h"

using namespace std;

int main()
{
    string method, sorting, input_file;
    method = "full";
    sorting = "i";
    input_file = "hs-set-10k.txt";

    fstream inputFile, outputFile;
    inputFile.open("files/hs-set-10k.txt");

    string* names = new string[100000];
    string* classes = new string[100000];
    string* rarities = new string[100000];
    string* sets = new string[100000];
    string* types = new string[100000];
    string* costs = new string[100000];

    int i = 0;

    while(!inputFile.eof()){

        getline(inputFile, names[i], '\t');
        getline(inputFile, classes[i], '\t');
        getline(inputFile, rarities[i], '\t');
        getline(inputFile, sets[i], '\t');
        getline(inputFile, types[i], '\t');
        getline(inputFile, costs[i], '\n');

        i++;
    }

    int arraySize = i - 1;
    CardManager cardManager;

    if(method == "full" && sorting == "i"){
        cardManager.insertionSortFull(arraySize, 2, names, classes, rarities, sets, types, costs);
    }else if(method == "filter" && sorting == "i"){
        cardManager.insertionSortFilter(arraySize, 5, names, classes, rarities, sets, types, costs);
    }else if(method == "full" && sorting == "m"){

    }else{

    }

    if(method == "filter"){
        outputFile.open("files/hs-set-10k-filter.txt", fstream::out);
    }else{
        outputFile.open("files/hs-set-10k-full.txt", fstream::out);
    }

    for(int k = 0; k < arraySize; k++){
        outputFile << names[k] << '\t' << classes[k] << '\t' << rarities[k]<<'\t' << sets[k] <<'\t' << types[k] <<'\t' << costs[k] << '\n';
    }

    delete [] names;
    delete [] classes;
    delete [] rarities;
    delete [] sets;
    delete [] types;
    delete [] costs;

    return 0;
}
