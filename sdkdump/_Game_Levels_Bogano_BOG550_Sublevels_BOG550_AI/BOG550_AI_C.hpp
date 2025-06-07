#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Game_Levels_Bogano_BOG550_Sublevels_BOG550_AI {
#pragma pack(push, 1)
struct BOG550_AI_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__RsAISimpleSpawner8_K2Node_ActorBoundEvent_3_RsAICharacterSpawnedEvent__DelegateSignature(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult);
    void OggdovAttackVO(_Script_RsGameTechRT::RsCharacter* Character, void* PreviousCombatState, void* NewCombatState);
    void ExecuteUbergraph_BOG550_AI(int32_t EntryPoint);
}; // Size: 0x370
#pragma pack(pop)
}
