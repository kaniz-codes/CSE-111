# Class Test 1: Mid-Term Examination

## 1. Code Completion

### (a). Define the class `Book` for the given code.

```CPP
int main()
{
    Book b1;
    b1.readBook();
    b1.displayBook();
    return 0;
}
```

### (b). How can you access the private attribute `balance` of a class `Account` outside the class?

```CPP
class Account
{
private:
	float balance;
};
```

### (c). Define the functions of the `Distance` class outside the class.

```CPP
class Distance {
public:
    int feet;
    float inches;
    void addData(int f, float in);
    void showData();
};
```

## 2. Problem Solving

### (a). Design a `Product` class

-   The class should have attributes for its name, price, and quantity. Implement a function called `setProduct()` within the class to input the product details from the user. Additionally, create a function named `printProduct()` to display the product details.

-   Ensure that `setProduct()` is not directly called in the `main()` function. Add a destructor to print **"Product object destroyed."** when an object is destroyed.

### (b). Implement an `Account` class

-   Implement a class called `Account` with attributes like **account holder name**, **account number**, **account type**, and **balance**. Use a parameterized constructor to set these attributes when a new account is created.

-   If attributes are not provided, use the default constructor to set the values:
    ```bash
    account holder name = "Not Assigned"
    account number = 0
    account type = "Savings"
    balance = 0.0
    ```
