#pragma once

#include <string>

#include <yannet/yannet.h>
#include <yannet/os/network/fwd-yannet.h>
#include <yannet/utilities/fwd-yannet.h>
#include <yannet/utilities/ExceptionBase.h>

using yannet::utilities::ExceptionBase;

/**
 * Base exception class for network exceptions
 * @author Andreas Drewke
 */
class yannet::os::network::NetworkException: public ExceptionBase {
public:
	/**
	 * Constructor
	 * @param &message message exception message
	 */
	NetworkException(const string &message) throw();
};
