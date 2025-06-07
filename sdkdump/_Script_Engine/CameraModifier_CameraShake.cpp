#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraModifier.hpp"
#include "CameraModifier_CameraShake.hpp"
void* _Script_Engine::CameraModifier_CameraShake::get_ActiveShakes() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::CameraModifier_CameraShake::get_SplitScreenShakeScale() {
    return *(float*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::CameraModifier_CameraShake::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CameraModifier_CameraShake");
    return result;
}
