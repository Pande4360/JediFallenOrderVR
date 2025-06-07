#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBaseTriggerComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_b30[0x40]; public:
    void* get_OnTriggerEntered();
    void* get_OnTriggerExited();
    void* get_TriggerType();
    bool get_bDeactivateAfterTriggered();
    void set_bDeactivateAfterTriggered(bool value);
    bool get_bDrawOnlyIfSelected();
    void set_bDrawOnlyIfSelected(bool value);
    bool get_bIsEnabled();
    void set_bIsEnabled(bool value);
    void* get_ShapeColor();
    void* get_HeroPtr();
    static _Script_CoreUObject::Class* static_class();
    void SetTriggerEnabled(bool bEnabled);
    bool IsInTrigger(_Script_Engine::Actor* Actor);
    void GetActorsInTrigger(void*& OutActorsInTrigger);
}; // Size: 0xb70
#pragma pack(pop)
}
