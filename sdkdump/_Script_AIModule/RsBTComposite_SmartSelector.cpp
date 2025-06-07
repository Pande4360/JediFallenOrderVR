#include "..\FUObjectArray.hpp"
#include "BTCompositeNode.hpp"
#include "RsBTComposite_SmartSelector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::RsBTComposite_SmartSelector::get_ParentTag() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_AIModule::RsBTComposite_SmartSelector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.RsBTComposite_SmartSelector");
    return result;
}
