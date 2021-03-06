#pragma once

#include <iostream>

class String {
private:
    size_t m_size;
    size_t m_capacity;
    char* m_string;
    void invariant() const;
    void swap(String& rhs);

public:
    String();
    String(const String& rhs);
    String(String&& rhs);
    String(const char* cstr);

    int size() const;
    int capacity() const;
    void push_back(char c);
    char& at(size_t i);
    const char& at(size_t i) const;
    void reserve(size_t i);
    void shrink_to_fit();
    void resize(size_t n);
    const char* data() const;

    String& operator+=(const String& rhs);
    String operator+(const String& rhs);
    char& operator[](int i);
    const char& operator[](int i) const;
    String& operator=(const String& rhs);
    String& operator=(String&& rhs);
    explicit operator bool();
    friend bool operator==(const String& lhs, const String& rhs);
    friend bool operator!=(const String& lhs, const String& rhs);
    friend std::ostream& operator<<(std::ostream& out, const String& rhs);

    ~String();
};
