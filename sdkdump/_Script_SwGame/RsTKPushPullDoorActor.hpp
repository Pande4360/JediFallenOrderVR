#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsModelSwapActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsTKPushPullDoorActor : public RsModelSwapActor {
    private: char pad_368[0x50]; public:
    void* get_ModelSwapOut();
    void* get_ModelSwapBent();
    void* get_ModelSwapDented();
    void* get_DoorState();
    static _Script_CoreUObject::Class* static_class();
    void SwapDented();
    void SwapBent();
    void SetSimulatingPhysics(bool Enabled);
    bool IsSimulatingPhysics();
}; // Size: 0x3b8
#pragma pack(pop)
}
