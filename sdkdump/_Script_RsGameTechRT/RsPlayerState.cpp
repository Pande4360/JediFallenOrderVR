#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PlayerState.hpp"
#include "RsPlayerState.hpp"
void* _Script_RsGameTechRT::RsPlayerState::get_LoadoutFlags() {
    return (void*)((uintptr_t)this + 0x428);
}
void _Script_RsGameTechRT::RsPlayerState::BP_OnPreSaveGame() {
    return;
}
void* _Script_RsGameTechRT::RsPlayerState::get_UpgradeFlags() {
    return (void*)((uintptr_t)this + 0x438);
}
bool _Script_RsGameTechRT::RsPlayerState::AllowLoadoutOverride() {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPlayerState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsPlayerState");
    return result;
}
bool _Script_RsGameTechRT::RsPlayerState::HasReloaded() {
    return;
}
void _Script_RsGameTechRT::RsPlayerState::BP_OnStateLoaded() {
    return;
}
void _Script_RsGameTechRT::RsPlayerState::BP_OnCacheOffNewGamePlusInfo() {
    return;
}
