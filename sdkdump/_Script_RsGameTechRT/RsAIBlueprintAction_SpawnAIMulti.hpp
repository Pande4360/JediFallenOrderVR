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
#pragma pack(push, 1)
struct RsAIBlueprintAction_SpawnAIMulti : public _Script_Engine::BlueprintAsyncActionBase {
    private: char pad_30[0x30]; public:
    void* get_Completed();
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::RsAIBlueprintAction_SpawnAIMulti* SpawnAIMulti(_Script_CoreUObject::Object* WorldContextObject, void*& Spawners, float SpawnDelay);
    void ExecuteOnAllAISpawned(void*& SpawnedAI, void* SpawnResult);
}; // Size: 0x60
#pragma pack(pop)
}
