#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTaskNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_SpatialQueryBase : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x38]; public:
    void* get_ResultLocationKey();
    float& get_DistanceBetweenSearchPoints();
    float& get_OverrideMaxPathDistance();
    float& get_OverrideMaxProjectionHeight();
    bool get_bUseOverrideMaxPathDistance();
    void set_bUseOverrideMaxPathDistance(bool value);
    bool get_bUseOverrideMaxProjectionHeight();
    void set_bUseOverrideMaxProjectionHeight(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
