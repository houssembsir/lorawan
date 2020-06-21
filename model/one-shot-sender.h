

#ifndef ONE_SHOT_SENDER_H
#define ONE_SHOT_SENDER_H

#include "ns3/application.h"
#include "ns3/nstime.h"
#include "ns3/lora-mac.h"
#include "ns3/attribute.h"

namespace ns3 {

class OneShotSender : public Application
{
public:
  OneShotSender ();
  OneShotSender (Time sendTime);
  ~OneShotSender ();

  static TypeId GetTypeId (void);

  /**
   * Send a packet using the LoraNetDevice's Send method.
   */
  void SendPacket (void);

  /**
   * Set the time at which this app will send a packet.
   */
  void SetSendTime (Time sendTime);

  /**
   * Start the application by scheduling the first SendPacket event.
   */
  void StartApplication (void);

  /**
   * Stop the application.
   */
  void StopApplication (void);

private:
  /**
   * The time at which to send the packet.
   */
  Time m_sendTime;

  /**
   * The sending event.
   */
  EventId m_sendEvent;

  /**
   * The MAC layer of this node.
   */
  Ptr<LoraMac> m_mac;
};

} //namespace ns3

#endif /* ONE_SHOT_APPLICATION */
