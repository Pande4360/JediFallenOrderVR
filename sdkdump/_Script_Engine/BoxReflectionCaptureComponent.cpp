#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoxReflectionCaptureComponent.hpp"
#include "ReflectionCaptureComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::BoxReflectionCaptureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BoxReflectionCaptureComponent");
    return result;
}
float& _Script_Engine::BoxReflectionCaptureComponent::get_BoxTransitionDistance() {
    return *(float*)((uintptr_t)this + 0x35c);
}
void* _Script_Engine::BoxReflectionCaptureComponent::get_BoxDimensions() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Script_Engine::BoxReflectionCaptureComponent::get_TransitionDistanceNegative() {
    return (void*)((uintptr_t)this + 0x344);
}
void* _Script_Engine::BoxReflectionCaptureComponent::get_TransitionDistancePositive() {
    return (void*)((uintptr_t)this + 0x350);
}
