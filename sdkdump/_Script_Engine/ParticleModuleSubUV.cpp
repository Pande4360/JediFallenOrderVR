#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleSubUV.hpp"
#include "ParticleModuleSubUVBase.hpp"
#include "SubUVAnimation.hpp"
_Script_Engine::SubUVAnimation*& _Script_Engine::ParticleModuleSubUV::get_Animation() {
    return *(_Script_Engine::SubUVAnimation**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleSubUV::get_SubImageIndex() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::ParticleModuleSubUV::set_bUseRealTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleSubUV::get_bUseRealTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleSubUV::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleSubUV");
    return result;
}
