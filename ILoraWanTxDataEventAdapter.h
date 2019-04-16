/*
 * ILoraWanTxDataEventAdapter.h
 *
 *  Created on: 12.02.2019
 *      Author: nid
 */

#ifndef LIB_LORAWAN_ILORAWANTXDATAEVENTADAPTER_H_
#define LIB_LORAWAN_ILORAWANTXDATAEVENTADAPTER_H_


class ILoraWanTxDataEventAdapter
{
public:
  virtual ~ILoraWanTxDataEventAdapter() { }

  virtual void messageTransmitted() = 0;

protected:
  ILoraWanTxDataEventAdapter() { }

private: // forbidden default functions
  ILoraWanTxDataEventAdapter& operator = (const ILoraWanTxDataEventAdapter& src); // assignment operator
  ILoraWanTxDataEventAdapter(const ILoraWanTxDataEventAdapter& src);              // copy constructor
};


#endif /* LIB_LORAWAN_ILORAWANTXDATAEVENTADAPTER_H_ */
