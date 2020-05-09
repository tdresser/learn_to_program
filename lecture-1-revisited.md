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

## Functions
Functions are a way of taking a chunk of code, and hiding it behind a clear name. This helps readability, and makes it easy to reuse chunks of code.

There are two parts to using functions, definition, and invocation.

Definition:

```python
def add(x, y):
    return x + y
```

A definition just modifies the program state, to know that addOne = ...

### Parts of a function:
* Name
* Parameters
* Body
* Return Value

To invoke a function, we write, for example.
```python
z = add(3 + 4, 3)
```

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
  x + y
} = {
  7 + 3
} = 10
```

I'm using the curly braces to indicate "scope". The x and y here wouldn't overwrite existing x and y variables.
