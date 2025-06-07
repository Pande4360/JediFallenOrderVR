#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PurchaseInfo.hpp"
void* _Script_Engine::PurchaseInfo::get_Identifier() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PurchaseInfo::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::PurchaseInfo::get_DisplayDescription() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::PurchaseInfo::get_DisplayPrice() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::PurchaseInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PurchaseInfo");
    return result;
}
