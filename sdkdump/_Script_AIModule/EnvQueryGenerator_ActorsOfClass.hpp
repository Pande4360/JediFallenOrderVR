#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryGenerator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryGenerator_ActorsOfClass : public EnvQueryGenerator {
    private: char pad_50[0x70]; public:
    void* get_SearchedActorClass();
    void* get_GenerateOnlyActorsInRadius();
    void* get_SearchRadius();
    void* get_SearchCenter();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
