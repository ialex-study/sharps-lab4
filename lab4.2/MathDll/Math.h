#pragma once

#ifdef MATH_EXPORTS
#define MATH_API __declspec(dllexport)
#else
#define MATH_API __declspec(dllimport)
#endif

extern "C" MATH_API double Add(double one, double two);

// Produce the next value in the sequence.
// Returns true on success and updates current value and index;
// false on overflow, leaves current value and index unchanged.
extern "C" MATH_API double Substract(double one, double two);

// Get the current value in the sequence.
extern "C" MATH_API double Compose(double one, double two);

// Get the position of the current value in the sequence.
extern "C" MATH_API double Divide(double one, double two);