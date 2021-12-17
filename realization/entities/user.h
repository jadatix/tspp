#pragma once
#include <string>
#include <chrono>

enum Access
{
    admin,
    user
};

struct Date
{
    std::chrono::year;
};

class User{
    int id, card_num, cvv;
    std::string name, surname, email, phone_number, login, password;
    
}