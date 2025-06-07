#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "RsBaseTriggerComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBoxDistanceTriggerComponent : public RsBaseTriggerComponent {
    private: char pad_b70[0x40]; public:
    void* get_BoxExtent();
    static _Script_CoreUObject::Class* static_class();
    void SetBoxExtent(_Script_CoreUObject::Vector InBoxExtent);
    float GetClosestPointOnTrigger(_Script_CoreUObject::Vector& Point, _Script_CoreUObject::Vector& OutPointOnTrigger);
}; // Size: 0xbb0
#pragma pack(pop)
}
