#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct ActorComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ComponentOverrideRecord {
    private: char pad_0[0x80]; public:
    void* get_ComponentClass();
    _Script_Engine::ActorComponent*& get_ComponentTemplate();
    void* get_ComponentKey();
    void* get_CookedComponentInstancingData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
