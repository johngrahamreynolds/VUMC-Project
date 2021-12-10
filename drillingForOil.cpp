/* VUMC Interview Round 2 Project
   Drilling for Oil

   John Graham Reynolds
   johngrahamreynolds@gmail.com
   502-475-3717                  */


#include <iostream>
#include <fstream>
#include <queue>
#include <vector>
#include <utility>

using namespace std;

//set of 4 directions to the top, bottom, left, and right adjacent matrix coordinates from the current queued coordinate
vector<pair<int, int> > directions = {{-1,0}, {1,0}, {0,-1}, {0,1}};

void bfs(vector<vector<char> >& land, int row, int col){
	
	queue<pair<int, int> > myq; //create a new queue (of land matrix coordinates) to run BFS on the given oil location in the land matrix
	land[row][col] = 'd'; //first set the current value to 'd' to mark that we have drilled this location
	myq.push(make_pair(row, col)); //push the coordinate we found oil at onto the queue

	while(!myq.empty()){ //while the queue is not empty, check for oil at the adjacent locations of the front land matrix coordinate in the queue
		for(pair<int, int> dir : directions){
			int r = myq.front().first + dir.first;
			int c = myq.front().second + dir.second;
			//if this adjacent coordinate is out-of-bounds (not a land matrix coordinate) or an oil-free 'd' coordinate, dont add it to the queue 
			if(r < 0 || c < 0 || r >= land.size() || c >= land[0].size() || land[r][c] == 'd'){
				continue;
			}
			land[r][c] = 'd'; //drill this coordinate and change its value in the land matrix
			myq.push(make_pair(r,c)); //push this coordinate onto the queue to later check its adjacent coordinates
		}
		myq.pop(); //pop off the front of the queue, the land matrix coordinate we just drilled	and whose adjacent coordinates we checked
	}
}

int drillForOil(vector<vector<char> >& land){
	int reservoirs = 0;
	//if the land matrix is NULL, empty
	if(!land.size()){
		return 0;
	}
	for(int row = 0; row < land.size(); ++row){ //loop through the land matrix and check to see if we've found oil at any coordinate
		for(int col = 0; col < land[0].size(); ++col){
			if(land[row][col] == 'P'){
				reservoirs++; //iterate the number of reservoirs we've found by 1
				bfs(land, row, col); //use BFS on a found oil location to drill all adjacent oil in this reservoir
			}
		}
	}
	
	return reservoirs;
	
}

int main () {

	int m, n;
	char c;
	string filename;
	cout << endl << "Congratulations!! You inherited some land in Texas and this program will help you drill for all possible oil reservoirs." << endl << endl;
	cout << endl << "Enter the name of the file which contains the land map of coordinates you wish to drill." << endl;
	cout << "The land you inherited is contained in 'Inheritance.txt'. If you acquire more land, you can input a different, appropriately formatted land map." << endl << endl;
	cout << "Land map filename: "; 
	cin >> filename;

	/*
		Block of Code which initializes the Oil Map and outputs it
        */
	ifstream infile(filename); //open the file which contains the land matrix		
	infile >> m >> n; //read in the size of the m x n land matrix that the file contains	
	vector<vector<char> > land(m, vector<char>(n)); //initialize the land matrix as a data structure with appropriate size
	cout << endl << "The map of your land looks like: " << endl << endl;
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			infile >> c;
			land[i][j] = c;
			cout << c << "   "; //also print the land matrix map out so it is visible
			if(j == (n - 1) ){
				cout << endl;
			}
		}
	}

	/*
		Block of Code which computes the number of Oil Reservoirs and outputs it
	*/
	int reservoirs = drillForOil(land); //compute the number of oil reservoirs
	cout << endl << "The land you inherited contains " << reservoirs << " oil reservoirs." << endl;
	if(reservoirs > 0){
		cout << "Congratulations! You're rich!" << endl << endl;
	}
	else{
		cout << "Sorry... no oil for you :(" << endl << endl;
	}

	return 0;
}
