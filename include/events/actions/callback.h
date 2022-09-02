#include "events/action.h"
#pragma once

#include <functional>
// #include <functional>

class CallbackListener : public EventAction {
private:
  std::function<void(void)> callback;

public:
  CallbackListener(std::function<void(void)> callback);
  void execute();
};