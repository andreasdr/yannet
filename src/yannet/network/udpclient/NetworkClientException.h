#pragma once

#include <string>

#include <yannet/network/udpclient/fwd-yannet.h>

#include <yannet/yannet.h>
#include <yannet/os/network/fwd-yannet.h>
#include <yannet/os/network/NetworkException.h>

using yannet::os::network::NetworkException;

using std::string;

/**
 * Base exception class for network client exceptions
 * @author Andreas Drewke
 */
class yannet::network::udpclient::NetworkClientException: public NetworkException {
public:
	/**
	 * @brief public constructor
	 * @param &message message exception message
	 */
	NetworkClientException(const string &message) throw();
};
