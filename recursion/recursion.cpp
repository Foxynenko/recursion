#include <iostream>

//Завдання 1
/*
void print_string_in_reverse(const char* str) {
    if (*str == '\0') {
        return;
    }

    print_string_in_reverse(str + 1);
    std::cout << *str;
}*/

//Завдання 2
/* struct Node {
    int val;
    Node* next;
};

Node* createList() {
    Node* head = new Node{ 1, nullptr };
    Node* curr = head;

    for (int i = 2; i <= 4; i++) {
        curr->next = new Node{ i, nullptr };
        curr = curr->next;
    }

    return head;
}

Node* swapPairs(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Отримуємо наступні два вузли.
    Node* first = head;
    Node* second = head->next;

    // Поміняємо місцями вказівники вузлів.
    first->next = second->next;
    second->next = first;

    // Повертаємо голову списку.
    return second;
}*/

//Завдання 3
/*
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}*/

//Завдання 4
/*int climbStairs(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }
    else {
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
}*/

//Завдання 5
double pow(double x, int n) {
    if (n == 0) {
        return 1;
    }
    else if (n < 0) {
        return 1 / pow(x, -n);
    }
    else {
        return x * pow(x, n - 1);
    }
}

int main() {
    //Завдання 1
    //    print_string_in_reverse("Hello world");

    //Завдання 2
  /*  Node* head = createList();

    head = swapPairs(head);

    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    } */

    //Завдання 3
  /*int n = 4;

    int result = fibonacci(n);

    std::cout << "F(" << n << ") = " << result << std::endl;*/
    
    //Завдання 4
  /*  int n = 4;

    int result = climbStairs(n);

    std::cout << "The number of unique combinations to climb " << n << " steps is " << result << std::endl;
*/
    //Завдання 5
    double x = 2.0;
    int n = 3;

    double result = pow(x, n);

    std::cout << x << " pow(" << n << ") = " << result << std::endl;

    return 0;
}
