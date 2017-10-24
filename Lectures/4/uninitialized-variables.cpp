/*
 * Copyright 2014, 2016 Jonathan Anderson
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
using namespace std;


/// Wait until the user presses Enter, then continue.
void pause();

//! There is an unsafe condition, shut down the {plant,reactor,etc.}.
void safetyShutdown();


int main(int argc, char *argv[])
{
	// Declare, but fail to initialize, some variables:
	int i, j, k;

	cout << "i: " << i << endl;
	cout << "j: " << j << endl;
	cout << "k: " << k << endl;
	pause();


	//
	// imagine that there's lots and lots of code here...
	//
	k = j - i;

	cout << "k: " << k << endl;
	pause();

	// Now we'll make decision based on the value of k:
	if (k > 10)
	{
		safetyShutdown();
	}
}



void pause()
{
	cout << "Press Enter to continue..." << endl;
	cin.get();
}

void safetyShutdown()
{
	cerr
		<< "Unsafe condition detected!" << endl
		<< "Initiating shutdown of an enormously expensive system..."
		<< endl
		;
}
