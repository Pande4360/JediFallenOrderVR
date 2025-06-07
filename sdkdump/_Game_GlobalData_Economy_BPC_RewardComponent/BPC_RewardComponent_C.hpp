#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Economy_BPC_RewardComponent {
#pragma pack(push, 1)
struct BPC_RewardComponent_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x78]; public:
    void* get_UberGraphFrame();
    void* get_Rewards();
    void* get_AITypesToRewards();
    void* get_TagUnlockRewards();
    static _Script_CoreUObject::Class* static_class();
    void GiveRewards();
    void PlayerKilledAI();
    void ExecuteUbergraph_BPC_RewardComponent(int32_t EntryPoint);
}; // Size: 0x1e8
#pragma pack(pop)
}
