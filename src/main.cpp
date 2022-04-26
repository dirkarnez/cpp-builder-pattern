#include <iostream>
#include <sstream>
#include <string>
#include <memory>
#include "../include/emailbuilder.hpp"

using namespace std;

// template<int T>
// class EmailBuilder;

// class Email
// {
//   public:
//     friend class EmailBuilder;  // the builder can access Email's privates

//     // Email::make()
//     static EmailBuilder make();
    
//     string to_string() const {
//         stringstream stream;
//         stream << "from: " << m_from
//                << "\nto: " << m_to
//                << "\nsubject: " << m_subject
//                << "\nbody: " << m_body;
//         return stream.str();
//     }
    
//   private:
//     Email() = default; // restrict construction to builder
    
//     string m_from;
//     string m_to;
//     string m_subject;
//     string m_body;
// };



// template<>
// class EmailBuildingStrategy<1> {
//     public:
//         EmailBuildingStrategy(YO* yo);

//         void write1() {
            
//         }
//     private:
//         YO& yo;
// };

// EmailBuildingStrategy<0>::EmailBuildingStrategy(YO* yo) {
//      cout << "";

// }

EmailBuildingStrategy<0>& EmailBuildingStrategy<0>::write() {
    cout << "0" << endl;
    return *this;
}

EmailBuildingStrategy<1>& EmailBuildingStrategy<1>::write() {
    cout << "1" << endl;
    return *this;
}


class YO {
    public:
        template<int T>
        EmailBuildingStrategy<T>& Do() {
            return EmailBuildingStrategy<T>().write();
        }
};

// class TemplatedEmailBuildingStrategy : public EmailBuildingStrategy {
//     public:
//         virtual EmailBuilder& start(EmailBuilder* builder) override {
//             return *builder;
//         }

//         void template() {

//         }
// };

// template <>
// class EmailBuilder<0>
// {
//   public:
//     EmailBuilder& from_template() {
//         TemplatedEmailBuildingStrategy t;
//         return t.start(this);
//     }

//     // EmailBuilder& from(const string &from) {
//     //     m_email.m_from = from;
//     //     return *this;
//     // }
    
//     // EmailBuilder& to(const string &to) {
//     //     m_email.m_to = to;
//     //     return *this;
//     // }
    
//     // EmailBuilder& subject(const string &subject) {
//     //     m_email.m_subject = subject;
//     //     return *this;
//     // }
    
//     // EmailBuilder& body(const string &body) {
//     //     m_email.m_body = body;
//     //     return *this;
//     // }
    
//     operator Email&&() {
//         return std::move(m_email); // notice the move
//     }
    
//   private:
//     Email m_email;
// };


// template <>
// class EmailBuilder<1>
// {
//   public:
//     EmailBuilder& write_new() {
//         NewEmailBuildingStrategy s;
//         return s.start(this);
//     }

//     // EmailBuilder& from(const string &from) {
//     //     m_email.m_from = from;
//     //     return *this;
//     // }
    
//     // EmailBuilder& to(const string &to) {
//     //     m_email.m_to = to;
//     //     return *this;
//     // }
    
//     // EmailBuilder& subject(const string &subject) {
//     //     m_email.m_subject = subject;
//     //     return *this;
//     // }
    
//     // EmailBuilder& body(const string &body) {
//     //     m_email.m_body = body;
//     //     return *this;
//     // }
    
//     operator Email&&() {
//         return std::move(m_email); // notice the move
//     }
    
//   private:
//     Email m_email;
// };

// template<int T>
// EmailBuilder<T> Email::make()
// {
//     return EmailBuilder<T>();
// }

// // Bonus example!
// std::ostream& operator <<(std::ostream& stream, const Email& email)
// {
//     stream << email.to_string();
//     return stream;
// }

int main()
{

    // EmailBuilder<0> emailbuilder_0 = Email::make<0>();
    // emailbuilder_0.from_template();

    // EmailBuilder<1> emailbuilder_1 = Email::make<1>();
    // emailbuilder_1.write_new();
    


    // Email mail = Email::make().from("me@mail.com")
    //                           .to("you@mail.com")
    //                           .subject("C++ builders")
    //                           .body("I like this API, don't you?");
    // cout << mail << endl;

    YO yo;
    yo.Do<0>().Y();
    yo.Do<1>().Z();
    cin.get();
}