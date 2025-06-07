#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBuddyOwnerComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x50]; public:
    void* get_OnBuddyOwnerEnteredNavMesh();
    void* get_OnBuddyOwnerLeftNavMesh();
    void* get_QueryExtentEnterNavMesh();
    void* get_QueryExtentExitNavMesh();
    float& get_OpennessQueryInterval();
    int32_t& get_MinPointsForOpenness();
    static _Script_CoreUObject::Class* static_class();
    void OnTopologyChanged(void* previousMode, void* newMode, float Proximity);
    bool IsLocationValidToDetachBuddy();
}; // Size: 0x1c0
#pragma pack(pop)
}
