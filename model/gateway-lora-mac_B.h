

#ifndef GATEWAY_LORA_MAC_H
#define GATEWAY_LORA_MAC_H

#include "ns3/lora-mac.h"
#include "ns3/lora-tag.h"
#include "ns3/log.h"


namespace ns3 {

class GatewayLoraMac : public LoraMac
{
public:


  static TypeId GetTypeId (void);

  GatewayLoraMac();
  virtual ~GatewayLoraMac();

  // Implementation of the LoraMac interface
  virtual void Send (Ptr<Packet> packet);

  // Implementation of the LoraMac interface
  bool IsTransmitting (void);

  // Implementation of the LoraMac interface
  virtual void Receive (Ptr<Packet const> packet);

  // Implementation of the LoraMac interface
  virtual void FailedReception (Ptr<Packet const> packet);

  // Implementation of the LoraMac interface
  virtual void mac_config (Ptr<Packet const> packet);

  void ClassBSendBeacon (void) ;

  /**
   * Return the next time at which we will be able to transmit.
   *
   * \return The next transmission time.
   */
  Time GetWaitingTime (double frequency);
private:

protected:

};

} /* namespace ns3 */

#endif /* GATEWAY_LORA_MAC_H */
