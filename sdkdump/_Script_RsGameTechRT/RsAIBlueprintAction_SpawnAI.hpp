#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAISpawner;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIBlueprintAction_SpawnAI : public _Script_Engine::BlueprintAsyncActionBase {
    private: char pad_30[0x20]; public:
    void* get_Completed();
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::RsAIBlueprintAction_SpawnAI* SpawnAI(_Script_RsGameTechRT::RsAISpawner* Spawner, float SpawnDelay);
    void ExecuteOnAllAISpawned(void*& SpawnedAI, void* SpawnResult);
}; // Size: 0x50
#pragma pack(pop)
}
