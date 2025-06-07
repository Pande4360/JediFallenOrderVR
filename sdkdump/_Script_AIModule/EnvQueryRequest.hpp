#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AIModule {
struct EnvQuery;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct World;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryRequest {
    private: char pad_0[0x68]; public:
    _Script_AIModule::EnvQuery*& get_QueryTemplate();
    _Script_CoreUObject::Object*& get_Owner();
    _Script_Engine::World*& get_World();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
