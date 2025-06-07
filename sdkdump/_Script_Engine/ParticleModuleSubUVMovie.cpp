#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleSubUV.hpp"
#include "ParticleModuleSubUVMovie.hpp"
bool _Script_Engine::ParticleModuleSubUVMovie::get_bUseEmitterTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleModuleSubUVMovie::get_FrameRate() {
    return (void*)((uintptr_t)this + 0x80);
}
void _Script_Engine::ParticleModuleSubUVMovie::set_bUseEmitterTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::ParticleModuleSubUVMovie::get_StartingFrame() {
    return *(int32_t*)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleSubUVMovie::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleSubUVMovie");
    return result;
}
