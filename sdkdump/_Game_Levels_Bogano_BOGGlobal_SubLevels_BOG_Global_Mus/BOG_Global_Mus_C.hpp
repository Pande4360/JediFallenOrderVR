#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Levels_Bogano_BOGGlobal_SubLevels_BOG_Global_Mus {
#pragma pack(push, 1)
struct BOG_Global_Mus_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__TriggerVolume_2_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MUS_BOG_Explore_01_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MUS_BOG_Sneak_01_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MUS_BOG_Sneak_01_02_K2Node_ActorBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MUS_BOG_Explore_02_K2Node_ActorBoundEvent_5_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MUS_BOG_CroakodileFight_01_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MUS_BOG_Explore_01_02_K2Node_ActorBoundEvent_7_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MUS_BOG_Explore_02_02_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MUS_BOG_400_ToTheVault_K2Node_ActorBoundEvent_9_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MUS_BOG_420_InsideVault_K2Node_ActorBoundEvent_11_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MUS_BOG_CroakodileFight_02_K2Node_ActorBoundEvent_12_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MUS_BOG_PostWallRunAcquireTrigger_K2Node_ActorBoundEvent_13_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void RE_NavTutorialComplete();
    void BndEvt__T_MUS_BOG_215_VaultReveal_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_MUS_BOG_Lab_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void ExecuteUbergraph_BOG_Global_Mus(int32_t EntryPoint);
}; // Size: 0x370
#pragma pack(pop)
}
