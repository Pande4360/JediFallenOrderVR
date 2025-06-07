#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
namespace _Script_Engine {
struct World;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsLoadStreamingDefinitionAction : public _Script_Engine::BlueprintAsyncActionBase {
    private: char pad_30[0x38]; public:
    _Script_Engine::World*& get_World();
    void* get_LoadedStreamingDefinitions();
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::RsLoadStreamingDefinitionAction* LoadStreamingDefinitions(_Script_CoreUObject::Object* WorldContextObject, void* InStreamingDefinitionPaths);
}; // Size: 0x68
#pragma pack(pop)
}
