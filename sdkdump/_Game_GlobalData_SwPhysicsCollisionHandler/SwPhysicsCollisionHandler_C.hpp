#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsGamePhysicsCollisionHandler.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_SwPhysicsCollisionHandler {
#pragma pack(push, 1)
struct SwPhysicsCollisionHandler_C : public _Script_RsGameTechRT::RsGamePhysicsCollisionHandler {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
