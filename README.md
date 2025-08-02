## Understanding the Fibonacci Recursion Sequence

Before proceeding, it is essential to understand two fundamental concepts: the Fibonacci sequence and recursion. The Fibonacci sequence is a well-known numerical pattern that begins with 0 and 1, and each subsequent number is the sum of the two preceding numbers, producing the sequence 0, 1, 1, 2, 3, 5, 8, 13, and so forth. This sequence is notable not only in mathematics but also for its occurrences in natural phenomena such as plant growth patterns and the spirals of shells. 

Recursion, on the other hand, is a programming technique wherein a function solves a problem by calling itself to address smaller instances of the same problem, thereby breaking down complex tasks into more manageable subproblems. 

In the context of the Fibonacci sequence, we find the nth number by just adding up the two numbers right before it. That means Fibonacci (n) is really just Fibonacci (n-1) plus Fibonacci (n-2). But to make sure the function doesn’t keep calling itself forever, we have to tell it when to stop, which is at n = 0 and n = 1. Those are called the base cases. Our goal in this repository is to write a Fibonacci function that gives us the number at position n using only recursion, so no loops like "for" or "while" are allowed. 
