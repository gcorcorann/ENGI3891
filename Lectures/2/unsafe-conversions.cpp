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

#include "print-bits.h"

#include <iostream>
using namespace std;

/// Wait until the user presses Enter, then continue.
void pause();

int main(int argc, char *argv[])
{
	unsigned int largeInteger = (1L << 31);
	printIntegerBits(largeInteger);
	pause();

	int signedVersion = largeInteger;
	printIntegerBits(signedVersion);
	pause();

	double d = 1e100;
	cout << "A Googol is: " << d << "\n";
	pause();

	float f = d;
	cout << "A single-precision Googol is: " << f << "\n";
	pause();

	double pi = 3.1415926;
	int almost_pi = pi;

	cout << almost_pi << "\n";

	return 0;
}

void pause()
{
	cout << "Press Enter to continue..." << endl;
	cin.get();
}
