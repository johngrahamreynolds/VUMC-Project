# 🌵🏜️🛢️ Drilling for Oil in Texas 🛢️🏜️🌵
## VUMC Round 2 Project for Interview
#### John Graham Reynolds, johngrahamreynolds@gmail.com, 502-475-3717

Congratulations! You've inherited a large plot of land in Texas from a distant relative you didn't know you had...

Time to go Drilling for Oil!🛢️⛽

## How the Program Works

This program will help you find and drill all the oil reservoirs on your land. The program accepts as input a .txt file containing on the first line two integers, M and N, separated by a space. An M x N grid of space separated values representing a map of the land immediately follows on the remaining lines of the .txt file. The land map contains two possible values at each of the MN possible grid locations: a 'P' representing petroleum, or a 'd' representing plain ole oil-free dirt. An oil reservoir is defined as any set of **oil grid points 'P' connected _vertically_ or _horizontally_**. The land you miraculously inherited is encoded in a 4 x 5 land map called Inheritance.txt. 

Inheritance.txt contains the following:

4 5  
P  P d d d  
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

This land map contains 3 vertically or hortizontally connected oil reservoirs.

A trivial example Land2.txt:

3 3  
d d d  
d d d  
d d d  

This land map contains 0 vertically or hortizontally connected oil reservoirs.

A final example Land3.txt looks like:

6 5  
P d d d P  
d d P d P  
P P d d P  
P P d d P  
d d d d P  
d d d d d  

This land map contains 4 vertically or hortizontally connected oil reservoirs.

## Important: Limitations and Drawbacks of the Program

## Complexity Analysis of the Program's Searching Algorithm
