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
struct RsBTTask_ProjectToNavMesh : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x60]; public:
    void* get_LocationKey();
    void* get_ResultKey();
    float& get_ExtentX();
    float& get_ExtentY();
    float& get_ExtentZ();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
