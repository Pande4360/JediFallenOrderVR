#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwBTDecorator_CanRunActiveFightBehavior.hpp"
float& _Script_SwGame::SwBTDecorator_CanRunActiveFightBehavior::get_MaxCancelDelay() {
    return *(float*)((uintptr_t)this + 0x74);
}
void* _Script_SwGame::SwBTDecorator_CanRunActiveFightBehavior::get_ResourceClass() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_SwGame::SwBTDecorator_CanRunActiveFightBehavior::get_MinCancelDelay() {
    return *(float*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBTDecorator_CanRunActiveFightBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTDecorator_CanRunActiveFightBehavior");
    return result;
}
