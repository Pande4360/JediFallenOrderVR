#include "..\FUObjectArray.hpp"
#include "BTService_BlackboardBase.hpp"
#include "BTService_DefaultFocus.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTService_DefaultFocus::get_FocusPriority() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_AIModule::BTService_DefaultFocus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTService_DefaultFocus");
    return result;
}
