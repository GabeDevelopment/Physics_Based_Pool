// (c) Marco Gilardi, 2017
#pragma once

#include "Parameters.h"
#include "Solver.h"

class VerletSolver :public Solver
{
private:
	void solver(Parameters* params, float dt);
};