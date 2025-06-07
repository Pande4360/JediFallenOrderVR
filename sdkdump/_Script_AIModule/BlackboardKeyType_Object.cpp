#include "..\FUObjectArray.hpp"
#include "BlackboardKeyType.hpp"
#include "BlackboardKeyType_Object.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BlackboardKeyType_Object::get_BaseClass() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_AIModule::BlackboardKeyType_Object::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BlackboardKeyType_Object");
    return result;
}
