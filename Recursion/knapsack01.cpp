/*Given n items, each item has a certain value and weight. We have to maximize the
value of the objects we can accommodate in a bag of weight W.
Idea: For each item, we have two choices, either to include it or exclude it.*/

#include<iostream>
#include<string>
using namespace std;
int knapsack(int value[], int weight[], int n, int capacity){
    
    if(n==0 || capacity==0)
    return 0;

    if(weight[n-1]>capacity)
    return knapsack(value, weight, n-1,capacity);
    else
    return max(knapsack(value, weight, n-1 , capacity-weight[n-1])+value[n-1],
    knapsack(value, weight, n-1,capacity));
}


int main(){
int n=3;
int wt[3]={10,20,30};
int value[3]={100,50,150};
int capacity=50;
cout<<knapsack(value, wt, n, capacity);
return 0;
}