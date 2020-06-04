/* This module contains methods to work with the Sniffer class, printing any information etc.
 */
#ifndef NETWORKTOOLS_SNIFF_H
#define NETWORKTOOLS_SNIFF_H

#include <tins/tins.h>
#include "configurator.h"

void printPdu(Tins::PDU *pdu);
std::unique_ptr<Tins::Sniffer> buildSniffer(Configurator &configurator);

#endif //NETWORKTOOLS_SNIFF_H