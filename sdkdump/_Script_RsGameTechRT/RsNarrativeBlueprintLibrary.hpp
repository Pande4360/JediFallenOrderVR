#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "NarrativeEventResult.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsNarrativeSystem;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsNarrativeBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::NarrativeEventResult NarrativeEvent(_Script_CoreUObject::Object* WorldContextObject, _Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, _Script_Engine::Actor* OptionalSpeaker, bool QueueIfFails);
    _Script_RsGameTechRT::RsNarrativeSystem* GetNarrativeSystem(_Script_CoreUObject::Object* WorldContextObject);
}; // Size: 0x28
#pragma pack(pop)
}
