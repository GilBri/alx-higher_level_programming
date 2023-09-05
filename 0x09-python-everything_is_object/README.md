## Objects and Values

In Python, variables are references to objects. When you assign a value to a variable, you are creating a reference to an object. The `is` operator can be used to check if two variables refer to the same object in memory.

## Aliasing

When you assign one variable to another, you are creating an alias for the same object. This means that if you modify the object through one of the variables, the change will be reflected in all variables that reference the same object.

## Immutable vs Mutable Types

An immutable object is an object whose value cannot be changed after it is created. Examples of immutable objects in Python include numbers, strings, and tuples. A mutable object, on the other hand, is an object whose value can be changed after it is created. Examples of mutable objects in Python include lists, dictionaries, and sets.

## Mutation

Mutation refers to the process of changing the value of a mutable object after it has been created. Since mutable objects can be changed in place, any changes made to them will be reflected in all variables that reference the same object.

## Cloning Lists

To create a copy of a list that is not linked to the original list, you can use the `copy` method or slicing. This creates a new list object with the same elements as the original list.

## Python Tuples: Immutable but Potentially Changing

Tuples are immutable in Python, which means that their elements cannot be changed after they are created. However, if a tuple contains a mutable object such as a list, the elements of that mutable object can still be changed. This means that while the tuple itself is immutable, its contents may still change.
