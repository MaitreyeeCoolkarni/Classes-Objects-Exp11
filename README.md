# Classes-Objects-Exp11

The theory of classes and objects is a cornerstone of object-oriented programming (OOP), a paradigm used in many programming languages like Python, Java, C++, and others. Below, I’ll explain the key concepts in a clear and concise manner, covering the theory behind classes and objects, their purpose, and how they interact. If you want a more in-depth explanation or specific examples, let me know!
What Are Classes and Objects?

## Class:
A class is a blueprint or template for creating objects. It defines properties (attributes) and behaviors (methods) that the objects created from the class will have. Think of a class as a mold for making similar objects.

Example: A Car class might define attributes like color and speed, and methods like drive() or stop().


## Object: 
An object is an instance of a class. It’s a concrete entity created from the class, with its own specific values for the attributes defined by the class.

Example: A specific car, like a red Toyota with a speed of 120 mph, is an object of the Car class.



Core Concepts of Classes and Objects

## Attributes (Data):

Attributes are variables that belong to a class or object, representing its state or properties.
Example: In a Dog class, attributes might include name, age, and breed.


## Methods (Behavior):

Methods are functions defined within a class that describe what the objects can do.
Example: A Dog class might have methods like bark() or fetch().


## Encapsulation:

Encapsulation is the bundling of data (attributes) and methods that operate on that data within a class. It also involves controlling access to the data (e.g., making attributes private or public).
Example: A class might hide its internal data (like a bank account balance) and only allow access through methods like deposit() or withdraw().


## Inheritance:

Inheritance allows a class (child class) to inherit attributes and methods from another class (parent class), promoting code reuse.
Example: A SportsCar class might inherit from the Car class but add specific features like turboBoost().


## Polymorphism:

Polymorphism allows objects of different classes to be treated as objects of a common parent class, often by overriding or implementing methods differently.
Example: Both a Dog and a Cat class might inherit from an Animal class and implement a makeSound() method, but Dog barks and Cat meows.


## Abstraction:

Abstraction focuses on hiding complex implementation details and exposing only the necessary features of an object.
Example: A user of a Car class might call drive() without needing to know how the engine works internally.

## Algorithm

## Program 1

# Algorithm: Student Information Storage and Display

## Step 1: Start the program

## Step 2: Include necessary headers
- `<iostream>` for input/output operations
- `<string>` for using string data type

## Step 3: Define a `Student` class
- Data members:
  - `string name`
  - `int age`
  - `char Section`
  - `float result`

## Step 4: Create objects of the `Student` class
- `S1` initialized with: `"Maitreyee", 19, 'A', 90`
- `S2` initialized with: `"Saee", 18, 'A', 98.2`
- `S3` initialized with: `"Avani", 18, 'A', 98.2`

## Step 5: Store objects in an array
- `Student arr[3] = {S1, S2, S3}`

## Step 6: Iterate through the array using a `for` loop
- For `i = 0` to `2`:
  - Display student name
  - Display student age
  - Display student section
  - Display student result

## Step 7: End the program

# Algorithm: Display Student Information Using Class and Array

## Step 1: Start the program

## Step 2: Include necessary header files
- `#include <iostream>` for input/output
- `#include <string>` for string operations

## Step 3: Define a class `Student`
- Members of the class:
  - `string name`
  - `int age`
  - `char Section`
  - `float result`

## Step 4: Create and initialize student objects
- `S1` = {"Maitreyee", 19, 'A', 90}
- `S2` = {"Saee", 18, 'A', 98.2}
- `S3` = {"Avani", 18, 'A', 98.2}

## Step 5: Store the student objects in an array
- `Student arr[3] = {S1, S2, S3}`

## Step 6: Use a `for` loop to display details of each student
- Repeat for `i = 0` to `2`:
  - Print `"The name is: "` followed by `arr[i].name`
  - Print `"The age is: "` followed by `arr[i].age`
  - Print `"The section is: "` followed by `arr[i].Section`
  - Print `"The result is: "` followed by `arr[i].result`

## Step 7: End the program





