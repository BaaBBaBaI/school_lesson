#include <iostream>

#include "recursive.h"

using namespace std;

int  dictDn(int n){
        n=n-1;
        
        return(n);

}

int showDn(int n){
        static string bufer="";
        bufer=bufer+to_string(n);
       
        n=dictDn(n);
        if(n == -1){
                return stoi(bufer);
                  }
        showDn(n);


}

int getMax(int* ar, int size){
  
   static int index=0;
  
    static int size1=size;
    static int max=ar[index];
    if (index==size1-1){
        return(max);
    }
    if (max<=ar[index]){
       
        max=ar[index];
      
    }
    
    
   
    index=index+1;
    getMax(ar,index);
    
}

int  inkUp(int z){
       z=z+1;
       return(z);

}


int getMin(int* ar, int size){
  
   static int index=0;
  
    static int size1=size;
    static int min=ar[index];
    if (index==size1-1){
        return(min);
    }
    if (min>=ar[index]){
       
        min=ar[index];
      
    }
    
    
   
    index=index+1;
    getMin(ar,index);
    
}

int showUp(int n){
        static int z=0;
        static string bufer="";
        bufer=bufer+to_string(z);
        z=inkUp(z);
        if(z ==n+1){
                return stoi(bufer);
        }
        else{
            return showUp(n);
        }

}