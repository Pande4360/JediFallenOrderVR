#include "..\FUObjectArray.hpp"
#include "BTCompositeNode.hpp"
#include "BTComposite_SimpleParallel.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BTComposite_SimpleParallel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTComposite_SimpleParallel");
    return result;
}
void* _Script_AIModule::BTComposite_SimpleParallel::get_FinishMode() {
    return (void*)((uintptr_t)this + 0x90);
}
