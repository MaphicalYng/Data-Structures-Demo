#pragma once
class String
{
public:

	// Create a string with given length.
	String(int length);

	// Delete the string.
	~String();

	// Get the length of this string.
	int Length();

	// Clear the string.
	void Clear();

	// Change the string with given string.
	void Assign(String target);

	// Add the string given to this string.
	void Concat(String target);

	// Insert the given string to index i.
	bool Insert(int i, String target);

	// Delete "len" chars from index i.
	bool Delete(int i, int len);

	// Get the substring of this string.
	String Substring(int i, int len);

	// Find the substring from index i.
	int Find(int i, String target);

private:

	// Store the string.
	char *string;

	// Store the length of string.
	int n;
};

