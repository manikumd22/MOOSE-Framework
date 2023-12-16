#pragma once

#include "ComputeLagrangianStressPK2.h"


class ComputeMultiscaleStress : public ComputeLagrangianStressPK2
{
public:
  static InputParameters validParams();
  ComputeMultiscaleStress(const InputParameters & parameters);

protected:
  /// Actual stress/Jacobian update
  virtual void computeQpPK2Stress();

protected:
  const MaterialProperty<Real> & _lambda;
  const MaterialProperty<Real> & _mu;
};
