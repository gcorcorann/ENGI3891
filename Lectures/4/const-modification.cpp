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

/*
 * Aside: note that there are no standard library headers included here!
 * Not every function needs cin, cout, string, etc.
 */

int main(int argc, char *argv[])
{
	// Declare and initialize some values like we did in the slides,
	// but this time use the const keyword:
	const int i = 42;
	const int& j = i;
	const int someData[] = { 1, 2, 3, 0 };

	// Now, let's make some common mistakes!

	// Try to drop the `const` keyword:
	int& k = j;

	// Attempt to assign a new value to i:
	if ((i = 42))
	{
		// ...
	}

	// Attempt to modify `someData` rather than `j`:
	int j = 0;
	while (someData[j]++)
	{
		// ...
	}

	return 0;
}
