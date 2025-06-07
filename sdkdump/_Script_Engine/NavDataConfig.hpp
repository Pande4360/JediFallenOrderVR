#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NavAgentProperties.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavDataConfig : public NavAgentProperties {
    private: char pad_38[0x80]; public:
    void* get_DefaultQueryExtent();
    void* get_NavigationDataClass();
    void* get_NavigationDataClassName();
    void* get_GenerationParams();
    void* get_QueryParams();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
