#include <iostream>
#include "email/email.hpp"

using namespace std;

string Email::to_string() const
{
    stringstream stream;
    stream << "from: " << m_from
            << "\nto: " << m_to
            << "\nsubject: " << m_subject
            << "\nbody: " << m_body;
    return stream.str();
}