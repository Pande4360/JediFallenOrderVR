#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PathFollowingComponent.hpp"
namespace _Script_AIModule {
struct NavLocalGridManager;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct GridPathFollowingComponent : public PathFollowingComponent {
    private: char pad_318[0x30]; public:
    _Script_AIModule::NavLocalGridManager*& get_GridManager();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x348
#pragma pack(pop)
}
