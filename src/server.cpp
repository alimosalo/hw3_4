// #include "server.h"
// #include "user.h"
#include "server.h"
#include "user.h"
User Server::create_user(const std::string username)
{
    for(auto x:users)
    {
        if(username==x.get_username())
            throw std::logic_error("logic_error");

    }
    std::string public_key {},private_key{};
    crypto::generate_key(public_key,private_key);

    User temp(username,private_key,this);

    users.push_back(temp);
    public_keys.insert(std::pair<std::string,std::string>(public_key,private_key));
    return temp ;
}