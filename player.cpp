#include <cstdint>
#include <string>
#include "player.h"
Player::Player() :
	m_first_name("First Name"),
	m_last_name("Last Name"),
	m_number(100)
{

}

Player::Player( std::string firstName, std::string lastName, uint8_t number ) :
	m_first_name(firstName),
	m_last_name(lastName),
	m_number(number)
{

}

Player::~Player()
{

}
