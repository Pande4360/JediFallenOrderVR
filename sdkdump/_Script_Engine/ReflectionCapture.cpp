#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "ReflectionCapture.hpp"
#include "ReflectionCaptureComponent.hpp"
_Script_Engine::ReflectionCaptureComponent*& _Script_Engine::ReflectionCapture::get_CaptureComponent() {
    return *(_Script_Engine::ReflectionCaptureComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::ReflectionCapture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ReflectionCapture");
    return result;
}
