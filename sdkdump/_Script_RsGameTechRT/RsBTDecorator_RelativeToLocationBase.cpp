#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_RelativeToLocationBase.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_RelativeToLocationBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_RelativeToLocationBase");
    return result;
}
void* _Script_RsGameTechRT::RsBTDecorator_RelativeToLocationBase::get_LocationSourceKey() {
    return (void*)((uintptr_t)this + 0x68);
}
