#ifndef __EMAIL_EMAIL_H__
#define __EMAIL_EMAIL_H__

#include <sstream>
#include <string>
#include <memory>

#include "email/builder.hpp"

using namespace std;

class Email
{
public:
    friend class EmailBuilder; // the builder can access Email's privates

    // Email::make()
    static EmailBuilder make();

    string to_string() const;
private:
    Email() = default; // restrict construction to builder

    string m_from;
    string m_to;
    string m_subject;
    string m_body;
};

#endif