#include "user.h"
User::User(std::string username ,std::string private_key,Server* server):username{username}
,private_key{private_key}
,server{server}
{
}
void User::send_text_message(std::string text, std::string receiver)
{
//   if(reciever=="")
//   {return false;}
   
}
void send_voice_message(std::string receiver)
{

}