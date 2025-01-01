#pragma once

#include <string>

#include <yannet/yannet.h>
#include <yannet/os/network/NetworkException.h>

using yannet::os::network::NetworkException;

/**
 * Socket exception class
 * @author Andreas Drewke
 */
class yannet::os::network::NetworkSocketException: public NetworkException {
public:
	/**
	 * Constructor
	 * @param &message message exception message
	 */
	NetworkSocketException(const string &message) throw();
};
