#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsTargetableComponent : public _Script_Engine::SceneComponent {
    private: char pad_2d0[0x40]; public:
    void* get_OnPreFactionChangedEvent();
    void* get_OnFactionChangedEvent();
    void* get_DefaultFactionTag();
    bool get_bCanBetargeted();
    void set_bCanBetargeted(bool value);
    bool get_bCanBePlayerZTargeted();
    void set_bCanBePlayerZTargeted(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetFactionTag(_Script_GameplayTags::GameplayTag NewFactionTag);
    void ResetFactionTagToDefault();
    _Script_GameplayTags::GameplayTag GetFactionTag();
    _Script_GameplayTags::GameplayTag GetDefaultFactionTag();
    void GetAllTargetableActors(_Script_CoreUObject::Object* WorldContextObject, void*& OutActors);
    void GetAllHostileTargetableActors(_Script_CoreUObject::Object* WorldContextObject, _Script_GameplayTags::GameplayTag FactionTag, void*& OutActors);
}; // Size: 0x310
#pragma pack(pop)
}
