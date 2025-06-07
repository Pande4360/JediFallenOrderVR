#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Narrative_Hub_Chumps_INT_ChumpBase {
#pragma pack(push, 1)
struct INT_ChumpBase_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void AmIMerrin(bool& IsMerrin);
    void ChumpShowHideProp(void* Prop, bool HiddenInGame);
    void ChumpDisableTurnToFace();
    void ChumpAttachProp(void* Prop, bool Attached, float BlendTime, bool Hidden);
    void ChumpResetLookat();
    void ChumpLookAtTarget(_Script_Engine::Actor* Actor);
}; // Size: 0x28
#pragma pack(pop)
}
