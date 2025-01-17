// grade.cpp
#include "grade.h"
#include "median.h"
#include "Student_info.h"
#include <vector>
#include <stdexcept>

// 중간시험 점수, 기말시험 점수, 종합 과제 점수에서
// 학생의 종합 점수를 구함
double grade(double mt, double ft, double hw) {
	return 0.2 * mt + 0.4 * ft + 0.4 * hw;
}

// 중간시험 점수, 기말시험 점수, 과제 점수의 백터로 
// 학생의 종합 점수를 구함
// 이 함수는 인수를 복사하지 않고 median 함수가 해당 작업을 실행
double grade(double mt, double ft, const vector<double>& hw) {
	if (hw.size() == 0)
		throw domain_error("No homework!");

	return grade(mt, ft, median(hw));
}

double grade(const Student_info& s) {
	return grade(s.midterm, s.final, s.homework);
}
