// Project: Simple Integer Statistics Calculator

// Create a program that allows the user to input a number n, dynamically allocates an array of n integers, 
// fills the array with values entered by the user, and then calculates the minimum, maximum, and average of the values.

// --------------PART 1 - Raw Pointers----------------
// Step 1: Prompt the user to enter a number n, the size of the array.
// Step 2: Use new to dynamically allocate an array of n integers.
// Step 3: Fill the array with values entered by the user.
// Step 4: Traverse the array and calculate the minimum, maximum, and average (as a double).
// Step 5: Print the minimum, maximum, and average values.
// Step 6: Use delete to free the dynamically allocated memory.

// -------------PART 2 - Smart Pointers(RAII-----------------
// Step 1: Rewrite the program using smart pointers (std::unique_ptr).
// Step 2: Ensure the logic is the same as in the previous part. without explicitly calling delete.
// Step 3: Observe how the smart pointer automatically manages memory.


// user should be prompted to enter n, a number signifying the amount of integers going to be inputed to an array
// the user should then be prompted to input said numbers either one-by-one, or all in one line seperated by spaces

#include <iostream>
using namespace std;

int main()
{
  // create int to store array size
  int x;
  cout << "Input the amount of numbers you want to calculate together: ";
  // get array size from user
  cin >> x;
  cout << "An array of " << x << " size was created!" << "\n";

  for (int i = 0; i < x; i++){
    int y;
    cout << "Input number " << i + 1 << ": ";
    cin >> y;
    cout << "Your number, " << y << " was inputed to the array." << "\n";
  }

}