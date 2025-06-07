#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsCameraInputs.hpp"
#include "RsCameraManager.hpp"
#include "RsCameraManagerDefinition.hpp"
#include "RsSplineCameraDefinition.hpp"
void* _Script_RsGameTechRT::RsCameraInputs::get_BaseLocationDelta() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_DynamicRotationOffsetCS() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_AnchorLocation() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_RsGameTechRT::RsSplineCameraDefinition*& _Script_RsGameTechRT::RsCameraInputs::get_SplineCameraDefinition() {
    return *(_Script_RsGameTechRT::RsSplineCameraDefinition**)((uintptr_t)this + 0xc0);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_LocalMovementDirection() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Script_RsGameTechRT::RsCameraInputs::get_DefaultFOV() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_AnchorRotation() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_DynamicLocationOffsetCS() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_MouseInput() {
    return (void*)((uintptr_t)this + 0x100);
}
float& _Script_RsGameTechRT::RsCameraInputs::get_DynamicOffsetTransitionTime() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_FocusLocation() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_FocusDirection() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_SplineCameraInitMethod() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_Engine::Actor*& _Script_RsGameTechRT::RsCameraInputs::get_ViewTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x50);
}
_Script_Engine::Actor*& _Script_RsGameTechRT::RsCameraInputs::get_FocusActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x58);
}
_Script_Engine::Actor*& _Script_RsGameTechRT::RsCameraInputs::get_SplineCameraAttachActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0xc8);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_FocusSocket() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_RsGameTechRT::RsCameraInputs::get_LastFocusActorSetTime() {
    return *(float*)((uintptr_t)this + 0x68);
}
_Script_RsGameTechRT::RsCameraManagerDefinition*& _Script_RsGameTechRT::RsCameraInputs::get_CameraDefinition() {
    return *(_Script_RsGameTechRT::RsCameraManagerDefinition**)((uintptr_t)this + 0x70);
}
float& _Script_RsGameTechRT::RsCameraInputs::get_CurrentTime() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_RsGameTechRT::RsCameraInputs::get_LastLookInputTime() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_RsGameTechRT::RsCameraInputs::get_LastMovementInputTime() {
    return *(float*)((uintptr_t)this + 0x80);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_MovementDirection() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_RsGameTechRT::RsCameraInputs::get_bUseMovementInput() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCameraInputs::set_bUseMovementInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsCameraManager*& _Script_RsGameTechRT::RsCameraInputs::get_CameraManager() {
    return *(_Script_RsGameTechRT::RsCameraManager**)((uintptr_t)this + 0xb8);
}
float& _Script_RsGameTechRT::RsCameraInputs::get_DeltaTime() {
    return *(float*)((uintptr_t)this + 0xe8);
}
float& _Script_RsGameTechRT::RsCameraInputs::get_DynamicOffsetTransitionTimeRemaining() {
    return *(float*)((uintptr_t)this + 0xec);
}
float& _Script_RsGameTechRT::RsCameraInputs::get_NavSurfaceZ() {
    return *(float*)((uintptr_t)this + 0xf0);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_ControllerInput() {
    return (void*)((uintptr_t)this + 0xf4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCameraInputs::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsCameraInputs");
    return result;
}
void* _Script_RsGameTechRT::RsCameraInputs::get_AimDirection() {
    return (void*)((uintptr_t)this + 0x10c);
}
void* _Script_RsGameTechRT::RsCameraInputs::get_BaseRotationDelta() {
    return (void*)((uintptr_t)this + 0x124);
}
