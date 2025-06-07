#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NavRelevantComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavModifierComponent : public NavRelevantComponent {
    private: char pad_1a0[0x28]; public:
    void* get_AreaClass();
    void* get_FailsafeExtent();
    bool get_bIncludeAgentHeight();
    void set_bIncludeAgentHeight(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetAreaClass(void* NewAreaClass);
}; // Size: 0x1c8
#pragma pack(pop)
}
