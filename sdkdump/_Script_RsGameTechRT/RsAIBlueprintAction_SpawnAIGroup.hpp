#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIBlueprintAction_SpawnAIGroup : public _Script_Engine::BlueprintAsyncActionBase {
    private: char pad_30[0x60]; public:
    void* get_Completed();
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::RsAIBlueprintAction_SpawnAIGroup* SpawnAIGroup(_Script_CoreUObject::Object* WorldContextObject, void*& Spawners, void*& OnMemberSpawned, void*& OnGroupDied, float SpawnDelay, float SpawnInterval);
    void ExecuteOnSingleAISpawned(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult);
    void ExecuteOnAllAISpawned(void*& SpawnedAI, void* SpawnResult);
}; // Size: 0x90
#pragma pack(pop)
}
