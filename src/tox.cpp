#include "cxxtox/tox.h"

namespace cxxtox {

cxx_tox::cxx_tox(const tox_options &options) : tox_(tox_new(options.options, nullptr)) {
}
cxx_tox::~cxx_tox() {
    tox_kill(tox_);
}

}
