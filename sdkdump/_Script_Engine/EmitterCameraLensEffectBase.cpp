#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Emitter.hpp"
#include "EmitterCameraLensEffectBase.hpp"
#include "ParticleSystem.hpp"
#include "PlayerCameraManager.hpp"
_Script_Engine::ParticleSystem*& _Script_Engine::EmitterCameraLensEffectBase::get_PS_CameraEffect() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x3b0);
}
_Script_Engine::ParticleSystem*& _Script_Engine::EmitterCameraLensEffectBase::get_PS_CameraEffectNonExtremeContent() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x3b8);
}
_Script_Engine::PlayerCameraManager*& _Script_Engine::EmitterCameraLensEffectBase::get_BaseCamera() {
    return *(_Script_Engine::PlayerCameraManager**)((uintptr_t)this + 0x3c0);
}
void* _Script_Engine::EmitterCameraLensEffectBase::get_RelativeTransform() {
    return (void*)((uintptr_t)this + 0x3d0);
}
bool _Script_Engine::EmitterCameraLensEffectBase::get_bResetWhenRetriggered() {
    return (*(uint8_t*)((uintptr_t)this + 0x404 + 0)) & 2 != 0;
}
float& _Script_Engine::EmitterCameraLensEffectBase::get_BaseFOV() {
    return *(float*)((uintptr_t)this + 0x400);
}
bool _Script_Engine::EmitterCameraLensEffectBase::get_bAllowMultipleInstances() {
    return (*(uint8_t*)((uintptr_t)this + 0x404 + 0)) & 1 != 0;
}
void _Script_Engine::EmitterCameraLensEffectBase::set_bAllowMultipleInstances(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x404 + 0);
    *(uint8_t*)((uintptr_t)this + 0x404 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::EmitterCameraLensEffectBase::set_bResetWhenRetriggered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x404 + 0);
    *(uint8_t*)((uintptr_t)this + 0x404 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::EmitterCameraLensEffectBase::get_EmittersToTreatAsSame() {
    return (void*)((uintptr_t)this + 0x408);
}
float& _Script_Engine::EmitterCameraLensEffectBase::get_DistFromCamera() {
    return *(float*)((uintptr_t)this + 0x418);
}
_Script_CoreUObject::Class* _Script_Engine::EmitterCameraLensEffectBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.EmitterCameraLensEffectBase");
    return result;
}
