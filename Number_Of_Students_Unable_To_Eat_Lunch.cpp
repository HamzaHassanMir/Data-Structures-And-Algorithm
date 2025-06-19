class Solution {
public:
	int countStudents(vector<int>& students, vector<int>& sandwiches) {
		int counter = 0;

		while (!students.empty())
		{
			if (students[0] == sandwiches[0])
			{
				students.erase(students.begin());
				sandwiches.erase(sandwiches.begin());
				counter = 0; // reset counter after a match
			}
			else
			{
				students.push_back(students[0]);
				students.erase(students.begin());
				counter++;
			}

			if (counter == students.size())
			{
				break;
			}
		}
		return students.size();
	}
};
