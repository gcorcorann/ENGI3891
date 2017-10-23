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

#include <iostream>
#include <string>
using namespace std;


/// Wait until the user presses Enter, then continue.
void pause();


int main(int argc, char *argv[])
{
	int i = 42;

	int& j = i;

	cout << "Enter a number: ";
	cin >> i;

	int& k = j;

	cout << "i: " << i << endl;
	cout << "j: " << j << endl;
	cout << "k: " << k << endl;

	pause();


	// Declare some information about office numbers:
	string myOffice = "EN3028";
	string neighbourOffice = "EN3030";

	// Choose an office to paint.
	// (don't panic about this bizarre ternary operator!)
	string& toPaint = (i > 20 ? myOffice : neighbourOffice);

	cout << "Let's paint " << toPaint << "!\n";

	return 0;
}


void pause()
{
	cout << "Press Enter to continue..." << endl;
	cin.get();
}
