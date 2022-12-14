#pragma once
#include "events/activations/logical.h"

class NotActivation : public LogicalActivation<1> {
private:
  static const std::string classId;

protected:
  const bool operation(std::array<bool, 1> operands) override;

public:
  NotActivation(EventActivation operandA);
  const bool operator==(const NotActivation other) const;
};