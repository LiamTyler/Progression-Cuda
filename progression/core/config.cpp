#include "core/config.h"
#include <iostream>

namespace Progression { namespace config {

	Config::Config(const std::string& path)	{
		try {
			handle_ = cpptoml::parse_file(path);
		} catch (...) {
			handle_ = nullptr;
		}
	}

	Config::Config(std::shared_ptr<cpptoml::table>& handle) {
		handle_ = handle;
	}

	Config::operator bool() const {
		return handle_ != nullptr;
	}


	Config parseFile(const std::string& path) {
		return Config(path);
	}

} } // namespace Progression::config
