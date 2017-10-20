/*
 * Copyright 2014 Jonathan Anderson
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

#include <bitset>
#include <iostream>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wconversion"

template<class T>
void printIntegerBits(const T& value)
{
	std::bitset<8 * sizeof(value)> bits(value);

	std::cout
		<< "bits in " << static_cast<long long>(value)
		<< ": " << bits << "\n"
		;
}

#pragma clang diagnostic pop
