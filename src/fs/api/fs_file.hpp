#pragma once

#include <stdfwd/string>
#include <stdfwd/string_view>
#include <iosfwd>

//------------------------------------------------------------------------------

namespace fs {

//------------------------------------------------------------------------------

class File
{
public:
	virtual ~File() = default;

	virtual bool eof() const = 0;
	virtual std::string getLine() const = 0;
	virtual std::istream & toInputStream() = 0;
	virtual File & operator<<( std::string_view _str ) = 0;
};

//------------------------------------------------------------------------------

}
