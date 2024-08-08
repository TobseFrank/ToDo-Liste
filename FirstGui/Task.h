#pragma once
#include <string>
#include <vector>

struct Task
{
	std::string description;
	bool done;
};

void SaveTaskToFile(const std::vector<Task>& task, const std::string& fileName);
std::vector<Task> LoadTasksFromFile(const std::string& fileName);
