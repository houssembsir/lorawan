
#include "lora-utils.h"
#include <cmath>

namespace ns3 {

double
DbToRatio (double dB)
{
  double ratio = std::pow (10.0, dB / 10.0);
  return ratio;
}

double
DbmToW (double dBm)
{
  double mW = std::pow (10.0, dBm / 10.0);
  return mW / 1000.0;
}

double
WToDbm (double w)
{
  return 10.0 * std::log10 (w * 1000.0);
}

double
RatioToDb (double ratio)
{
  return 10.0 * std::log10 (ratio);
}

} //namespace ns3
