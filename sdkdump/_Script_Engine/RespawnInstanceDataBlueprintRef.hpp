#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RespawnInstanceDataBlueprintRef {
    private: char pad_0[0x10]; public:
    _Script_Engine::Actor*& get_InstanceDataOwner();
    int32_t& get_InstanceDataUID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
