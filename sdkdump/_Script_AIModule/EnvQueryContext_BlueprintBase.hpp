#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryContext.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryContext_BlueprintBase : public EnvQueryContext {
    private: char pad_28[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    void ProvideSingleLocation(_Script_CoreUObject::Object* QuerierObject, _Script_Engine::Actor* QuerierActor, _Script_CoreUObject::Vector& ResultingLocation);
    void ProvideSingleActor(_Script_CoreUObject::Object* QuerierObject, _Script_Engine::Actor* QuerierActor, _Script_Engine::Actor*& ResultingActor);
    void ProvideLocationsSet(_Script_CoreUObject::Object* QuerierObject, _Script_Engine::Actor* QuerierActor, void*& ResultingLocationSet);
    void ProvideActorsSet(_Script_CoreUObject::Object* QuerierObject, _Script_Engine::Actor* QuerierActor, void*& ResultingActorsSet);
}; // Size: 0x30
#pragma pack(pop)
}
