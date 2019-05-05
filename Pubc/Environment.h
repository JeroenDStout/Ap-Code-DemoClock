/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#pragma once

#include "ToolboxBase/Pubc/Base Environment.h"

#include "IrisBase/Pubc/Interface Layouts.h"

namespace DemoClock {
namespace Core {
    
	class Environment : public Toolbox::Base::BaseEnvironment {
        CON_RMR_DECLARE_CLASS(Environment, Toolbox::Base::BaseEnvironment);

    protected:        
            // Web
		
        std::string internal_get_favicon_name() override { return "demo_clock_favicon.ico"; }

    public:
        Environment();
        ~Environment() override;
	};

}
}