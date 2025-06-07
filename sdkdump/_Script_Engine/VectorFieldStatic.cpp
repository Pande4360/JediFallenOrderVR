#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VectorField.hpp"
#include "VectorFieldStatic.hpp"
int32_t& _Script_Engine::VectorFieldStatic::get_SizeX() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::VectorFieldStatic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VectorFieldStatic");
    return result;
}
int32_t& _Script_Engine::VectorFieldStatic::get_SizeY() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
int32_t& _Script_Engine::VectorFieldStatic::get_SizeZ() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
