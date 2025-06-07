#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
#include "NarrativeEventResult.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsNarrativeTriggerComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x40]; public:
    void* get_EventDetails();
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::NarrativeEventResult TriggerNarrativeForActors(void*& Actors);
    _Script_RsGameTechRT::NarrativeEventResult TriggerNarrative();
}; // Size: 0x1b0
#pragma pack(pop)
}
