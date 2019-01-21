#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <cstdint>

class Player
{
	//Methods
	public:
		Player();
		Player( std::string firstName, std::string lastName, uint8_t number );
		virtual ~Player();
	protected:
	private:
		Player (Player &rhs);

	//Members
	public:
	protected:
	private:
		std::string m_first_name;
		std::string m_last_name;
		uint8_t     m_number;
};
	

#endif
