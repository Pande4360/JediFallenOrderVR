#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryGenerator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryGenerator_BlueprintBase : public EnvQueryGenerator {
    private: char pad_50[0x30]; public:
    void* get_GeneratorsActionDescription();
    void* get_Context();
    void* get_GeneratedItemType();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Object* GetQuerier();
    void DoItemGeneration(void*& ContextLocations);
    void AddGeneratedVector(_Script_CoreUObject::Vector GeneratedVector);
    void AddGeneratedActor(_Script_Engine::Actor* GeneratedActor);
}; // Size: 0x80
#pragma pack(pop)
}
