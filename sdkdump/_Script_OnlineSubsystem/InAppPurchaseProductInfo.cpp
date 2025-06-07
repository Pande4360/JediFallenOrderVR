#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InAppPurchaseProductInfo.hpp"
void* _Script_OnlineSubsystem::InAppPurchaseProductInfo::get_TransactionIdentifier() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_OnlineSubsystem::InAppPurchaseProductInfo::get_Identifier() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_OnlineSubsystem::InAppPurchaseProductInfo::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_OnlineSubsystem::InAppPurchaseProductInfo::get_DisplayDescription() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_OnlineSubsystem::InAppPurchaseProductInfo::get_DisplayPrice() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_OnlineSubsystem::InAppPurchaseProductInfo::get_RawPrice() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_OnlineSubsystem::InAppPurchaseProductInfo::get_CurrencySymbol() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_OnlineSubsystem::InAppPurchaseProductInfo::get_CurrencyCode() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_OnlineSubsystem::InAppPurchaseProductInfo::get_DecimalSeparator() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_OnlineSubsystem::InAppPurchaseProductInfo::get_GroupingSeparator() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_OnlineSubsystem::InAppPurchaseProductInfo::get_ReceiptData() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystem::InAppPurchaseProductInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystem.InAppPurchaseProductInfo");
    return result;
}
