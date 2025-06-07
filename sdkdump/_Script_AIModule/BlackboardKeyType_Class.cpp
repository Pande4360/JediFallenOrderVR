#include "..\FUObjectArray.hpp"
#include "BlackboardKeyType.hpp"
#include "BlackboardKeyType_Class.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BlackboardKeyType_Class::get_BaseClass() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_AIModule::BlackboardKeyType_Class::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BlackboardKeyType_Class");
    return result;
}
