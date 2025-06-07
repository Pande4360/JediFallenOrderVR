#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwPinnedRopeActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Navigation_Rope_BP_BasePinnedRope {
#pragma pack(push, 1)
struct BP_BasePinnedRope_C : public _Script_SwGame::SwPinnedRopeActor {
    private: char pad_3c8[0x10]; public:
    void* get_UberGraphFrame();
    bool get_RopeDetached();
    void set_RopeDetached(bool value);
    static _Script_CoreUObject::Class* static_class();
    void RopeParticleDetached(_Script_SwGame::SwPinnedRopeActor* PinnedRope, int32_t RopeParticle);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnRopeCompletelyDetachedEvent(_Script_SwGame::SwPinnedRopeActor* PinnedRope);
    void Lvl_UpdateRopeHighlight();
    void ExecuteUbergraph_BP_BasePinnedRope(int32_t EntryPoint);
}; // Size: 0x3d8
#pragma pack(pop)
}
