#include <iostream>
#include "email/email.hpp"
#include "email/builder.hpp"

using namespace std;

EmailBuilder& EmailBuilder::from(const string &from) {
    return *this;
}
    
        // EmailBuilder& subject(const string &subject) {
        //     m_email.m_subject = subject;
        //     return *this;
        // }
        
        // EmailBuilder& body(const string &body) {
        //     m_email.m_body = body;
        //     return *this;
        // }

// EmailBuildingStrategy<0>& EmailBuildingStrategy<0>::write(Email& email) {
//     this->email = email;
//     return *this;
// }

// EmailBuildingStrategy<0>& EmailBuildingStrategy<0>::subject(const string &subject) 
// {
//     this->email = email;
//     return *this;
// }

// EmailBuildingStrategy<1>& EmailBuildingStrategy<1>::write(Email& email) {
//     this->email = email;
//     return *this;
// }


// EmailBuilder& EmailBuilder::from(const string &from) {
//     this->m_email.m_from = from;
//     return *this;
// }

// class  {
//     public:
//         template<int T>
//         EmailBuildingStrategy<T>& write() {// requireed param
//             return EmailBuildingStrategy<T>().write(this->m_email);
//         }

//          from
        
//         EmailBuilder& to(const string &to) {
//             m_email.m_to = to;
//             return *this;
//         }
        
//         operator Email&&() {
//             return std::move(m_email); // notice the move
//         }

//     private:
//         Email m_email;
// };