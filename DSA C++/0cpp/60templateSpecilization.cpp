// Template specialization
// If we want to define a different implementation for a template when a specific type is passed as template parameter, we can declare a specialization of that template.
// For example, let's suppose that we have a very simple class called mycontainer that can store one element of any type and that it has just one member function called increase, which increases its value. But we find that when it stores an element of type char it would be more convenient to have a completely different implementation with a function member uppercase, so we decide to declare a class template specialization for that type:
// template specialization

#include <iostream>
using namespace std;
// class template:

template <class T>
class mycontainer
{
    T element;

public:
    mycontainer(T arg) { element = arg; }
    T increase() { return ++element; }
};

// class template specialization:

template <>

class mycontainer<char>
{
    char element;
public:
    mycontainer(char arg) { element = arg; }
    char uppercase()
    {
        if ((element >= 'a') && (element <= 'z'))
            element += 'A' - 'a';
        return element;
    }
};

int main()
{
    mycontainer<int> myint(7);
    mycontainer<char> mychar('j');
    cout << myint.increase() << endl;
    cout << mychar.uppercase() << endl;
    return 0;
}

// First of all, notice that we precede the class template name with an empty template<> parameter list. This is to explicitly declare it as a template specialization.
// But more important than this prefix, is the <char> specialization parameter after the class template name. This specialization parameter itself identifies the type for which we are going to declare a template class specialization (char). Notice the differences between the generic class template and the specialization:
// template <class T> class mycontainer { ... };
// template <> class mycontainer <char> { ... };
// The first line is the generic template, and the second one is the specialization.
// When we declare specializations for a template class, we must also define all its members, even those exactly equal to the generic template class, because there is no "inheritance" of members from the generic template to the specialization.

// Non-type parameters for templates
// Besides the template arguments that are preceded by the class or typename keywords , which represent types, templates can also have regular typed parameters, similar to those found in functions. As an example, have a look at this class template that is used to contain sequences of elements:
// It is also possible to set default values or types for class template parameters.

