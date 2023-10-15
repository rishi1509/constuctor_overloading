# **Constructor_Overloading**

## **THEORY**

To understand constructor overloading in C++, we first need to understand what constructors are. When we create a class object, the constructors are unique methods that are automatically invoked. We use constructors to initialize valid values to an object's data members. In C++, we can have many constructors in the same class as long as they all have a different list of arguments. This concept is called Constructor Overloading and is quite similar to function overloading. A constructor is called depending on how many and what kind of arguments are passed.

Types of Constructors

There are three types of constructors.

1. **Default Constructor**

The constructor that does not take any argument or all the arguments it takes are default variables and is referred to as the default constructor. It does not have function parameters. It is also known as a zero-argument constructor.

Syntax

class ClassName

{

public:

ClassName()// Default constructor

{
    ....
}

// Other member functions.

};

2.**Parameterized Constructor**
   
A constructor which has parameters are known as parameterized constructor. In contrast to the default constructor, it has parameters (or arguments) in the constructor definition and declaration. Multiple arguments can also pass through a parameterized constructor. This type of constructor is frequently used for overloading and initializing multiple data elements of objects with different initial values.

Syntax

class ClassName

{

public:

ClassName(data_type variable)  // Parameterized constructor.

{
    ....
}

// Other member functions.

};

3. Copy Constructor
   
Constructors in which we initialize the class object using another object of the same class is called copy constructor. It is used to initialize the members of a newly created object by copying the members of an already existing object.

Syntax

class ClassName

{
    public:
        ClassName(const ClassName & old_object) // Copy constructor.
        
    {
        ....
    }
    
    // Other member functions.
    
};

## **ALGORITHM**

- *Constructor Overloading Algorithm*:

1.Start

2.Define a class with multiple constructor declarations, each with a different parameter list. These constructors may have different numbers or types of parameters.

3.Inside each constructor, initialize the object's member variables using the provided arguments.

4.Optionally, perform any necessary initialization or validation logic inside the constructors.

5.Create objects of the class by specifying different sets of arguments when invoking the constructors.

6.When creating an object, the compiler will determine which constructor to call based on the number and types of arguments provided.

7.Use the objects to access member variables and member functions as needed.

8.End

## **OUTPUT**


![exp13_1](https://github.com/Purvansha022609/Constructors-Overloading/assets/139473344/e8df6652-a2e9-4564-91fd-0d7832690d8d)
