# JPDAssignment

It contains 2 programs with solutions in C Programming Language.
2 Questions are as below.

Program 1:

Task 1:  

You have c number of chocolates that you want to distribute between your n students. The intelligence level of the students is not the same, therefore, you decide to distribute the chocolates in such a way that a smarter student gets strictly more chocolates than the ones who are less smart. 
The difference between the chocolates received by any two adjacent students must be exactly one. Formally, if the least intelligent student gets k chocolates, then others must get k+1, k+2, k+3,.... At the same time, your task is to minimize the number of chocolates that are left (if any) after distributing those among students. Determine the minimum number of chocolates left. 
Note - It is mandatory to give chocolates to everyone if it is possible to do so. In other words, it is not possible that some students are getting chocolates and others are not. 
Input format 
- First line: T denoting the number of test cases T  
- For each test case (next T lines): 
- First line: Two space-separated integers c and n 
Output format  
For each test case, print the minimum number of chocolates left in a new line. 
Constraints 
1≤T≤10 
1≤c≤1000 
1≤n≤100 
Sample Input 
2 (Test case count) 
20 3 (Test case value1) 
13 5 (Test case value2) 
Note: Details in the bracket are only for understanding. 
Sample Output 
2 
13 
Explanation 
In the first test case the 3 students will get 5, 6, 7 chocolates. This will make the total count to 18. Thus 20 - 18 = 2 chocolates remain. 
In the second test case, there is no valid way to distribute the chocolates. So all the chocolates remain. 

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Program 2:

Task 2: 

Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like below: 
  
So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows: 
- Window Seat: WS 
- Middle Seat: MS 
- Aisle Seat: AS 
You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS. 
Input 
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number. 
Output 
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line. 
Constraints 
- 1<=T<=105 
- 1<=N<=108 
Sample Input 
2 (Test case count) 
18 (Test case value1) 
40 (Test case value2) 
Note: Details in the bracket are only for understanding. 
Sample Output 
19 WS 
45 AS 
