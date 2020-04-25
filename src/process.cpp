#include <unistd.h>
#include <cctype>
#include <sstream>
#include <string>
#include <vector>

#include "process.h"
#include "linux_parser.h"

using std::string;
using std::to_string;
using std::vector;

Process::Process(int pid) : pid_(pid) {}

int Process::Pid() { return pid_; }

float Process::CpuUtilization() { return cpu_;}

void Process::SetCpuUtilization(long active, long all) {
    cpu_ = (float)active / all;
}

string Process::Command() { return LinuxParser::Command(pid_); }

string Process::Ram() { return LinuxParser::Ram(pid_); }

string Process::User() { return LinuxParser::User(pid_); }

long int Process::UpTime() { return LinuxParser::UpTime(pid_); }

bool Process::operator>(Process& a) {
    return CpuUtilization() > a.CpuUtilization();
}
