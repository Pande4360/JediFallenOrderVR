#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwGrabButtonMashState.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Croakadile_Logic_Definitions_BP_Croakodile_TongueSync {
#pragma pack(push, 1)
struct BP_Croakodile_TongueSync_C : public _Script_SwGame::SwGrabButtonMashState {
    private: char pad_3c0[0x28]; public:
    void* get_UberGraphFrame();
    int32_t& get_FailActive();
    _Script_Engine::Actor*& get_SyncVictim();
    bool get_ChainBite();
    void set_ChainBite(bool value);
    _Script_RsGameTechRT::RsCharacter*& get_Attacker();
    static _Script_CoreUObject::Class* static_class();
    void OnActionAnimationEnded(_Script_RsGameTechRT::RsCharacter* ActionOwner);
    void OnGrabStart(_Script_Engine::Actor* Victim);
    void OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker);
    void ExecuteUbergraph_BP_Croakodile_TongueSync(int32_t EntryPoint);
}; // Size: 0x3e8
#pragma pack(pop)
}
