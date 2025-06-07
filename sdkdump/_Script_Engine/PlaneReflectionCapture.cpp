#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PlaneReflectionCapture.hpp"
#include "ReflectionCapture.hpp"
_Script_CoreUObject::Class* _Script_Engine::PlaneReflectionCapture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlaneReflectionCapture");
    return result;
}
