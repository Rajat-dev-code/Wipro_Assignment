#ifndef JOBS_H
#define JOBS_H

#include <string>
#include <vector>
#include <sys/types.h>

struct Job {
    int jobId;
    pid_t pid;
    std::string command;
    bool running;
};

class JobManager {
private:
    static std::vector<Job> jobs;
    static int nextJobId;

public:
    static void addJob(pid_t pid, const std::string &cmd);
    static void listJobs();
    static void bringToForeground(int jobId);
    static void moveToBackground(int jobId);
    static void checkCompletedJobs();
};

#endif
