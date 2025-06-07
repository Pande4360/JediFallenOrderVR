#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBaseTriggerComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsDistanceTriggerComponent : public RsBaseTriggerComponent {
    float& get_TriggerDistance();
    static _Script_CoreUObject::Class* static_class();
    void SetTriggerDistance(float InTriggerDistance);
    float GetClosestPointOnTrigger(_Script_CoreUObject::Vector& Point, _Script_CoreUObject::Vector& OutPointOnTrigger);
}; // Size: 0xb70
#pragma pack(pop)
}
