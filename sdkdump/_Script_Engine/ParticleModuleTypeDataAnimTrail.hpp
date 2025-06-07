#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleTypeDataBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleTypeDataAnimTrail : public ParticleModuleTypeDataBase {
    private: char pad_30[0x18]; public:
    bool get_bDeadTrailsOnDeactivate();
    void set_bDeadTrailsOnDeactivate(bool value);
    bool get_bEnablePreviousTangentRecalculation();
    void set_bEnablePreviousTangentRecalculation(bool value);
    bool get_bTangentRecalculationEveryFrame();
    void set_bTangentRecalculationEveryFrame(bool value);
    float& get_TilingDistance();
    float& get_DistanceTessellationStepSize();
    float& get_TangentTessellationStepSize();
    float& get_WidthTessellationStepSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
