This line includes the standard input-output library, which allows you to use functions like printf() and scanf().
The starting point of the program — all the main execution happens inside this main() function.
Declares variables:
choice: to store the user’s menu selection.
transaction: counts how many transactions have been performed (starts at 0).
balance: stores the current bank balance (initially ₹10,000).
amount: used for deposit or withdrawal amount.
Displays the program title and the starting account balance formatted with two decimal places.
Starts an infinite loop so that the ATM menu repeats until the user chooses to exit.
Displays the menu options every time and takes input from the user for which operation to perform (1–4).
Checks whether the user has already done 5 transactions.
If yes, it stops further transactions (except exit) and ends the loop.
the swithch is used to for choice theof selecting the amoung the 4 options.
it is used to displaay the options.
for the options we have to select the any one option amoung them.
Performs several checks before withdrawing:
Invalid if amount ≤ 0.
Not allowed if balance after withdrawal would go below ₹500 (minimum balance).
Fails if withdrawal amount exceeds balance.
