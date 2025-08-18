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

