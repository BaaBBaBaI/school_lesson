#include <iostream>

#include "sorts.h"

#include "recursive.h"

using namespace std;

void testselectionSort() {
        
                int ar[] = {10,5,50,7,4,3,8,2,1};
                int etalonAr[] = {1,2,3,4,5,7,8,10,50};
                selectionSort(ar, 9);
                bool ok = true;
                for (int i = 0; i < 9; i++) {
                        if (etalonAr[i] != ar[i]) {
                                cout<< "selectionSort  failed" << endl;
                                ok = false;
                                break;
                        }
                }
                if (ok == true) {
                        cout << "selectionSort ok" << endl;
                }

        
}


void testbubbleSort(){
    
            int ar[] = {10,5,50,7,4,3,8,2,1};
            int etalonAr[] = {50,10,8,7,5,4,3,2,1};
            bubbleSort(ar, 9);
            bool ok = true;
            for (int i = 0; i < 9; i++) {
                    if (etalonAr[i] != ar[i]) {
                            cout<< "bubbleSort failed" << endl;
                            ok = false;
                            break;
                    }
            }
            if (ok == true) {
                    cout << "bubbleSort ok" << endl;
            }
    
void testInsertionSorts() {
        
		int ar[] = {9,8,7,6,5,4,3,2,1};
		int etalonAr[] = {9,8,7,6,5,4,3,2,1};
		insertionSort(ar, 9);
		bool ok = true;
		for (int i = 0; i < 9; i++) {
			if (etalonAr[i] != ar[i]) {
                                cout << "insertionSort failed" << endl;
				ok = false;
				break;
			}
		}
		if (ok == true) {
                        cout << "insertionSort ok" << endl;
		}

	
}

    
}
void testcountSort(){
    
            int ar[] = {10,5,50,7,4,3,8,2,1};
            int etalonAr[] = {1,2,3,4,5,7,8,10,50};
            countsort(ar, 9);
            bool ok = true;
            for (int i = 0; i < 9; i++) {
                    if (etalonAr[i] != ar[i]) {
                           cout << "countSort failed" << endl;
                            ok = false;
                            break;
                    }
            }
            if (ok == true) {
                    cout << "countSort ok" << endl;
            }

    
}

void testShowUp(){
   int etalonInt = 12345678;
    if (etalonInt != showUp(8)){
        cout << "showUp failed" << endl;
    }
    
    
    else{
        
        cout << "showUp ok" << endl;
    }
}
void testShowDn(){
   int etalonInt = 876543210;
    if (etalonInt != showDn(8)){
        cout << "showDn failed" << endl;
    }
    else{
        cout << "showDn ok" << endl;
    }
}

void testGetMin(){
    int ar[]={123,1,134,8};
    int etalonInt = 1;
    if (etalonInt != getMin(ar,4)){
        cout << "getMin failed" << endl;
    }
    else{
        cout << "getMin ok" << endl;
    }
}
void testGetMax(){
    int ar[]={123,1,134,8};
    int etalonInt = 134;
    if (etalonInt != getMax(ar,4)){
        cout << "getMax failed" << endl;
    }
    else{
        cout << "getMax ok" << endl;
    }
}

int main(){
    
        testInsertionSorts();

        testselectionSort();

        testbubbleSort();

        testcountSort();
        
        testShowUp();
        
        testShowDn();
        
        testGetMax();
        
        testGetMin();
        
}