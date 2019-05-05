/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#include "DemoClock/Pubc/Version.h"

#include "DemoClock/-genc/def_repo_version.h"
#include "DemoClock/-genc/def_contribute.h"

namespace DemoClock {
	namespace Core {
		
		BR_VERSION_DEFINE(DemoClock);
        BR_CONTRIBUTE_DEFINE(DemoClock);
        BR_PROJECT_DEFINE(DemoClock);

	}
} 
