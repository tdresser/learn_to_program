## vscode 
Let's stop using the REPL.
One file for testing, one file for the current exercise.

Return value vs printing.

## What is a computer program?

A bunch of statements, telling the computer what to do.
During execution, program "state" changes.

One part of the program "state" is where we're currently executing.
By default, we execute statements in order.

e.g

```python
# Initial Program State: line=0.
x = 2
# State: line=..., x=2
y = x
# State: x=2, y=2
```

Within a statement, things are evaluated in a specific order, kinda like math.
For example: 

```python
2 + (2 * (3 / 4))
```

What's the first step to evaluating this?

```python
2 + (2 * (8 / 4))
2 + (2 * 2)
2 + 4
6
```
In the same way, we can think through how a program is evaluated.

```python
x = 2 + 2
y = x + 2
```

```python
x = 2 + 2
x = 4 # Modify the program state, to know that x = 4.
y = x + 2
y = 4 + 2
y = 6 # Modify the program state, to know that x = 4.
```

We can describe the assignment operator as:

Modify the program state, to know that: 
* the variable on the left hand side of the = is equal to 
* the result of evaluating the right hand side.

When we encouter a variable (unless it's on the left hand side of an assignment operator)
Replace the variable with it's value, from the program state.


Without running it, what is the program state after running:
```python
x = 3 + 2
y = x * 3
y = y + y
```

## Functions
Functions are a way of taking a chunk of code, and hiding it behind a clear name. This helps readability, and makes it easy to reuse chunks of code.

There are two parts to using functions, definition, and invocation.

Definition:

```python
def add(x, y):
    return x + y
```

A definition just modifies the program state, to know that addOne = ...

### Parts of a function definition:
* Name
* Parameters (possibly none)
* Body
* Return Value

To invoke a function, we write, for example.
```python
z = add(3 + 4, 3)
```

A function invocation needs:
* Name
* Parameter Values (possibly none)

To evaluate, we start by evaluating the parameters.
```python
add(3 + 4, 3)
z = add(7, 3)
```

Then we expand the function, by assigning the parameters, and copying the code from the function body.
```python
z = add(3 + 4, 3)
z = add(7, 3)
z = {
  x = 7
  y = 3
  return x + y
} = {
  return 7 + 3
} = 10
```

I'm using the curly braces to indicate "scope". The x and y here wouldn't overwrite existing x and y variables.

The result of evaluating the function is whatever is `returned`.

## Functions we know.
```python
input() # What does this do?
print() # What does this do?
```

Exercise - 
Write a program which defines and prints the result of a function returning whether
  the sum of the first two parameters equals the sum of the second two parameters.
Exercise - madlib.

## If
```python
if 2 == 3:
    print "yes"
else:
    print "no"
```

Evaluation: first evaluate the condition, then evaluate the appropriate branch.

```python
if 2 == 3:
    print "yes"
else:
    print "no"
```

```python
if False:
    print "yes"
else:
    print "no"
```

```python
    print "no"
```

## Exercises
Write a function which takes three inputs. If the first two aren't equal, print out the third. Otherwise, do nothing.

Use this to write a test for our function above a + b == c + d.

Write a function to return the results of a single die roll.

import random # put at the top. Pull in extra built in functions.
```python
random.randint(0,9) # the dot means "inside of"
```
random.randint takes two parameters, a lowest number to return and a highest number to return.

Write a function which uses your existing die roll function to return the sum of rolling two dice.
Is this easier to read than if you'd written this without calling a sub function?

Write a program to randomly print a magic 8 ball statement.

Write a program that never stops.


