#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "VectorFieldComponent.hpp"
#include "VectorFieldVolume.hpp"
_Script_Engine::VectorFieldComponent*& _Script_Engine::VectorFieldVolume::get_VectorFieldComponent() {
    return *(_Script_Engine::VectorFieldComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::VectorFieldVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VectorFieldVolume");
    return result;
}
