#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Game_WorldInteracts_AI_BP_POI {
struct BP_POI_C;
}
namespace _Script_RsGameTechRT {
struct RsAICharacterSpawner;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Game_Levels_Bogano_BOG500_SubLevels_BOG500_AI {
#pragma pack(push, 1)
struct BOG500_AI_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x70]; public:
    void* get_UberGraphFrame();
    float& get_tunnelWaitTime();
    void* get_TunnelFailTimer();
    bool get_darksoulsBogTriggered();
    void set_darksoulsBogTriggered(bool value);
    _Game_WorldInteracts_AI_BP_POI::BP_POI_C*& get_POI_DarksoulsBog_ExecuteUbergraph_BOG500_AI_RefProperty();
    _Game_WorldInteracts_AI_BP_POI::BP_POI_C*& get_POI_DarksoulsBog2_ExecuteUbergraph_BOG500_AI_RefProperty();
    _Script_RsGameTechRT::RsAICharacterSpawner*& get_RsAISimpleSpawner45_ExecuteUbergraph_BOG500_AI_RefProperty();
    _Script_RsGameTechRT::RsAICharacterSpawner*& get_RsAISimpleSpawner42_ExecuteUbergraph_BOG500_AI_RefProperty();
    _Script_RsGameTechRT::RsAICharacterSpawner*& get_RsAISimpleSpawner40_ExecuteUbergraph_BOG500_AI_RefProperty();
    _Script_RsGameTechRT::RsAICharacterSpawner*& get_RsAISimpleSpawner44_ExecuteUbergraph_BOG500_AI_RefProperty();
    _Script_RsGameTechRT::RsAICharacterSpawner*& get_RsAISimpleSpawner43_ExecuteUbergraph_BOG500_AI_RefProperty();
    _Script_RsGameTechRT::RsAICharacterSpawner*& get_RsAISimpleSpawner41_ExecuteUbergraph_BOG500_AI_RefProperty();
    _Script_RsGameTechRT::RsAICharacterSpawner*& get_RsAISimpleSpawner33_ExecuteUbergraph_BOG500_AI_RefProperty();
    _Script_RsGameTechRT::RsAICharacterSpawner*& get_RsAISimpleSpawner34_ExecuteUbergraph_BOG500_AI_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__T_DarksoulsBog_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_DarksoulsBogRemoveIgnoreall_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void CrabIntroVO(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState);
    void BndEvt__Enc_CentralTop_K2Node_ActorBoundEvent_13_RsOnEncounterGroupEvent__DelegateSignature();
    void BndEvt__Enc_CentralMid1_K2Node_ActorBoundEvent_14_RsOnEncounterGroupEvent__DelegateSignature();
    void CrabIntroVOAlso(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState);
    void ExecuteUbergraph_BOG500_AI(int32_t EntryPoint);
}; // Size: 0x3d8
#pragma pack(pop)
}
