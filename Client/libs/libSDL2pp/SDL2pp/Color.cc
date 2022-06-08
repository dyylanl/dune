/*
  libSDL2pp - C++11 bindings/wrapper for SDL2
  Copyright (C) 2017 Vraiment <jemc44@gmail.com>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, m_Animation acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#include <SDL2pp/Color.hh>

std::ostream& operator<<(std::ostream& stream, const SDL2pp::Color& color) {
	stream << "[r:" << static_cast<int>(color.r) << ",g:" << static_cast<int>(color.g) << ",b:" << static_cast<int>(color.b) << ",a:" << static_cast<int>(color.a) << "]";
	return stream;
}