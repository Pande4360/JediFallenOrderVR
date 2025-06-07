#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsSyncDefinition.hpp"
#include "SwGrabButtonMashState.hpp"
#include "SwGrabWhiffAttackState.hpp"
_Script_RsGameTechRT::RsSyncDefinition*& _Script_SwGame::SwGrabButtonMashState::get_SuccessSync() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0x358);
}
void* _Script_SwGame::SwGrabButtonMashState::get_ButtonMashConfig() {
    return (void*)((uintptr_t)this + 0x2a8);
}
bool _Script_SwGame::SwGrabButtonMashState::get_bButtonMashActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x350 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGrabButtonMashState::set_bButtonMashActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x350 + 0);
    *(uint8_t*)((uintptr_t)this + 0x350 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwGrabButtonMashState::get_SuccessBlendSpaceInputType() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Script_SwGame::SwGrabButtonMashState::get_FailBlendSpaceInputType() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_RsGameTechRT::RsSyncDefinition*& _Script_SwGame::SwGrabButtonMashState::get_FailSync() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0x368);
}
bool _Script_SwGame::SwGrabButtonMashState::get_bDealDamageOnFail() {
    return (*(uint8_t*)((uintptr_t)this + 0x371 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGrabButtonMashState::set_bDealDamageOnFail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x371 + 0);
    *(uint8_t*)((uintptr_t)this + 0x371 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwGrabButtonMashState::get_HitEvent() {
    return (void*)((uintptr_t)this + 0x378);
}
_Script_CoreUObject::Class* _Script_SwGame::SwGrabButtonMashState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwGrabButtonMashState");
    return result;
}
void _Script_SwGame::SwGrabButtonMashState::StartButtonMash() {
    return;
}
void _Script_SwGame::SwGrabButtonMashState::OnButtonMashSuccess() {
    return;
}
void _Script_SwGame::SwGrabButtonMashState::OnButtonMashFailure() {
    return;
}
void _Script_SwGame::SwGrabButtonMashState::OnButtonMashEnd() {
    return;
}
void _Script_SwGame::SwGrabButtonMashState::FailButtonMash() {
    return;
}
void _Script_SwGame::SwGrabButtonMashState::ButtonMashSuccess() {
    return;
}
void _Script_SwGame::SwGrabButtonMashState::ButtonMashCleanup() {
    return;
}
