#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "SwHammerHunterTrailCollider.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwHammerHunterTrailCollider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwHammerHunterTrailCollider");
    return result;
}
bool _Script_SwGame::SwHammerHunterTrailCollider::get_bPauseTrail() {
    return (*(uint8_t*)((uintptr_t)this + 0xb88 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwHammerHunterTrailCollider::get_HammerHeadRadius() {
    return *(float*)((uintptr_t)this + 0xb98);
}
void _Script_SwGame::SwHammerHunterTrailCollider::set_bPauseTrail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb88 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwHammerHunterTrailCollider::get_HammerHeadTrailDuration() {
    return *(float*)((uintptr_t)this + 0xb9c);
}
_Script_Engine::SceneComponent*& _Script_SwGame::SwHammerHunterTrailCollider::get_HammerHeadLocation() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0xb90);
}
float& _Script_SwGame::SwHammerHunterTrailCollider::get_HammerHeadSampleRate() {
    return *(float*)((uintptr_t)this + 0xba0);
}
