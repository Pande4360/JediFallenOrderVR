#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_AIModule {
struct PawnAction;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct PawnActionsComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x38]; public:
    _Script_Engine::Pawn*& get_ControlledPawn();
    void* get_ActionStacks();
    void* get_ActionEvents();
    _Script_AIModule::PawnAction*& get_CurrentAction();
    static _Script_CoreUObject::Class* static_class();
    bool K2_PushAction(_Script_AIModule::PawnAction* NewAction, void* Priority, _Script_CoreUObject::Object* Instigator);
    bool K2_PerformAction(_Script_Engine::Pawn* Pawn, _Script_AIModule::PawnAction* Action, void* Priority);
    void* K2_ForceAbortAction(_Script_AIModule::PawnAction* ActionToAbort);
    void* K2_AbortAction(_Script_AIModule::PawnAction* ActionToAbort);
}; // Size: 0x1a8
#pragma pack(pop)
}
