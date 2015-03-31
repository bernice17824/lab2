#include "timer6.h"
#include <string>
Timer::Timer() { start_ts = 0; }
Timer::Timer(time_t s) {
	setStart(s);
}

string Timer::Category(){
	if( BMI<15 ) string Category("Very severely underweight")
	else if (BMI>=15.0 && BMI <16.0) string Category("Severely underweight")
	else if (BMI>=16.0 && BMI <18.5) string Category("Underweight")
	else if (BMI>=18.5 && BMI <25.0) string Category("Normal")
	else if (BMI>=25.0 && BMI <30) string Category("Overweight")
	else if (BMI>=30 && BMI <35) string Category("Obese Class I(Moderately obese)")
	else if (BMI>=35 && BMI <40) string Category("Obese Class II (Severely obese)")
	else (BMI>=40 ) string Category("Obese Class III (Very severely obese)")

}

