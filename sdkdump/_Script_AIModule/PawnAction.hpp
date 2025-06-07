#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_AIModule {
struct PawnActionsComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
struct BrainComponent;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct PawnAction : public _Script_CoreUObject::Object {
    private: char pad_28[0x70]; public:
    _Script_AIModule::PawnAction*& get_ChildAction();
    _Script_AIModule::PawnAction*& get_ParentAction();
    _Script_AIModule::PawnActionsComponent*& get_OwnerComponent();
    _Script_CoreUObject::Object*& get_Instigator();
    _Script_AIModule::BrainComponent*& get_BrainComp();
    bool get_bAllowNewSameClassInstance();
    void set_bAllowNewSameClassInstance(bool value);
    bool get_bReplaceActiveSameClassInstance();
    void set_bReplaceActiveSameClassInstance(bool value);
    bool get_bShouldPauseMovement();
    void set_bShouldPauseMovement(bool value);
    bool get_bAlwaysNotifyOnFinished();
    void set_bAlwaysNotifyOnFinished(bool value);
    static _Script_CoreUObject::Class* static_class();
    void* GetActionPriority();
    void Finish(void* WithResult);
    _Script_AIModule::PawnAction* CreateActionInstance(_Script_CoreUObject::Object* WorldContextObject, void* ActionClass);
}; // Size: 0x98
#pragma pack(pop)
}
