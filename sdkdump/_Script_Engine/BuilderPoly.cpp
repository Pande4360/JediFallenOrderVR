#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BuilderPoly.hpp"
int32_t& _Script_Engine::BuilderPoly::get_PolyFlags() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::BuilderPoly::get_VertexIndices() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BuilderPoly::get_ItemName() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::BuilderPoly::get_Direction() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::BuilderPoly::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BuilderPoly");
    return result;
}
