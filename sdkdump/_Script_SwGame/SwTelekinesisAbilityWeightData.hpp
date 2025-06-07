#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwTelekinesisAbilityWeightData : public _Script_Engine::TableRowBase {
    private: char pad_8[0x90]; public:
    float& get_MaxMovementSpeed();
    void* get_ForceMeterRow();
    void* get_CameraMode();
    void* get_ControlData();
    float& get_ReleaseScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
