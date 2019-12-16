#pragma once

#include "core/component.h"

namespace Progression {

    class RTInfo : public Component {
    public:
        RTInfo() {}
        RTInfo(GameObject* g) : Component(g) {}
        virtual ~RTInfo() = default;
        virtual void Start() {}
        virtual void Update() {}
        virtual void Stop() {}

        int type;
        // for models
        std::string modelName;

        // for spheres
        std::string matName;
        float radius;
    };
    
} // namespace Progression
