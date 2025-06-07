#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "NavigationObjectBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlayerStart : public NavigationObjectBase {
    private: char pad_388[0x8]; public:
    void* get_PlayerStartTag();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Transform GetSpawnTransform();
}; // Size: 0x390
#pragma pack(pop)
}
