#include <iostream>
#include "Board.hpp"

using namespace std;

Board::Board() {
	max = 0;
	target = 32;
    numCols = 3;
	numRows = 3;
	panel  = new int*[numRows];
	for(int i = 0;i<numRows;i++){
	    panel[i] = new int[numCols];
	}
}
Board::Board(int m){
	max = 0;
	target = 32;
	if(m >= 1){
		numRows = m;
		numCols = m;
	}else {
		numRows = 3;
		numCols = 3;
	}
	panel  = new int*[numRows];
	for(int i = 0;i<numRows;i++){
	    panel[i] = new int[numCols];
	}
}

Board::Board(int m,int n){
	max  = 0;
	target= 32;
	if(m >=1 && n >= 1){
		numRows = m;
		numCols = n;
	}else{
		numRows = 3;
		numCols = 3;
	}
	panel  = new int*[numRows];
	for(int i = 0;i<numRows;i++){
	    panel[i] = new int[numCols];
	}
}
Board::~Board(){
	for(int i = 0;i < numRows;i++){
		delete []panel[i];
	}
	delete []panel;
	panel = NULL;
}
void Board::print() const{
	for(int i = 0;i<=numRows;i++){
		if(i == 0){
		    cout << "+";
		}else{
		    cout <<"\n+";
		}
		for(int j = 0;j<numCols;j++){
			cout<<"----+";
		}
		cout << "\n";
		for(int k = 0;k<=numCols;k++){
		       if(i == numRows){
		           break;
		       }
		       if(k == numCols){
		           cout <<"|";
		       }else{
			    cout<<"|    ";
		       }
		   }
	}
}