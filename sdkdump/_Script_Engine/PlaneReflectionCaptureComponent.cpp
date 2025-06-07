#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoxComponent.hpp"
#include "DrawSphereComponent.hpp"
#include "PlaneReflectionCaptureComponent.hpp"
#include "ReflectionCaptureComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::PlaneReflectionCaptureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlaneReflectionCaptureComponent");
    return result;
}
_Script_Engine::BoxComponent*& _Script_Engine::PlaneReflectionCaptureComponent::get_PreviewCaptureBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x348);
}
float& _Script_Engine::PlaneReflectionCaptureComponent::get_InfluenceRadiusScale() {
    return *(float*)((uintptr_t)this + 0x338);
}
_Script_Engine::DrawSphereComponent*& _Script_Engine::PlaneReflectionCaptureComponent::get_PreviewInfluenceRadius() {
    return *(_Script_Engine::DrawSphereComponent**)((uintptr_t)this + 0x340);
}
