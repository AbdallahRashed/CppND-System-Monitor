#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) 
{ 
  
  long hour,min,sec = 0;
  hour = seconds / 3600;
  seconds = seconds % 3600;
  min = seconds / 60;
  seconds = seconds % 60;
  sec = seconds;
  string hour_str{std::to_string(hour)};
  string min_str{std::to_string(min)};
  string sec_str{std::to_string(sec)};
  string time{hour_str+':'+min_str+':'+sec_str};
  return time;
  
  
}