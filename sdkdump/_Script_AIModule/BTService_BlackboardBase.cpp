#include "..\FUObjectArray.hpp"
#include "BTService.hpp"
#include "BTService_BlackboardBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTService_BlackboardBase::get_BlackboardKey() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_AIModule::BTService_BlackboardBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTService_BlackboardBase");
    return result;
}
