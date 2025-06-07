#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GrassInput.hpp"
#include "LandscapeGrassType.hpp"
void* _Script_Landscape::GrassInput::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Landscape::LandscapeGrassType*& _Script_Landscape::GrassInput::get_GrassType() {
    return *(_Script_Landscape::LandscapeGrassType**)((uintptr_t)this + 0x8);
}
void* _Script_Landscape::GrassInput::get_Input() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Landscape::GrassInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.GrassInput");
    return result;
}
