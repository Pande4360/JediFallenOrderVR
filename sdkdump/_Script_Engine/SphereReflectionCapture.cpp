#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DrawSphereComponent.hpp"
#include "ReflectionCapture.hpp"
#include "SphereReflectionCapture.hpp"
_Script_Engine::DrawSphereComponent*& _Script_Engine::SphereReflectionCapture::get_DrawCaptureRadius() {
    return *(_Script_Engine::DrawSphereComponent**)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Script_Engine::SphereReflectionCapture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SphereReflectionCapture");
    return result;
}
