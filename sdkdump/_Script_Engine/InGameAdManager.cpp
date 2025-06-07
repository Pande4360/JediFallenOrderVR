#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InGameAdManager.hpp"
#include "PlatformInterfaceBase.hpp"
bool _Script_Engine::InGameAdManager::get_bShouldPauseWhileAdOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::InGameAdManager::set_bShouldPauseWhileAdOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::InGameAdManager::get_ClickedBannerDelegates() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::InGameAdManager::get_ClosedAdDelegates() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::InGameAdManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InGameAdManager");
    return result;
}
