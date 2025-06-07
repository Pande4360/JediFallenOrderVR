#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InAppPurchaseProductRequest.hpp"
void* _Script_OnlineSubsystem::InAppPurchaseProductRequest::get_ProductIdentifier() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_OnlineSubsystem::InAppPurchaseProductRequest::get_bIsConsumable() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_OnlineSubsystem::InAppPurchaseProductRequest::set_bIsConsumable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystem::InAppPurchaseProductRequest::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystem.InAppPurchaseProductRequest");
    return result;
}
