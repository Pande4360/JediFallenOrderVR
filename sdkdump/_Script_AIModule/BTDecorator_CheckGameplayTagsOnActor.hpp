#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTDecorator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTDecorator_CheckGameplayTagsOnActor : public BTDecorator {
    private: char pad_68[0x60]; public:
    void* get_ActorToCheck();
    void* get_TagsToMatch();
    void* get_GameplayTags();
    void* get_CachedDescription();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
