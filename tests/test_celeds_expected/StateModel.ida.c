/*
   There are a total of 0 entries in the algebraic variable array.
   There are a total of 1 entries in each of the rate and state variable arrays.
   There are a total of 0 entries in the constant variable array.
 */
/*
 * VOI is time in component mainComp (second).
 * STATES[0] is x in component mainComp (dimensionless).
 * RATES[0] is d/dt x in component mainComp (dimensionless).
 * There are a total of 1 entries in the conditional output status array.
 */
void
initConsts(double* CONSTANTS, double* RATES, double *STATES)
{
STATES[0] = 0;
RATES[0] = 0.1;
}
void
computeResiduals(double VOI, double* CONSTANTS, double* RATES, double* STATES, double* ALGEBRAIC)
{
if (STATES[0]<100.000)
{
  resid[0] = RATES[0] - 1.00000;
CONDOUT[0] |= 1;
}
else if (1)
{
  resid[0] = RATES[0] - -1.00000;
CONDOUT[0] |= 1;
}
}
void
computeVariables(double VOI, double* CONSTANTS, double* RATES, double* STATES, double* ALGEBRAIC)
{
}
void
computeEssentialVariables(double VOI, double* CONSTANTS, double* RATES, double* STATES, double* ALGEBRAIC)
{
}
void
getStateInformation(double* SI)
{
SI[0] = 1.0;
}