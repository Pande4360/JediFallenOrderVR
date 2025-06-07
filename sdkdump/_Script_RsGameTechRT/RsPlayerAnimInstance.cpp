#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsGameAnimInstance.hpp"
#include "RsHero.hpp"
#include "RsPlayerAnimInstance.hpp"
void* _Script_RsGameTechRT::RsPlayerAnimInstance::get_BalanceBeamState() {
    return (void*)((uintptr_t)this + 0x1110);
}
void* _Script_RsGameTechRT::RsPlayerAnimInstance::get_JumpState() {
    return (void*)((uintptr_t)this + 0x111c);
}
void* _Script_RsGameTechRT::RsPlayerAnimInstance::get_NavTransitionState() {
    return (void*)((uintptr_t)this + 0x118c);
}
void* _Script_RsGameTechRT::RsPlayerAnimInstance::get_QuicksandState() {
    return (void*)((uintptr_t)this + 0x1188);
}
void* _Script_RsGameTechRT::RsPlayerAnimInstance::get_SwimState() {
    return (void*)((uintptr_t)this + 0x1170);
}
void* _Script_RsGameTechRT::RsPlayerAnimInstance::get_LedgeState() {
    return (void*)((uintptr_t)this + 0x1120);
}
void* _Script_RsGameTechRT::RsPlayerAnimInstance::get_climbState() {
    return (void*)((uintptr_t)this + 0x1144);
}
void* _Script_RsGameTechRT::RsPlayerAnimInstance::get_ZiplineState() {
    return (void*)((uintptr_t)this + 0x1168);
}
void* _Script_RsGameTechRT::RsPlayerAnimInstance::get_HeroState() {
    return (void*)((uintptr_t)this + 0x1190);
}
void* _Script_RsGameTechRT::RsPlayerAnimInstance::get_SpeederBikeState() {
    return (void*)((uintptr_t)this + 0x1198);
}
bool _Script_RsGameTechRT::RsPlayerAnimInstance::get_bAnimIsBlocking() {
    return (*(uint8_t*)((uintptr_t)this + 0x11a4 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPlayerAnimInstance::set_bAnimIsBlocking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsHero*& _Script_RsGameTechRT::RsPlayerAnimInstance::get_RsHeroRef() {
    return *(_Script_RsGameTechRT::RsHero**)((uintptr_t)this + 0x11b0);
}
int32_t& _Script_RsGameTechRT::RsPlayerAnimInstance::get_Hero_AttackDir() {
    return *(int32_t*)((uintptr_t)this + 0x11a8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPlayerAnimInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsPlayerAnimInstance");
    return result;
}
