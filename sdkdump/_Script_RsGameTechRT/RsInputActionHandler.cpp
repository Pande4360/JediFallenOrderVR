#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsInputActionHandler.hpp"
void* _Script_RsGameTechRT::RsInputActionHandler::get_RequiredTagQuery() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_RsGameTechRT::RsInputActionHandler::get_RequiredInputFlags() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_RsGameTechRT::RsInputActionHandler::get_RequiredNavStates() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsInputActionHandler::get_Class() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsInputActionHandler::get_OnActionFunction() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsInputActionHandler::get_RequiredHeldInputActions() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_RsGameTechRT::RsInputActionHandler::get_RequiredLoadoutFlags() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_RsGameTechRT::RsInputActionHandler::get_RequiredUpgradeFlags() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::RsInputActionHandler::get_CustomCanPerformActionCheck() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsInputActionHandler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsInputActionHandler");
    return result;
}
