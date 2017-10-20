/*
 * Copyright 2014, 2015 Jonathan Anderson
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <iostream>
#include <string>
#include <typeinfo>

#include <cxxabi.h>

template<class T>
void printType(const T& object)
{
	std::string typeName = typeid(object).name();

	int stat;
	char *demangled =
		abi::__cxa_demangle(typeName.c_str(), nullptr, nullptr, &stat);

	std::cout
		<< "The type of " << object << " is:\n"
		<< (stat == 0 ? demangled : typeName.c_str()) << "\n"
		;
}
