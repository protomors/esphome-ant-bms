#include "ant_button.h"
#include "esphome/core/log.h"
#include "esphome/core/application.h"

namespace esphome {
namespace ant_bms_ble {

static const char *const TAG = "ant_bms_ble.button";

void AntButton::dump_config() { LOG_BUTTON("", "AntBmsBle Button", this); }
void AntButton::press_action() { this->parent_->write_register(this->holding_register_, 0x00); }

}  // namespace ant_bms_ble
}  // namespace esphome
