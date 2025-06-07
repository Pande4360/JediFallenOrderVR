#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_RsGameTechRT {
struct RsAICharacterSpawner;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Game_Levels_Bogano_BOG800_SubLevels_BOG800_AI {
#pragma pack(push, 1)
struct BOG800_AI_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x10]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsAICharacterSpawner*& get_RsAISimpleSpawner25_ExecuteUbergraph_BOG800_AI_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void Completed_69C214664C5A3CFAD1FA5C8CA4BF9CF9(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult);
    void RE_WallRunUnlock_HideAI();
    void RE_WallRunUnlock_ShowAI();
    void ExecuteUbergraph_BOG800_AI(int32_t EntryPoint);
}; // Size: 0x378
#pragma pack(pop)
}
