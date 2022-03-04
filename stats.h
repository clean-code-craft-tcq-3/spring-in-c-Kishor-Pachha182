#include <stdio.h>
#include <stdint.h>

extern int emailAlertCallCount;
extern int ledAlertCallCount;

typedef struct {
  int avg;
  int min;
  int max;
}stats;
struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);


