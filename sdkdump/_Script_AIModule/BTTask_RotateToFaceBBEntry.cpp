#include "..\FUObjectArray.hpp"
#include "BTTask_BlackboardBase.hpp"
#include "BTTask_RotateToFaceBBEntry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AIModule::BTTask_RotateToFaceBBEntry::get_Precision() {
    return *(float*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_RotateToFaceBBEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_RotateToFaceBBEntry");
    return result;
}
