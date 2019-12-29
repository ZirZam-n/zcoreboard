#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <vector>

using namespace std;

#define POOL_CAPACITY 200

class Scoreboard {
private:
	vector<int> teams;

public:
	vector<float> scores;

	Scoreboard(int teams_count);
	void remove(int team_id);
	void insert(int team_id);
	void reset_order(void);

};

#endif
