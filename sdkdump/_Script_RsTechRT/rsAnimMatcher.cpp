#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
#include "RsAnimMatcherTweaksBook.hpp"
#include "rsAnimMatcher.hpp"
void* _Script_RsTechRT::rsAnimMatcher::get_TweakFile() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_RsTechRT::RsAnimMatcherTweaksBook*& _Script_RsTechRT::rsAnimMatcher::get_Tweaks() {
    return *(_Script_RsTechRT::RsAnimMatcherTweaksBook**)((uintptr_t)this + 0x38);
}
void* _Script_RsTechRT::rsAnimMatcher::get_Poses() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_RsTechRT::rsAnimMatcher::get_TweenTime() {
    return *(float*)((uintptr_t)this + 0x40);
}
void _Script_RsTechRT::rsAnimMatcher::set_PropagateSyncToContext(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x45 + 0);
    *(uint8_t*)((uintptr_t)this + 0x45 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsTechRT::rsAnimMatcher::get_SyncFromContext() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void _Script_RsTechRT::rsAnimMatcher::set_SyncFromContext(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsTechRT::rsAnimMatcher::get_PropagateSyncToContext() {
    return (*(uint8_t*)((uintptr_t)this + 0x45 + 0)) & 1 != 0;
}
void* _Script_RsTechRT::rsAnimMatcher::get_Assets() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_RsTechRT::rsAnimMatcher::get_DriverBool() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_RsTechRT::rsAnimMatcher::get_DriverInt() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_RsTechRT::rsAnimMatcher::get_DriverFloat() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_RsTechRT::rsAnimMatcher::get_DriverBitStack() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_RsTechRT::rsAnimMatcher::get_DriverBitfield() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_RsTechRT::rsAnimMatcher::get_DriverRange() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_RsTechRT::rsAnimMatcher::get_DriverName() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_RsTechRT::rsAnimMatcher::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.rsAnimMatcher");
    return result;
}
