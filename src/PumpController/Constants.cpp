// ----------------------------------------------------------------------------
// Constants.cpp
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#include "Constants.h"


namespace pump_controller
{
namespace constants
{
CONSTANT_STRING(device_name,"pump_controller");

CONSTANT_STRING(firmware_name,"PumpController");
// Use semantic versioning http://semver.org/
const modular_server::FirmwareInfo firmware_info =
{
  .name_ptr=&firmware_name,
  .version_major=1,
  .version_minor=0,
  .version_patch=0,
};

// Pins

// Units

// Properties

// Parameters

// Functions

// Callbacks

// Errors
}
}
