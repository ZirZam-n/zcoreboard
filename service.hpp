#ifndef SCOREBOARD_SERVICE_H
#define SCOREBOARD_SERVICE_H

#include <map>
#include <vector>
#include "task.hpp"
#include "milestone.hpp"

class ScoreboardService {
	private:
		static ScoreboardService *instance;
		ScoreboardService();
		ScoreboardService(char *config_file);

	public:
		map<int, int> milestones_map,
			tasks_map;
		vector<Task> tasks;
		vector<Milestone> milestones;

		static ScoreboardService* getInstance();
		static ScoreboardService* getInstance(char *config_file);

		void run();

		void add_task(Task &task);
		void add_milestone(Milestone &ms);
};

#endif
