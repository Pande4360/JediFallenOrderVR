#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAIResource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIResource_Timer : public RsAIResource {
    private: char pad_108[0x18]; public:
    float& get_LockoutTime();
    void* get_LockoutMode();
    float& get_MinRandomTime();
    float& get_MaxRandomTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
