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
