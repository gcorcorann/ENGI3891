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
#include <string>
using namespace std;

//
// Print out a username.
//
// This is an example of a function that *ought* to take its parameter as a
// const reference, but for historic reasons, it doesn't.
//
void printUsername(string&);

int main(int argc, char *argv[])
{
	const string users[] = {
		"alice123",
		"bob456",
	};

	const unsigned int length = sizeof(users) / sizeof(users[0]);


	for (unsigned int i = 0; i < length; i++)
	{
		printUsername(users[i]);
	}
}



void printUsername(string& username)
{
	cout << "The username is: " << username << endl;
}
