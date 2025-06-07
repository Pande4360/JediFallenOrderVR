#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InAppPurchaseRestoreInfo.hpp"
void* _Script_OnlineSubsystem::InAppPurchaseRestoreInfo::get_ReceiptData() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_OnlineSubsystem::InAppPurchaseRestoreInfo::get_Identifier() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_OnlineSubsystem::InAppPurchaseRestoreInfo::get_TransactionIdentifier() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystem::InAppPurchaseRestoreInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystem.InAppPurchaseRestoreInfo");
    return result;
}
