//
//  main.cpp
//  BubbleSort
//
//  Created by Zareek Galvan on 9/3/15.
//  Copyright (c) 2015 Trisquel Labs. All rights reserved.
//

#include <iostream>
using namespace std;

//int bubblesort
void bubbleSort(int arr[], int n) {
    bool swapped = true;
    int j = 0;
    int tmp;
    while (swapped) {
        swapped = false;
        j++;
        for (int i = 0; i < n - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                swapped = true;
            }
        }
    }
}
//string a int
int procesa(string sEntrada)
{
    int iSale = 0;
    for (int iA=0; iA<sEntrada.length(); iA++)
    {
        iSale = (iSale*10 + sEntrada[iA] - '0');
    }
    return iSale;
}

int main()
{
    string ints;
    getline(cin, ints);
    int cant = 1;
    for (int i=0; i<ints.size(); i++)
    {
        if (ints[i]==' ')
        {
            cant++;
        }
    }
    ints+=" ";
    int arr2[cant];
    int pos=0;
    for (int i=0; pos<cant ; i++)
    {
        if (ints[i]== ' ')
        {
            string number;
            int ingresa;
            number = ints.substr(0,i);
            ints.erase(0,i + 1);
            i=-1;
            ingresa = procesa(number);
            arr2[pos] = ingresa;
            pos++;
        }
    }
    //cout<<bubbleSort(arr2, cant)<<endl;
    for (int i = 0; i < cant -1; i++)
    {
        cout << arr2[i] << " ";
    }
    cout<<arr2[cant-1];
}
