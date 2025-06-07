#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckAIClass.hpp"
void* _Script_RsGameTechRT::RsBTDecorator_CheckAIClass::get_Class() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckAIClass::get_TargetKey() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckAIClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckAIClass");
    return result;
}
