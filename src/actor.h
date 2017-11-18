#pragma once

#include <cstdint>
#include <string>

class actor {
  public:
    inline virtual uint64_t getHealth() { return m_health; }
    inline virtual void setHealth(const uint64_t newHealth) { return m_health; }
  private:
    uint64_t m_health;
};
