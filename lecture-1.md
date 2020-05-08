# Lecture 1: Variables & Functions

## REPL

Read Eval Print Loop

## Strings

```python
# Define literal.
'Hello'
-> 'Hello'
```

## Variables

```python
x = 'test'
y = 'foo'
```

Target audience of variables

## Exercise: Variables

Write some code to switch the values of x and y.

```python
x = 'test'
y = 'foo'

swap = x
x = y
y = swap
```

## Operators

Operator +

```python
'test' + 'test'
```

## Functions

```python
# Indentation matters.
# A function has a name, and returns a value.
def returnHello():
    return 'hello'

# It can also take input, called a parameter
def identity(x):
    return x
```

## Exercise: basic function

Write a function which takes a string, and returns it repeated 3 times.

```python
def threeTimes(x):
    return x + x + x
```

## Finding how to do stuff

A significant part of programming is using functions that other people wrote. You can think of functions as having 3 types.

- Normal Functions
- Native Functions
- Built in Functions

A native function is written in a language other than python. If you end up trying to write code that needs to be fast (games, data crunching etc), you'll probably talk to some native functions.

When trying to find out how to do something, you'll generally want to check if a function already exists. 

## Exercise: echo

Write a program that reads in a string from a user, and then writes it back out.

```python
x = input()
print(x)
```

## Definitions

- Literal
- Variable
- Parameter
- Operator
- Function
