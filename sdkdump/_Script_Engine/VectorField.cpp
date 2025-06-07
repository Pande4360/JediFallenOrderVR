#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "VectorField.hpp"
void* _Script_Engine::VectorField::get_Bounds() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::VectorField::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x44);
}
_Script_CoreUObject::Class* _Script_Engine::VectorField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VectorField");
    return result;
}
