# 🌵🏜️🛢️ Drilling for Oil in Texas 🛢️🏜️🌵
## VUMC Round 2 Project for Interview
#### John Graham Reynolds, johngrahamreynolds@gmail.com, 502-475-3717

Congratulations! You've inherited a large plot of land in Texas from a distant relative you didn't know you had...

Time to go Drilling for Oil!🛢️⛽

## How the Program Works

This program will help you find and drill all the oil reservoirs on your land. The program accepts as input a .txt file containing on the first line two integers, M and N, separated by a space. An M x N grid of space separated values representing a map of the land immediately follows on the remaining lines of the .txt file. The land map contains two possible values at each of the MN possible grid locations: a 'P' representing petroleum, or a 'd' representing plain ole oil-free dirt. An oil reservoir is defined as any set of **oil grid points 'P' connected _vertically_ or _horizontally_**. You may assume that the land coordinates beyond those displayed on the map are plain ole oil-free dirt (your neighbotrs have already drilled their land). The land you miraculously inherited is encoded in a 4 x 5 land map called Inheritance.txt. 

Inheritance.txt contains the following:

4 5  
P P d d d  
P P d d d  
d d P d d  
d d d P P  

Use the program drillingForOil.cpp to find out how much oil you've acquired! Some example land maps and the number of oil reservoirs they contain are included below to help you understand the basics of the program functionality. These examples are also inlcuded in the file if you want to run them yourself. The program will output the map that it is drilling in addition to the total number of oil reservoirs on it.

## How to Compile and Run the Program

I have been using the terminal and the following command to compile the program:  
g++ -std=c++11 -o drillingForOil drillingForOil.cpp

To run the program:  
./drillingForOil  

Feel free to use an IDE of your choice to compile and run the code. From the terminal, any and all .txt land map files must be in the same folder as the program itself.

## Land Map Examples

A different land map Land1.txt looks like:

6 4  
P P d d  
P P d d  
d d d d  
d P d d  
d d P P  
d d d d  

This land map contains 3 vertically and/or hortizontally connected oil reservoirs.

A trivial example Land2.txt:

3 3  
d d d  
d d d  
d d d  

This land map contains 0 vertically and/or hortizontally connected oil reservoirs.

A final example Land3.txt looks like:

6 5  
P d d d P  
d d P d P  
P P d d P  
P P d d P  
d d d d P  
d d d d d  

This land map contains 4 vertically and/or hortizontally connected oil reservoirs.

## Important: Limitations and Drawbacks of the Program

Most importantly, the program assumes a very clean file input process. The .txt files must be correctly input into the program when prompted without typo. They must be located in the appropriate folder (same folder as the program) to be processed correctly. The program also assumes that the individual .txt files are formatted correctly: first line contains two space separated integers M and N, representing the M x N grid of 'd' and 'P' space separated point values on the remaining lines of the program. In other words, this program assumes the utmost accuracy in the land map file format and user's ability to correctly type the name of the .txt file in when asked.

## Complexity Analysis of the Program's Searching Algorithm

The working body of the program, used to search for all vertically and/or hortizontally connected oil reservoirs, is an appropriately named function `drillForOil( ... )`. The `drillForOil( ... )` function `bfs( ... )`. The `bfs( ... )` function is a Breadth-first Search algorithm which uses a queue to algorithmically count and drill all vertically and/or hortizontally connected 'P' sections of the M x N map that is taken as input. 
