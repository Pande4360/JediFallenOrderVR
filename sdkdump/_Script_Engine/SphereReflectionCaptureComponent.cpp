#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ReflectionCaptureComponent.hpp"
#include "SphereReflectionCaptureComponent.hpp"
float& _Script_Engine::SphereReflectionCaptureComponent::get_InfluenceRadius() {
    return *(float*)((uintptr_t)this + 0x338);
}
_Script_CoreUObject::Class* _Script_Engine::SphereReflectionCaptureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SphereReflectionCaptureComponent");
    return result;
}
