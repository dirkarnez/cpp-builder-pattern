#ifndef __EMAIL_BUILDER_H__
#define __EMAIL_BUILDER_H__

#include <iostream>
#include "email/email.hpp"

using namespace std;

template<int T>
class EmailBuildingStrategy;

// Normal case
template<>
class EmailBuildingStrategy<0> {
    // public:
    //     EmailBuildingStrategy& write(Email& email);
    //     EmailBuildingStrategy& subject(const string &subject);
    //     EmailBuildingStrategy& body(const string &body);
    // private:
    //     Email email;
};

template<>
class EmailBuildingStrategy<1>  {
    // public:
    //     EmailBuildingStrategy& write(Email& email);
    //     EmailBuildingStrategy& choose_template(const string &template_name);
    // private:
    //     Email email;
};

class EmailBuilder {
    public:
        template<int T>
        EmailBuildingStrategy<T>& write();
        
        EmailBuilder& from(const string &from);
        EmailBuilder& to(const string &to);
    //     operator Email&&();

    // private:
    //     Email m_email;
};

#endif