# Lecture 2: Types and conditionals

## Exercise: scope

# What does this do?

```python
x = 'Spam'

def test1():
    x = 'Spuds'
    return x

def test2(x):
    return x

print(test1())
print(x)
print(test2('spudders'))
print(x)
```

## Types

```python
type('foo')
type(1)
type(1.1)
```

## Numbers

```python
# Experiment with what you can do with numbers.
# What works?
# What doesn't?

2 + 3
2 / 3
2**3

2 + (3/4)
```

## Exercise: Write a function to multiply 3 numbers together.

```python
def mult3(a, b, c):
    return a * b * c
```

## Exercise: Mixing types

Play around with mixing types together. What happens if you try using the operators you know with strings and ints and floats together?

## Equality

What does == do?

```python
1 == 1
1.0 == 1
"1" == 1
1.0 == 1.1
```

We have a new type!

`boolean`

What are the boolean literals?

Boolean "arithmetic" is similar to normal arithmetic, but there's only a few operators we use, and they're pretty intuitive.

What do 'and' 'or' and 'not' do on Boolean values?

What do they do on non-boolean values?

## If Statements

```python
if True:
    print("GO")
```

## Exercise: Test Function

```python
def assertThat(x, message):
    if not x:
        print("Failed test:" + message)
```

## While Statements

For simplicity, we're going to start only looking at

```python
while(True):
```

This loop keeps going until you execute `break`.

## Exercise: Sum numbers

Write a function which sums the numbers from 1 to n, and write a few tests for it, using your test function.

```python
def sumOneToN(n):
    sum = 0
    current = 1
    while True:
        sum += current
        if current > n:
            break

assertThat(sumOneToN(1) == 1, "Sum from 1 to 1 is 1.")
assertThat(sumOneToN(5) == 1 + 2 + 3 + 4 + 5, "Sum from 1 to 5 is correct.")
```

## Definitions

- Integer
- Float
- Boolean
- Scope
