#include <iostream>
#include <sstream>
#include <string>
#include <memory>

#include "email/email.hpp"

using namespace std;

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
// class TemplatedEmailBuildingStrategy : public EmailBuildingStrategy {
//     public:
//         virtual EmailBuilder& start(EmailBuilder* builder) override {
//             return *builder;
//         }
//         void template() {
//         }
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

    auto a = Email::make();
    // YO yo;
    // yo.Do<0>().Y();
    // yo.Do<1>().Z();
    cin.get();
}